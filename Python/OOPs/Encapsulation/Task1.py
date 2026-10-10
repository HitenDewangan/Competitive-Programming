'''Implement a constructor to initialise teh values of two private properties : length and width'''

class Rectangle():
    def __init__(self, length, width):
        self.__length = length
        self.__width = width
    
    def getLenWid(self):
        return self.__length, self.__width
    
    def setLenWid(self, length, width):
        self.__length = length
        self.__width = width

    def area(self):
        return self.__length*self.__width

    def perimeter(self):
        return 2*(self.__length + self.__width)
    
new_var = Rectangle(10, 20)
print(new_var.getLenWid())
new_var.setLenWid(15, 25)
print("After changing the length and width: ",new_var.getLenWid())
print("Area: ",new_var.area())
print("Perimeter: ",new_var.perimeter())





    
    


