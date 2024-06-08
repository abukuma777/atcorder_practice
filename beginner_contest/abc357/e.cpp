#include <iostream>
#include <vector>
using namespace std;

void detectCycle(int node, vector<int> &next, vector<int> &visited, vector<int> &cycleSize, vector<int> &reachableCount, int &time, vector<int> &entry)
{
    int current = node;
    vector<int> path;
    int startTime = time;

    while (true)
    {
        if (visited[current] != -1)
        {
            if (entry[current] >= startTime)
            {
                // サイクルを検出
                int cycle_start = current;
                int cycle_length = 0;
                do
                {
                    cycle_length++;
                    current = next[current];
                } while (current != cycle_start);
                // サイクル内のすべてのノードにサイクルの長さを設定
                current = cycle_start;
                do
                {
                    cycleSize[current] = cycle_length;
                    reachableCount[current] = cycle_length;
                    current = next[current];
                } while (current != cycle_start);
            }
            break;
        }
        visited[current] = node;
        entry[current] = time++;
        path.push_back(current);
        current = next[current];
    }

    // サイクル外の頂点からサイクルに到達する場合の到達可能な頂点数を計算
    for (int i = path.size() - 1; i >= 0; --i)
    {
        int u = path[i];
        if (cycleSize[u] == 0)
        {
            cycleSize[u] = cycleSize[next[u]] + 1;
            reachableCount[u] = reachableCount[next[u]] + 1;
        }
    }
}

int countReachable(int node, vector<int> &next, vector<int> &cycleSize, vector<int> &reachableCount)
{
    if (reachableCount[node] != -1)
        return reachableCount[node];
    if (cycleSize[node] > 0)
        return cycleSize[node]; // サイクルに所属する場合

    // 再帰的に到達可能な頂点をカウント
    int reachable = 1 + countReachable(next[node], next, cycleSize, reachableCount);
    reachableCount[node] = reachable;
    return reachable;
}

int main()
{
    int N;
    cin >> N;
    vector<int> next(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> next[i];
        next[i]--; // 0-indexに変換
    }

    vector<int> visited(N, -1);
    vector<int> cycleSize(N, 0);
    vector<int> reachableCount(N, 0);
    vector<int> entry(N, -1);
    int time = 0;

    // サイクル検出
    for (int i = 0; i < N; ++i)
    {
        if (visited[i] == -1)
        {
            detectCycle(i, next, visited, cycleSize, reachableCount, time, entry);
        }
    }

    // 到達可能な頂点の数をカウント
    vector<int> countReachableCount(N, -1);
    long long totalReachablePairs = 0;
    for (int i = 0; i < N; ++i)
    {
        totalReachablePairs += countReachable(i, next, cycleSize, countReachableCount);
    }

    cout << totalReachablePairs << endl;
    return 0;
}
