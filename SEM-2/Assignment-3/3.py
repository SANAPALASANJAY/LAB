def UtopianTree(n):
    hght = 1
    for i in range(n):
        if i % 2 == 0:
            hght *= 2
        else :
            hght += 1
    
    return hght

t = int(input())
cycles = []
for i in range(t):
    num = int(input())
    cycles.append(num)
    
print("Height after cycles")
for i in range(t):
    print(UtopianTree(cycles[i]))
