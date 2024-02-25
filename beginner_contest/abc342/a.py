from collections import Counter

# 入力を受け取る
S = input()

# Counter を使用して文字の出現回数をカウント
counter = Counter(S)

# 出現回数が1の文字を探す
for char, count in counter.items():
    if count == 1:
        # その文字のインデックスを見つける
        index = S.index(char)
        # インデックスは0から始まるので、1を加えて出力
        print(index + 1)
        break
