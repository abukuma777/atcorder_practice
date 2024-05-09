N, L, D = map(int, input().split())


def calc_dealer_win_rate(N, L, D):
    # サイコロ期待値
    dice_expected_value = (D + 1) / 2
    # ディーラーがサイコロを振る回数の期待値
    roll_expected_value = L / dice_expected_value

    return win_rate


def calc_win_rate(x, N, L, D):
    win_rate = 0
    # x> Nでまけ
    if x > N:
        return 0


win_rate_max = 0
