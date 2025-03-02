#include <bits/stdc++.h>
using namespace std;

// コンテナの構造体
//   - "どの巣を表すか" (whichNest)
//   - "所属する鳩の集合" (unordered_set<int> など)
struct Container
{
    int whichNest;
    unordered_set<int> pigeons;
};

class PigeonManager
{
public:
    // 各鳩が属するコンテナID
    vector<int> containerOfPigeon;
    // 各巣が指すコンテナID
    vector<int> containerOfNest;
    // 全コンテナ情報 (1..N まで作っておく)
    vector<Container> containers;

    PigeonManager(int N) : containerOfPigeon(N + 1),
                           containerOfNest(N + 1),
                           containers(N + 1)
    {
        // 初期状態で、巣 i がコンテナ i を指す、鳩 i もコンテナ i にいる
        for (int i = 1; i <= N; i++)
        {
            containerOfNest[i] = i;          // 巣 i -> コンテナ i
            containers[i].whichNest = i;     // コンテナ i は巣 i を管理
            containers[i].pigeons.insert(i); // 鳩 i が入っている
            containerOfPigeon[i] = i;        // 鳩 i -> コンテナ i
        }
    }

    // Type1: 鳩 a を巣 b に移動
    void movePigeon(int a, int b)
    {
        // 1) 今属しているコンテナ
        int oldContainer = containerOfPigeon[a];
        // 2) 行き先の巣が指しているコンテナ
        int newContainer = containerOfNest[b];

        // 3) 古いコンテナから鳩 a を削除 (平均O(1))
        containers[oldContainer].pigeons.erase(a);
        // 4) 新しいコンテナに鳩 a を追加 (平均O(1))
        containers[newContainer].pigeons.insert(a);
        // 5) 鳩 a のコンテナ情報を更新
        containerOfPigeon[a] = newContainer;
    }

    // Type2: 巣 a と巣 b をスワップ
    //   -> コンテナ ID の参照を入れ替えるだけで OK
    void swapNests(int a, int b)
    {
        int ca = containerOfNest[a];
        int cb = containerOfNest[b];
        // 巣 a, b が指すコンテナIDを swap
        swap(containerOfNest[a], containerOfNest[b]);
        // コンテナが管理する「whichNest」を swap すれば、
        // 「コンテナ ca は巣 b を管理」「コンテナ cb は巣 a を管理」という形になる
        swap(containers[ca].whichNest, containers[cb].whichNest);
    }

    // Type3: 鳩 a がいる巣を返す
    int queryPigeon(int a)
    {
        int c = containerOfPigeon[a];
        // そのコンテナが現在どの巣を表しているか
        return containers[c].whichNest;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    PigeonManager pm(N);

    while (Q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int a, b;
            cin >> a >> b;
            pm.movePigeon(a, b);
        }
        else if (type == 2)
        {
            int a, b;
            cin >> a >> b;
            pm.swapNests(a, b);
        }
        else
        { // type == 3
            int a;
            cin >> a;
            cout << pm.queryPigeon(a) << "\n";
        }
    }

    return 0;
}
