import math
class Shape:
    def area(self):
        return "Undefined"
    def perimeter(self):
        return "Undefined"

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width
    
    def area(self):
        return self.length * self.width
    
    def perimeter(self):
        return 2 * (self.length + self.width)

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
    
    def area(self):
        return math.pi * (self.radius ** 2)
    
    def perimeter(self):
        return 2 * math.pi * self.radius
    
rectangle = Rectangle(3, 5)
circle = Circle(7)

print("Rectangle Area:", rectangle.area())
print("Rectangle Perimeter:", rectangle.perimeter())
print("Circle Area:", circle.area())
print("Circle Perimeter:", circle.perimeter())
