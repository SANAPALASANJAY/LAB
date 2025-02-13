a = int(input())
b = int(input())
ans = -1
for i in range(a, b + 1):
    for j in range(i , b + 1):
        ans = max(ans, i ^ j)

print(ans)
