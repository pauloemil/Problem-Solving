n = int(input())
lst = [int(x) for x in input().split()]

for i in sorted(lst):
    print(i, end=" ")
