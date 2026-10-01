age= int(input("Enter your age: "))
day= input("Enter the day of the week (e.g., sun,mon) ")
day= day.lower()
timing= input("Enter the timing of the day[morning/afternoon/evening]")
timing=timing.lower()

price=250

if day=="sat" or day=="sun":
    price= 250*1.25
else:
    price=250

if timing== "morning":
    price=price
elif timing== "afternoon":
    price=price*1.10
elif timing== "evening":
    price=price*1.30
else:
    print("invalid timing")
if age<=5:
    price= price*0.50
elif age>60:
    price= price*0.90
else:
    price= price

print("your ticket price is ", price)