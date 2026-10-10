class car :
    def __init__(self,brand,model,year) :
        self.brand = brand
        self.model = model
        self.year = year
    def description(self) :
        return f"{self.brand} {self.model} {self.year}"
    def start(self) :
        return("Car is started")
    def stop(self) :
        return("Car is stopped")
    def accelerate(self) :
        return("Car is accelerating")
    def brake(self) :
        return("Car is braking")
    

car1 = car("BMW","X5",2020)
print(car1.description())  
print(car1.start())
print(car1.stop())
print(car1.accelerate())
print(car1.brake())

