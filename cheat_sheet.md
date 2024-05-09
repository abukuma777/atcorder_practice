# cheat_sheet

## 3章: 基本的なアルゴリズム

### 素数かどうか判定する関数．

```py

import math

N = int(input())

def is_prime(N)
    flag = False

    for i in range(2, int(math.sqrt(N)) + 1):
        if N % i == 0:
            flag = True
            break
    return flag
```

### 素数かどうか判定する関数．

```py
import math

N = int(input())

def is_prime(N)
    flag = False

    for i in range(2, int(math.sqrt(N)) + 1):
        if N % i == 0:
            flag = True
            break
    return flag
```

### 約数を出力

約数のリストを出力する．
```py
import math

N = int(input())

def find_divisors(N):
    divisors = []
    for i in range(1, int(N ** 0.5) + 1):
        if N % i == 0:
            divisors.append(i)
            if i != N // i:  # 同じ約数を二回追加しないようにする
                divisors.append(N // i)
    return sorted(divisors)

list_divisor = find_divisors(N)
```

### 素因数分解
詳細コメントは，014.py

```py
N = int(input())
list_output = []

while N % 2 == 0:
    N = N // 2  # Nを2で割る
    list_output.append(2)  # 2を素因数リストに追加

start = 3
while N != 1 and start * start <= N:
    if N % start == 0:
        N = N // start  # Nをstartで割る
        list_output.append(start)  # 割り切れた数（素因数）をリストに追加
    else:
        start += 2  # Nがstartで割り切れなければ、次の奇数に移る
if N > 1:
    list_output.append(N)  # Nを素因数リストに追加

print(*list_output)
```

## ユークリッドの互除法

コメントは，015.py
```py
A, B = map(int, input().split())


def GCD(A, B):
    while B != 0:
        r = A % B
        A, B = B, r
    return A


print(GCD(A, B))
```

## 組み合わせ

```py
import math
from collections import Counter
# 要素の個数を数える
cnt_a = Counter(list_a)

combinations = 0

for item in set(list_a):
    if cnt_a[item] > 1:
        combinations += math.comb(cnt_a[item], 2)
```
