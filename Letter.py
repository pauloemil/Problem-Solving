from collections import Counter
heading = Counter(input())
text = Counter(input())
for elem in text.elements():
    if elem == ' ':
        continue
    elif elem not in heading.elements() or text[elem] > heading[elem]:
        print("NO")
        exit()
print("YES")
