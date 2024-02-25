# ユーザーから整数Nを入力として受け取る
N = int(input())
# 階乗を計算するための変数を1で初期化（0階乗は1）
factorial = 1

# 1からNまでの各数についてループ
for i in range(1, N + 1):
    # 現在の数（i）を階乗計算用の変数に掛け合わせる
    factorial *= i

# 計算した階乗の値を出力
print(factorial)
