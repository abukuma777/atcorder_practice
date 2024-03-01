import math
from collections import Counter

N = int(input())
list_a = list(map(int, input().split()))

cnt_a = Counter(list_a)

combinations = 0

for item in set(list_a):
    if cnt_a[item] > 1:
        combinations += math.comb(cnt_a[item], 2)

print(combinations)
