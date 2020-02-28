from collections import Counter
x = Counter(input())
counter = 0
for i in x:
    counter += (x[i])**2
print(counter)
