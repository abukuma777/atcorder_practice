# ここ苦手

S = input()[::-1]
list_T = ["dream", "dreamer", "erase", "eraser"]
reversed_list_T = [T[::-1] for T in list_T]

while S != "":
    flag = False
    for T in reversed_list_T:
        if S.startswith(T):
            S = S[len(T) :]  # マッチした単語をSから削除
            flag = True
            break  # マッチしたらその時点でforループを抜ける
    if not flag:
        print("NO")
        break  # マッチする単語が一つもなかったらwhileループを抜ける

# ループを正常に抜けた場合、YESを出力
else:
    print("YES")
