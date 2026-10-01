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
   naveen  KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

print('============================')
print('PROFILE CARD')
print('============================')

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
print('Name     :',name.strip().title())
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
print('Intitials:',initials)
print('Email    :',email.lower())

phone_no = phone.replace("-","")
masked_phone="*" * (len(phone_no)-4) + phone_no[-4:]
print('Phone    :',masked_phone)
valid="@" in email and len(phone)>=10
print('Valid    :',valid)
print('============================')





