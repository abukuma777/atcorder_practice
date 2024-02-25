N, S = map(int, input().split())
list_a = list(map(int, input().split()))

# ビット全探索
# 0-2^Nまでループ
# 1<<n は，2^nの意味
for bit in range(1 << N):
    sum = 0
    for i in range(N):
        # bit=5, i<<1なら，5(101)の2^1bit目とAND比較する．
        if bit & (1 << i):
            # i番目のカードが選ばれている場合、その値を合計に加える
            sum += list_a[i]

    # 合計がSと一致するか確認
    if sum == S:
        print("Yes")
        break
else:
    print("No")
