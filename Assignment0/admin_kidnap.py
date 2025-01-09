t = int(input())
n, x, s = map(int, input().split())
coin = x
for i in range(s):
    a, b = map(int, input().split())
    if (a > n or b > n):
        print("Invalid Entry")
        coin = -1
        break 
    if (a == coin): coin = b
    elif (b == coin): coin = a
    else: continue

print("coin is in the box:",coin)
