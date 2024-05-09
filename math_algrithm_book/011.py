import math

# ユーザーから整数Nを入力として受け取る
N = int(input())
list_output = []

for i in range(2, N + 1):
    flag = False
    for j in range(2, i + 1):
        # 1と自分以外で割り切れるとき
        if i % j == 0 and i != j:
            break
        elif i % j != 0:
            continue
        # 素数
        else:
            list_output.append(i)

for i in list_output:
    print(i, end=" ")
