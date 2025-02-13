t = int(input())

def max_pieces(k):
    if k % 2 == 0:
        return (k // 2) ** 2
    else :
        return (k//2)*(k - k//2)

n = list(map(int, input().split(" ")))

for i in range(t):
    print(max_pieces(n[i]))
