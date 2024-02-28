# 標準入力から二つの整数A, Bを受け取る
A, B = map(int, input().split())


def GCD(A, B):
    """
    二つの整数の最大公約数（GCD）をユークリッドの互除法を用いて計算する。

    Parameters:
    A (int): 最大公約数を求めたい整数の一つ目。
    B (int): 最大公約数を求めたい整数の二つ目。

    Returns:
    int: AとBの最大公約数。
    """
    # Bが0になるまでループを続ける
    while B != 0:
        r = A % B  # AをBで割った余りを計算
        A, B = B, r  # AにBを、Bに余りrを代入し、次のステップへ
    # ループが終了した時点でのAが最大公約数となる
    return A


# 計算された最大公約数を出力
print(GCD(A, B))
