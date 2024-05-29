from collections import Counter

N = int(input())
list_a = list(map(int, input().split()))

cnt_a = Counter(list_a)
# 組み合わせの計算
combinations = 0
if 100 in cnt_a and 400 in cnt_a:
    combinations += cnt_a[100] * cnt_a[400]
if 200 in cnt_a and 300 in cnt_a:
    combinations += cnt_a[200] * cnt_a[300]

# 組み合わせの総数を出力
print(combinations)
