import random
a = (0, 1)
b = []
mlen = 0
#generating random values in 0 and 1
for i in range(100):
    b.append(random.choices(a)[0])

print(b)
clen = 0
#finding maxlen of continuous zeros
for i in b:
    if (i == 1):
        mlen = max(mlen, clen)
        clen = 0
    if i == 0:
        clen += 1
print("Max long run of zero:", mlen)
