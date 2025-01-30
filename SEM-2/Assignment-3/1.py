def digitalRoot(n):
    ans = 0
  #adding the digits in the number
    while n > 0:
        rem = n % 10
        ans = ans + rem
        n //= 10
  #if the number is greater than 9 then aplying same logic until the ans becomes less than 10
    if (ans > 9):
        return digitalRoot(ans)
    else:
        return ans

num = 45893
print(digitalRoot(num))
