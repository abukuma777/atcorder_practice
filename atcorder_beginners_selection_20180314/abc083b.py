N, A, B = map(int, input().split())

# 条件を満たす数値の総和を格納する変数
total_sum = 0

for i in range(1, N + 1):
    # map(function, iterable, ...)
    # "12345"をinterableに与えると，["1", "2", "3", "4", "5"]と同じで要素ごとに処理する．
    digit_sum = sum(map(int, str(i)))

    if A <= digit_sum <= B:
        total_sum += i

# 結果を出力
print(total_sum)
