list=[]
sum=0
n= int (input("Enter the list size: "))
for i in range (n):
    ele= int(input(f'Enter element {i+1}: '))
    list.append(ele)
    sum=sum+list[i]
print (list)
print("Sum of list elements is ", sum)