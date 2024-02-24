N, S = map(int, input().split())
list_a = list(map(int, input().split()))
flag = False

for i, value_1 in enumerate(list_a):
    if flag == False:
        for j, value_2 in enumerate(list_a):
            if i == j:
                continue
            else:
                if value_1 + value_2 == S:
                    print("Yes")
                    flag = True
                    break
    else:
        break

if flag == False:
    print("No")
