import math
from collections import Counter

N = int(input())
list_card = list(map(int, input().split()))
cnt = 0

dict_card_num = Counter(list_card)

for card1 in set(list_card):
    for card2 in set(list_card):
        if card1 == card2:
            cnt += math.comb(dict_card_num[card1], 2)
        else:
            if card1 + card2 == 100000:
                cnt = dict_card_num[card1] * dict_card_num[card2]

print(cnt)
