num = int(input("Enter the number: "))
fact = 1#intialising fact by 1

#finding factorial by decreasing num to 1
while num > 1:
    fact *= num
    num -= 1
print("Factorial =", fact)
