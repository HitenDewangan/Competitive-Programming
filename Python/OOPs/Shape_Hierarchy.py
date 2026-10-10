import math

class Shape:
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2

class Square(Shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side ** 2

# Usage:
circle = Circle(5)
square = Square(4)

print(f"Area of the circle: {circle.area()}")
print(f"Area of the square: {square.area()}")

'''
In this example, the Shape class defines a method area with a pass statement. This method acts as a placeholder, indicating that any subclass inheriting from Shape should provide its own implementation of the area method.
'''
'''
In the provided "Shape Hierarchy" example, the concept being demonstrated is polymorphism. Specifically, it showcases the ability to override methods in a subclass that is inherited from a base class.
'''