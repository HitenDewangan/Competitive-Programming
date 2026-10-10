class Example:
    def __init__(self, name):
        self.name = name
        print(f"First __init__ method: {self.name}")

    def __init__(self, age):
        self.age = age
        print(f"\nSecond __init__ method: {self.age}\n")

# Creating an object
obj = Example(25)

'''
If a class in Python contains multiple __init__ methods, the one that is defined last will override any previous definitions. In other words, the most recently defined __init__ method in the class will be the one that gets executed.
'''
'''  \    / |==== |===\  \    /    
      \  /  |===  |____|  \  /
       \/   |==== |    \   ||        IMP...
       
       
'''