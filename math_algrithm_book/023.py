# 入力部分
N = int(input())
blues = list(map(int, input().split()))
reds = list(map(int, input().split()))

# N面体サイコロの出目の確率
r = 1 / N

# 各サイコロの期待値
e_b = sum([blue*r for blue in blues])
e_r = sum([red*r for red in reds])

print(e_b + e_r)
