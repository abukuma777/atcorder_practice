s = input()  # 入力された文字列を受け取る
result = '0'  # 移動後の状態を表す文字列の初期値

# sの最初の3文字に対してループ処理を行う
for char in s[:3]:
    # charが'1'であればresultに'1'を追加し、'0'であればresultに'0'を追加
    result += char

# 最終的なresultを出力
print(result)
