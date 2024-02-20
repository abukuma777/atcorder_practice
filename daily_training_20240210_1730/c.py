# [ABC310 B問題（Strictly Superior）を解く](https://programming-hiroba.com/abc310-b/)参照．


"""AtCoder Beginner Contest 310 B"""

n, m = map(int, input().split())
p = []
f = []
for i in range(n):
    product = list(map(int, input().split()))
    p.append(product[0])
    f.append(product[2:])

result = False
for i in range(n):
    for j in range(n):
        if i == j or p[i] < p[j]:
            continue
        temp = True
        for e in f[i]:
            if e not in f[j]:
                temp = False
        if temp:
            if p[i] > p[j] or len(f[i]) < len(f[j]):
                result = True

print("Yes" if result else "No")
