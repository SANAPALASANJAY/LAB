word = input("Enter the word: ")
words = []

for i in range(0, len(word)):
    if (i % 2 == 1):
        words.append(word[i].upper())
    else :
        words.append(word[i])
ans = "".join(words)

print(ans)
