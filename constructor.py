class student: 
    #default constructor
    def __init__(self): 
        pass
    # parameterized constructor
    def __init__(self, name , marks):
        self.name= name
        self.marks= marks
s1= student("karan",60)
print(s1.name, s1.marks)
s2= student("arjun",30)
print(s2.name, s2.marks)

