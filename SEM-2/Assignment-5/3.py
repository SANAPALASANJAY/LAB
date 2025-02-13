t = int(input())

def next_permutation(stri):
    n = len(stri)
    s = list(stri)

    k = -1
    for i in range(n - 2, -1, -1):
        if (s[i] < s[i + 1]):
            k = i
            break
    if (k == -1):
        print("no answer")
        return
    
    a = -1
    for i in range(k, n):
        if s[i] > s[k]:
            a = i
    
    temp = s[k]
    s[k] = s[a]
    s[a] = temp
    
    left = k + 1
    right = n - 1

    while (left < right):
        temp = s[left]
        s[left] = s[right]
        s[right] = temp
        left += 1
        right -= 1
    
    print("".join(s))
    return

strs = []

for i in range(t):
    x = input().strip()
    strs.append(x)

for i in range(t):
    next_permutation(strs[i])
