names = []
i = 0
print("Enter the Names: ")
while i < 10:
    name = input()
    if (len(name) > 15):
        print("Invalid Length\nTry again: ", end="")
    else:
        names.append(name)
        i += 1
print("Names in reverse: ")
for i in range(len(names)):
    print(names[i][::-1])
