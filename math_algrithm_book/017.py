N = int(input())
list_a = list(map(int, input().split()))


def GCD(A, B):
    while B != 0:
        r = A % B
        A, B = B, r
    return A


def LCM(A, B):
    lcm = A * B // GCD(A, B)
    return lcm


for i in range(0, N):
    if i == 0:
        lcm = LCM(list_a[i], list_a[i + 1])
    else:
        lcm = LCM(lcm, list_a[i])


print(lcm)
