import math

class twoD:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def magnitude(self):
        return math.sqrt(self.x ** 2 + self.y ** 2)
    
    def angle(self):
        return math.atan2(self.y, self.x)
    
    def distance(self, point):
        return math.sqrt((self.x - point.x) ** 2 + (self.y - point.y) ** 2)
    
    def dot(self, point):
        return self.x * point.x + self.y * point.y
    
    def cross(self, point):
        return self.x * point.y - self.y * point.x
    
class threeD(twoD):
    def __init__(self, x, y, z):
        super().__init__(x, y)
        self.z = z

    def __str__(self):
        return f"x: {self.x}  y: {self.y}  z: {self.z}"
    
    def magnitude(self):
        return math.sqrt(self.x**2 + self.y**2 + self.z**2)
    
    def dot(self, point):
        return self.x * point.x + self.y * point.y + self.z * point.z
    
    def cross(self, point):
        return threeD(
            self.y * point.z - self.z * point.y,
            self.z * point.x - self.x * point.z, 
            self.x * point.y - self.y * point.x
        )
    
    def distance(self, point):
        return math.sqrt((self.x - point.x)**2 + (self.y - point.y)**2 + (self.z - point.z)**2)
    

v1 = twoD(3, 4)
v2 = twoD(1, 2)
print("2D Magnitude:", v1.magnitude())
print("2D Dot Product:", v1.dot(v2))
print("2D Cross Product:", v1.cross(v2))

v3 = threeD(1, 2, 3)
v4 = threeD(4, 5, 6)
print("3D Magnitude:", v3.magnitude())
print("3D Dot Product:", v3.dot(v4))
print("3D Cross Product:", v3.cross(v4))
