class BankAccount:
    def __init__(self, account_holder, balance=0):
        self.__account_holder = account_holder
        self.__balance = balance

    def deposit(self, amount):
        self.__balance += amount
        print(f"Deposited ${amount}. New balance: ${self.__balance}")

    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
            print(f"Withdrew ${amount}. New balance: ${self.__balance}")
        else:
            print("Insufficient funds!")

    def display_balance(self):
        print(f"Account holder: {self.__account_holder}, Balance: ${self.__balance}")

# first child class

class SavingsAccount(BankAccount):
    def __init__(self, account_holder, balance, interest_rate):
        super().__init__(account_holder, balance)
        self.interest_rate = interest_rate

    def calculate_interest(self):
        return self.__balance * self.interest_rate / 100
    
    def display_interest(self):
        print(f"Interest rate: {self.interest_rate}%")


# second child class

class CurrentAccount(BankAccount):
    def __init__(self, account_holder, balance, overdraft_limit):
        super().__init__(account_holder, balance)
        self.overdraft_limit = overdraft_limit

    def withdraw(self, amount):
        if self._BankAccount__balance - amount >= -self.overdraft_limit:
            super().withdraw(amount)
        else:
            print("Overdraft limit exceeded!")


# Usage:
account1 = BankAccount("John Doe")
account1.deposit(1000)
account1.withdraw(2000)
account1.display_balance()

print("\n======================================================================")
account2 = BankAccount("Sam Witwickey")
account2.deposit(50000)
account2.withdraw(17000)
account2.display_balance()

print("\n==========================Using Inheritance================================================")
sav1 = SavingsAccount("Julia Klein", 1000, 5)
sav1.deposit(1000)
sav1.withdraw(2000)
sav1.display_balance()

print("\n==========================Using Inheritance================================================")
cur1 = CurrentAccount("Shawn Mendes", 1000, 5000)
cur1.deposit(1000)
cur1.withdraw(2000)
cur1.display_balance()


