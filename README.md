# atcorder_practice
This is a personal practice repository for AtCoder.

## memo

もし，問題文を読んで処理イメージが湧かないときのChatGPTに質問するための文言．<br>
```txt
あなたは，atcorderのプロです．
私は，現在AtCorderの問題を通して，プログラミングを学習しています．
しかし，この問題を見ても処理イメージが湧きません．
そのため，私自身で解けるようにするために，サポートしていただけますか？
イメージとしてヒントを送る形で良いです．
c++で実装予定です．
答えの処理コードは送らないでください．
ヒントになるような処理コードは提供していただいてよいです．
問題はこの後送ります．
問題を見てから検討していただけますか？
```

```txt
私は，以下の問題に対して回答した結果REになりました．
次のチャットで私の回答を共有するので，一緒に検討していただけますか？
```

## sample

```c
#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

```

## 復習用

```txt
昨日解いた問題を１問１問振り返ろうと思います．
先に問題文を送ります．
その次のチャットでコードを共有します．
さらにそのあとのチャットで質問するので，私の理解を深めるために教えていただけますか？
```

### template

```cpp
// 最大の更新
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
// 最小の更新
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}

```
