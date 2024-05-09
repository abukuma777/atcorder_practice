T = int(input())
list_cnt = []

for _ in range(T):
    N = int(input())
    list_a = list(map(int, input().split()))

    cnt = 0
    for i in list_a:
        if i%2 !=0:
            cnt +=1

    list_cnt.append(cnt)

for i in list_cnt:
    print(i)
