zero = []
one = []
two = []
three = []
four = []
nums = list(range(1, 10001))
for i in range(1, 10001):
    if (i % 5 == 0):
        zero.append(i)
    elif (i % 5 == 1):
        one.append(i)
    elif (i % 5 == 2):
        two.append(i)
    elif (i % 5 == 3):
        three.append(i)
    else:
        four.append(i)
ans = zero + one + two + three + four
ans.sort()
#checking if the sets have equivalence relation
if (nums == ans):
    print("true")
else:
    print("false")
