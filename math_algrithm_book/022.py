import math
from collections import Counter

# 入力
N = int(input())
list_card = list(map(int, input().split()))
dict_card_num = Counter(list_card)

cnt = 0

# 50000円のカードの特別扱い
if 50000 in dict_card_num:
    cnt += math.comb(dict_card_num[50000], 2)

# それ以外のカードの組み合わせ
for card in dict_card_num:
    if card < 50000:
        if (100000 - card) in dict_card_num:
            cnt += dict_card_num[card] * dict_card_num[100000 - card]

# 結果の出力
print(cnt)
