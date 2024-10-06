f= open("demo.txt","r")
data= f.read()
print(data)
print(type(data))

f= open("demo.txt","r")
data1= f.read(5) 
print(data1)

f= open("demo.txt","r")
line1 = f.readline() # read one line
print(line1)
 
f.close()
