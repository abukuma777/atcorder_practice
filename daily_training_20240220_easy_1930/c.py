# 正整数Nを入力から受け取る（マス目の大きさ）
N = int(input())
# N行の各行を読み込んで、各数字を個別の要素とする2次元配列gridを作成
grid = [list(map(int, list(input()))) for _ in range(N)]

# 通過するマスに書かれた数字を並べた整数としてあり得る最大のものを保持する変数
max_value = 0

# 全てのマスをスタート位置として考慮
for i in range(0, N):
    for j in range(0, N):
        # 移動可能な8方向を定義（上, 下, 左, 右, 上左, 上右, 下左, 下右）
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)]

        # 各方向について移動をシミュレート
        for dx, dy in directions:
            # スタート位置を設定
            x, y = i, j
            # スタート位置のマスの数字から開始する文字列を初期化
            current_value = str(grid[x][y])

            # N-1回の移動をシミュレート
            for _ in range(N-1):
                # 新しい位置を計算（マス目がつながっているため、範囲外になったら反対側に移動する）
                x = (x + dx) % N
                y = (y + dy) % N
                # 新しい位置のマスの数字を文字列に追加
                current_value += str(grid[x][y])

            # 移動後の整数がこれまでの最大値より大きければ更新
            max_value = max(max_value, int(current_value))

# 最大値を出力
print(max_value)
