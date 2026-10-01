n=5
list=[]
name=(input("Enter your name"))
list.append(name)
for i in range (n):
    marks= int(input(f"Enter marks for subject {i+1}: "))
    list.append(marks)
for i in range (len(list)):
    print (list[i])