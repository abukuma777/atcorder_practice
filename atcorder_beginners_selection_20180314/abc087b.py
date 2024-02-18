a = int(input())
b = int(input())
c = int(input())
x = int(input())

count = 0

for num_a in range(0, a + 1, 1):
    for num_b in range(0, b + 1, 1):
        for num_c in range(0, c + 1, 1):
            if x == 500 * num_a + 100 * num_b + 50 * num_c:
                count += 1

print(count)
