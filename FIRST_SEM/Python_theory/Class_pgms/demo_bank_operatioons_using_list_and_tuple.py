def create_account(customers):

    type_of_account=input("enter the account type(savings or current): ").lower().strip()
    name1= input("enter your name: ")
    dob= input("enter your dob (dd-mm-yyyy): ")
    pan= input("enter your pan no: ")
    phone=int(input("enter your phone no "))
    address=input("enter your address ")
    acc_no= int(input("enter your account no "))
    balance=0
    bank_details=(name1,dob,pan,phone,address,acc_no, [balance],type_of_account)
    customer=list(customers)
    customer.append(bank_details)
    customers= tuple(customer)
    return customers
    
    
def update_balance(acc_no,amount,type):
    if type == "deposit":
        balance += amount
    elif type == "withdraw":
        if amount>balance:
            return 0
        else:
            balance-= amount
            return balance
    else:
        print("invalid type")
def view_balance(customers, acc_no):
    for _ in customers:
        if _[5]== acc_no:
            print("balance is ",_[6])
            break
    print("wrong account no or account dosent exist")
            

        
    
    
    
    
    
    
account_no=()
name=[]
customers=()


for i in range(10):
    print("Welcome to the bank\n")
    print("1. create an account\n2.deposit or withdraw\n3. view balance")
    print("4. exit")
    choice= int(input(" enter your choice"))
    if choice==1:
        customers = create_account(customers)
        
    elif choice == 2:
        ac= int (input("enter your account no "))
        type=input("deposit or withdrawal").lower().strip()
        amount= int (input("enter the amount"))
        for _ in customers:
                if _[5]== ac:
                    balance=_[6]
                    
                
                    
        for _ in customers:
            if _[5]== ac:
                result= update_balance(ac,amount,type,balance)
                if result ==0:
                    print("insufficient balance")
                else:
                    _[6]=result
    elif choice == 3:
        ac= int(input('enter your account no'))
        view_balance(customers,ac)
    elif choice ==4:
        break
    else:
        print(" invalid choice")