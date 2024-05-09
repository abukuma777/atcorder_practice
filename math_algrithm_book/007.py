import math

N, X, Y = map(int, input().split())

num_X_multiple = N // X
num_Y_multiple = N // Y
num_X_Y_multiple = N // math.lcm(X, Y)

print(num_X_multiple + num_Y_multiple - num_X_Y_multiple)
