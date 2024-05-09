N, Y = map(int, input().split())


def search(N):
    for x in range(0, N + 1):
        for y in range(0, N + 1):
            z = N - x - y
            if (Y == 10000 * x + 5000 * y + 1000 * z) and (N == x + y + z) and (z >= 0):
                return "{} {} {}".format(x, y, z)
    return "-1 -1 -1"


result = search(N)
print(result)
