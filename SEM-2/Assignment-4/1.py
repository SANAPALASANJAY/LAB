def convert_to_palindrome(s):
    count = 0
    for i in range(len(s)//2):
        count += abs(ord(s[i]) - ord(s[len(s) - i - 1]))
    
    return count



t = int(input("Enter number of test cases: "))
letter = []
for i in range(t):
    word = input()
    letter.append(word)

for i in range(t):
    print(convert_to_palindrome(letter[i]))
