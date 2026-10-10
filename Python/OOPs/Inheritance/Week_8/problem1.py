class A:
    def __init__(self):
        print("A", end=' ')

class B(A):
    def __init__(self):
        print("B", end=' ')
        super().__init__()

class C(A):
    def __init__(self):
        print("C", end=' ')
        super().__init__()

class D(B, C):
    def __init__(self):
        print("D", end=' ')
        super().__init__()

obj = D()
