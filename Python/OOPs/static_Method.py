class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age


    @staticmethod
    def massBunking():
        print("We must bunk the classes :)")

    @classmethod
    def gaming(cls):
        print("I like video games :)")

Person.gaming()
per =Person("Max", 99)
per.gaming()

Person.massBunking()
per.massBunking()
