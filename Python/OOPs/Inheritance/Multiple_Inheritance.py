#==============================================Multilevel Inheritance=============================================================

class Girlfriend:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def play(self):
        print(f"I fall in love with {self.name}...")

class exGirlfriend():
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def play(self):
        print(f"My ex-Girlfriend is {self.name}")
        print(f"She was so beautiful... I loved her...")



class friend(Girlfriend, exGirlfriend):
    def __init__(self, name, age, height):
        super().__init__(name, age)
        self.height = height

    # def play(self):
    #     print(f"My friend is {self.name}")
    #     print(f"I am so proud of her...")
        
    def status(self):
        print(f"I spend most of my time with {self.name}...")


obj = friend("Shruti", 25, 5.8)
obj.status()
obj.play()