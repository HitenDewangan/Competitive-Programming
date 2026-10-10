#=================================================Single Inheritance=============================================================

class Animal:
    jungle = "India"
    def __init__(self, name, breed):
        self.name = name
        self.breed = breed

    def who_am_i(self):
        print("I am an animal")

    def eat(self):
        print("I am eating meat and plants")

    def liveIn(self):
        print(f"I live in {self.jungle}")
        print(f"My parents live in {Animal.jungle}")

#Cat inherits from Animal
# class Cat(Animal):
#     jungle = "China"
#     def __init__(self, name, breed):
#         Animal.__init__(self, name, breed="Chikning")
#         print("Cat created")
    
#     def who_am_i(self):
#         print("I am a cat")
    
#     def meow(self):
#         print("Meow!")
    



#Dog inherits from Animal
class Dog(Animal):
    jungle = "Germany"
    def __init__(self, name, breed = "Husky"):
        Animal.__init__(self, name, breed="Husky")
        print("Dog zinda hai bhai!")

    # def who_am_i(self):
    #     print("I am a dog")

    def bark(self):
        print("Woof!")

    # def liveIn(self):
    #     print(f"I live in {self.jungle}")
    #     print(f"My parents live in {Animal.jungle}")



#Create objects================================================================
print("==============================================")
my_dog = Dog("Tommy", "German Shepherd")
my_dog.who_am_i()
my_dog.eat()
my_dog.bark()
my_dog.liveIn()

print("==============================================")

# my_cat = Cat("Kitty", "Persian")
# my_cat.who_am_i()
# my_cat.eat()
# my_cat.meow()
# my_cat.liveIn()

print("==============================================")
