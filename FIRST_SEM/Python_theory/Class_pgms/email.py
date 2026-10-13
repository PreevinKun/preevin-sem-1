# Create a nested list containing a student's details and five subject marks.
name=[]
roll_no=[]
phone1=[]
Email=[]
student_info = []
n= int (input("enter the number of students "))
for i in range(n):
    a = input("Enter your name: ")
    name.append(a)
    r=  int(input("Enter your roll number: "))
    roll_no.append(r)
    while True:
        phone = input("Enter your 10-digit phone number: ")
        if phone.isdigit() and len(phone) == 10:
            break
        else:
            print("Invalid phone number. Please try again.")
    phone1.append(phone)
    email = input("Enter your email ID: ")
    Email.append(email)
    student_marks=[] 
    marks = []
    for i in range(5):
        mark = int(input(f"Enter marks for subject {i + 1}: "))
        marks.append(mark)
    student_marks.append(marks)

    temporary  =[name[i], roll_no[i], phone1[i], Email[i], student_marks[i]]
    student_info.append(temporary)
print(student_info)