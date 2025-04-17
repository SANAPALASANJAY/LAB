import numpy as np

temp = []
n = int(input("Enter the number of strings: "))
print("Enter the strings", end = "\n")
for i in range(n):
    temp.append(input())

temp = np.array(temp)

def centerAlign(argu:np.array):
    ans = np.array([])
    for i in range(len(argu)):
        if (len(argu[i]) > 15):
            x = len(argu[i]) - 15
            x = x // 2
            ans = np.append(ans, argu[i][x : x + 15])
        else:
            x = 15 - len(argu[i])
            right = x // 2
            left = x - right

            a = ""
            a = ("_" * left) + argu[i] + ("_" * right)
            ans = np.append(ans, a)
    return ans

def leftAlign(argu:np.array):
    ans = np.array([])
    for i in range(len(argu)):
        if (len(argu[i]) > 15):
            ans = np.append(ans, argu[i][0:15])
        else:
            right = 15 - len(argu[i])

            a = ""
            a = argu[i] + ("_" * right)
            ans = np.append(ans, a)
    return ans

def RightAlign(argu:np.array):
    ans = np.array([])
    for i in range(len(argu)):
        if (len(argu[i]) > 15):
            ans = np.append(ans, argu[i][len(argu[i]) - 15::])
        else:
            left = 15 - len(argu[i])

            a = ""
            a = ("_" * left) + argu[i]
            ans = np.append(ans, a)
    return ans


print(centerAlign(temp))
print(leftAlign(temp))
print(RightAlign(temp))
