def find_combinations(cards, current_sum=0, count=0, index=0):
    if count > 5 or current_sum > 1000:
        return 0
    if count == 5 and current_sum == 1000:
        return 1
    if index == len(cards):
        return 0

    # 現在のカードを選ぶ場合
    take = find_combinations(cards, current_sum + cards[index], count + 1, index + 1)

    # 現在のカードを選ばない場合
    not_take = find_combinations(cards, current_sum, count, index + 1)

    return take + not_take


# 入力部分
N = int(input())
cards = list(map(int, input().split()))

# 探索の実行
result = find_combinations(cards)

# 結果の出力
print(result)
