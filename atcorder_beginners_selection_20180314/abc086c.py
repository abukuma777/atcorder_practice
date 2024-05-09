N = int(input())
start_position = [0, 0, 0]  # 時刻0での初期位置
flag = True  # 最初はTrueとして、条件を満たさない場合にFalseに設定

for _ in range(N):
    t, x, y = map(int, input().split())

    man_dis = abs(x - start_position[1]) + abs(y - start_position[2])
    time_delta = t - start_position[0]

    if time_delta < man_dis or (time_delta - man_dis) % 2 != 0:
        flag = False
        break  # 条件を満たさない場合は直ちにループを抜ける

    start_position = [t, x, y]  # 次の移動のために位置を更新

if flag:
    print("Yes")
else:
    print("No")
