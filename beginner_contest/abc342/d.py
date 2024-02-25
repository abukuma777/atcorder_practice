from collections import defaultdict
from math import gcd


def main():
    N = int(input())
    A = list(map(int, input().split()))

    # gcdを使って、互いに素な形に正規化
    def normalize(x):
        factors = defaultdict(int)
        for i in range(2, int(x**0.5) + 1):
            while x % i == 0:
                factors[i] += 1
                x //= i
        if x > 1:
            factors[x] += 1
        result = 1
        for factor, exp in factors.items():
            if exp % 2 == 1:
                result *= factor
        return result

    counter = defaultdict(int)
    for a in A:
        norm = normalize(a)
        counter[norm] += 1

    # 0の特別なケースを処理
    answer = 0
    if 0 in counter:
        zero_pairs = counter[0]
        # 0と任意の数のペア
        answer += zero_pairs * (N - zero_pairs)
        # 0同士のペア
        answer += zero_pairs * (zero_pairs - 1) // 2
        # 0を含むペアをカウントしたので、0のカウントを0に
        counter[0] = 0

    # 平方数になるペアを数える
    for count in counter.values():
        answer += count * (count - 1) // 2

    print(answer)


if __name__ == "__main__":
    main()
