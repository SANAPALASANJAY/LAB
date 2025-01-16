a = []
b = []
c = []
for i in range(50):
    a.append(i)
    b.append((i + 1) ** 2)

for i in range(26):
    d = chr(ord('a') + i)
    c.append(d * (i + 1))

print("List A:",a, "\n")
print("List B: ", b, "\n")
print("List C: ", c)
