# 入力された数Nを読み込む
N = int(input())

# 素因数を格納するリストを初期化
list_output = []

# Step 1: 2で割り尽くす
# Nが2で割り切れる間、2で割り続け、2を素因数リストに追加する
while N % 2 == 0:
    N = N // 2  # Nを2で割る
    list_output.append(2)  # 2を素因数リストに追加

# Step 2: 奇数の素因数を探す
# startを3に設定して、Nが1になるか、startの二乗がNを超えるまでループ
start = 3
while N != 1 and start * start <= N:
    if N % start == 0:
        N = N // start  # Nをstartで割る
        list_output.append(start)  # 割り切れた数（素因数）をリストに追加
    else:
        start += 2  # Nがstartで割り切れなければ、次の奇数に移る

# Step 3: 最後のチェック
# ループを抜けた後、Nが1より大きい場合、N自体が素因数である
# これはNが素数、または残りの唯一の素因数であることを意味する
if N > 1:
    list_output.append(N)  # Nを素因数リストに追加

# 素因数リストを出力
# *演算子を使用してリストの要素を空白で区切って出力
print(*list_output)
