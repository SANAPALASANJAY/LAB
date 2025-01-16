points = []

for i in range(3):
    points.append(list(map(int, input(f"Enter the coordinates of point {i+1} (x y z): ").split())))

ans = [point[:] for point in points] 

for i in range(3):
    mindist = float(-1)
    minidx = -1
    for j in range(3):
        if j == i:
            continue
        
        x, y, z = (points[i][0] - points[j][0]), (points[i][1] - points[j][1]), (points[i][2] - points[j][2])
        dist = x**2 + y**2 + z**2
        
        if dist < mindist:
            mindist = dist
            minidx = j
    
    ans[i].append(points[minidx])

print("Points:", points)
print("Answer with closest points:", ans)
