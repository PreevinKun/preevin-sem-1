n= int (input ("Enter the number"))
sum=0
c=0
lista=[]
list=[]
for i in range(n):
    if i%2==0:
        sum=sum+i
    if i%3==0 and i%5==0:
        c+=1
    for j in range(n,n-n-1,-1):
        is_prime=True
        if n<2:
            is_prime=False
        else:
            for k in range(2,j):
                if j%k==0:
                    is_prime=False
            if is_prime==True:
                prime=j
                break
    for a in range(n):
        if i==a**2:
            sum1=0
            lista.append(i)
            total = sum1(sum1(int(digit) for digit in str(number)) for number in lista)
            list.append(total)

            
            
            
            
            
        
    
        
    