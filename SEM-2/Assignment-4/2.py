import math
t = int(input("Enter number of test cases: "))
ans = []

for i in range(t):
    count = 0
    a, b= map(int, input().split(" "))
    x = math.ceil(math.sqrt(a))
    while (x**2 <= b):
        if (x**2 >= a and x**2 <= b):
            count += 1
        x += 1
    ans.append(count)

for val in ans:
    print(val)
