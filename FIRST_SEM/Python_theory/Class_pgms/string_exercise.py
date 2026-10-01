#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
print('='*30)
print('PROFILE CARD')
print('='*30)
email=email.lower()
print(f'Name     : {first.title()} {last.title()}')
print(f'Initials : {initials}')
print(f'Email    : {email}')
print(f'Domain   : {email.split("@")[1]}')
print(f'Phone    : {phone.replace("+91-98765-4","********")}')
phone_valid=len(phone.replace('-','').replace('+','').replace('91',''))
if phone_valid==10:
   print('Valid    : True')
else:
   print('Valid    : False')
print('='*30)
