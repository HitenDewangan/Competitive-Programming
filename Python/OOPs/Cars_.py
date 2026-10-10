class Car:
    def __init__(self, make, model, year, speed):
        self.make = make
        self.model = model
        self.year = year
        self.speed = speed

    def accelerate(self):               #instance/object
        self.speed += 100

    def brake(self):
        if self.speed <= 200:
            self.speed -= 50
            print(f"The current speed of the {self.year} {self.make} {self.model} is {self.speed} mph.\n")

        else:
            print(f"The current speed of the {self.year} {self.make} {self.model} is {self.speed} mph.")
            print("Break FAIL !  Good Bye (*_*)\n")

    def display_speed(self):
        print(f"The current speed of the {self.year} {self.make} {self.model} is {self.speed} mph.\n")

# Usage:\
print("Lamborghini")
my_car = Car("Lamborghini", "Aventador", 2022, int(input()))
print("========================After accelerate:==================")
my_car.accelerate()
my_car.display_speed()

print("=========================After break:=====================")
my_car.brake()
