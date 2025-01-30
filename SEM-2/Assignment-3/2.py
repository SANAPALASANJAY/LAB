import math
def isFibo(n):
    if n == 0:
        print("IsFibo")
        return
    #default condition for fibonacci numbers is their value of below eq is perfect square
    num1 = math.sqrt(5*(n**2) + 4)
    num2 = math.sqrt(5*(n**2) - 4)

    if (math.ceil(num1) == math.floor(num1) or math.ceil(num2) == math.floor(num2//1)):
        print("IsFibo")
        return
    else:
        print("IsNotFibo")
        return
#alternate solution without using formula or using math library
def Isfibo(n):
    pprev = 0
    prev = 1
    num = 0
    while num < n:
        num = pprev + prev
        pprev = prev
        prev = num
    
    if num == n:
        print("IsFibo")
        return
    else :
        print("IsNotFibo")

t = int(input())
nums = []
for i in range(t):
    num = int(input())
    nums.append(num)

for i in range(t):
    isFibo(nums[i])
