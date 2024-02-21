# N（受験者数）とL（合格ライン）を入力から受け取る
N, L = map(int, input().split())

# 受験者の得点をリストとして受け取る
list_score = list(map(int, input().split()))

# 合格者数をカウントする変数を0で初期化
result = 0

# 得点リストの各得点に対してループ処理
for score in list_score:
    # 得点が合格ライン以上であれば
    if score >= L:
        result += 1  # 合格者数を1増やす

# 合格者数を出力
print(result)
