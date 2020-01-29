n = int(input())
problems = 0

for i in range(n):
    lst = [int(x) for x in input().split()]
    one = 0
    for j in range(3):
        if lst[j] == 1:
            one += 1
    if one >= 2:
        problems += 1

print(problems)
