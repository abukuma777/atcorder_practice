N = int(input())
list_a = list(map(int, input().split()))


def GCD(A, B):
    while B != 0:
        r = A % B
        A, B = B, r
    return A


for i in range(0, N):
    if i == 0:
        gcd = GCD(list_a[i], list_a[i + 1])
    else:
        gcd = GCD(gcd, list_a[i])


print(gcd)
