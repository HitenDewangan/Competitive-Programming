'''
*Problem statement 6 *

Implement the basic structure of a parent class, Account, and a child class, SavingsAccount.

Task 1 :
Implement properties as instance variables, and set them to None or 0.
Account has the following properties:
title
balance

SavingsAccount has the following properties:
interestRate

Task 2:
Create an initializer for Account class. The order of parameters should be the following, where Mark is the title, and 5000 is the account balance:
Account("Mark", 5000)

Task 3:
Implement properties as instance variables, and set them to None or 0.
Create an initializer for the SavingsAccount class using the initializer of the Account class in the order below:

Account("Mark", 5000, 5)
Here, Mark is the title and 5000 is the balance and 5 is the interestRate.
'''

class  Account:
    def __init__(self, title=None, balance=0):
        self.title = title
        self.balance = balance
    
    def moneyInAccount(self):
        print("Balance in parent account : ", self.balance) # self.balance
    
class SavingsAccount(Account):
    def __init__(self, title=None, balance=0, interestRate=0):
        super().__init__(title, balance)
        self.interestRate = interestRate

    def moneyInAccount(self):
        print("Balance in child account : ", self.balance)
    
    def calculateInterest(self):
        print("Interest Rate : ", self.interestRate)




ram = Account("Mark", 500000000)
ram.moneyInAccount()

sam = SavingsAccount("Mark", 1000, 50)
sam.moneyInAccount()
sam.calculateInterest()
