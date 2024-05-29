import math

N = int(input())
list_divisor = []

for i in range(1, int(math.sqrt(N)) + 1):
    if N % i == 0:
        list_divisor.append(i)
        if i != N // i:  # 同じ約数を二回追加しないようにする
            list_divisor.append(N // i)

# setを使って重複を削除し、sortedでソートした結果を使用
list_divisor = sorted(set(list_divisor))

for i in list_divisor:
    print(i)
