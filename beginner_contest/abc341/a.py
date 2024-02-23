n = int(input())
s =''
for i in range(0, 2*n+1):
    if i%2==0:
        s += '1'
    else:
        s += '0'

print(s)
