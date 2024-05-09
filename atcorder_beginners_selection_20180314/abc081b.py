def count_divisions_by_two(n):
    count = 0
    while n % 2 == 0:
        n //= 2
        count += 1
    return count

N = int(input())
A = list(map(int, input().split()))

# 各整数が2で割れる回数を計算し、その最小値を見つける
min_divisions = min(count_divisions_by_two(a) for a in A)

print(min_divisions)
