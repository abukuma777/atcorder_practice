import math

N = int(input())
flag = False

for i in range(2, int(math.sqrt(N)) + 1):
    if N % i == 0:
        flag = True
        break


if flag == True:
    print("No")
else:
    print("Yes")
