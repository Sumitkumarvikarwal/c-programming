class student: 
    #default constructor
    def __init__(self): 
        pass
    # parameterized constructor
    def __init__(self, name , marks):
        self.name= name
        self.marks= marks
    def welcome(self):
        print("welcome",self.name)
    def get_marks(self):
        return self.marks
s1= student("karan",60)
s1.welcome()
print(s1.get_marks())

