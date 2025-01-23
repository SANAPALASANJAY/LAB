def cal(num):
    a = int(num)
    rem = a % 10
    count = 0
    while(a > 0):
        rem = a % 10
        if (rem == 0):
            a = a//10
            continue
        if (num % rem == 0):
            count += 1
        a = a//10
    return count

TestCases = int(input())
ans = []


for i in range(0, TestCases):
    a = int(input())
    ans.append(cal(a))

for i in range(0, TestCases):
    print(ans[i])
