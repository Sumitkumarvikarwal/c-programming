class complex:
    def __init__(self, real, imaginary):
        self.real= real
        self.img= imaginary
    def shownumber(self):
        print(self.real,"i+", self.img,"j")
    def __add__(self ,num2):
        newreal= self.real + num2.real
        newimg= self.img + num2.img
        return complex(newreal, newimg)

num1.complex(1,3)
num1.shownumber()
num2.complex(4,6)
num2.shownumber()
num3= num1 +num2
num2.shownumber()


