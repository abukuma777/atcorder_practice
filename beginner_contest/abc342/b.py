N = int(input())
list_p = list(map(int, input().split()))
Q = int(input())
queries = [list(map(int, input().split())) for _ in range(Q)]

positions = {person: index for index, person in enumerate(list_p)}

for A_i, B_i in queries:
    if positions[A_i] < positions[B_i]:
        print(A_i)
    else:
        print(B_i)
