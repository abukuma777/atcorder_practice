N = int(input())
list_mochi = []
for i in range(0, N):
    r = int(input())
    list_mochi.append(r)

print(len(set(list_mochi)))
