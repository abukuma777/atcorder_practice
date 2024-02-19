N = int(input())  # カードの枚数Nを受け取る
cards = list(map(int, input().split()))  # スペース区切りの整数をリストに格納
cards.sort(reverse=True)

# メモリ使用率を削減するために，手札をlistへ格納する方法から，sumに足していく方法を採用
sum_alice = 0
sum_bob = 0

for i in range(0, len(cards)):
    if i % 2 == 0:
        sum_alice += cards[i]
    else:
        sum_bob += cards[i]

print(sum_alice - sum_bob)
