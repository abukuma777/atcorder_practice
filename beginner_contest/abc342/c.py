N = int(input())
S = input()
Q = int(input())
operations = [input().split() for _ in range(Q)]

# 変換マップの初期化
convert_map = {chr(i): chr(i) for i in range(ord("a"), ord("z") + 1)}

# 操作を適用して変換マップを更新
for c_i, d_i in operations:
    for char in list(convert_map.keys()):
        if convert_map[char] == c_i:
            convert_map[char] = d_i

# 最終的な文字列の生成
result = "".join(convert_map[char] for char in S)
print(result)
