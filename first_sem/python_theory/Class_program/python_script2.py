#python script to demostrate bank operation using list and tuples to manage one account 
#tuple you need to store account name,pan card number,account numbdr=1000,DOB
#list we have to store email id,contact number,address only the place name,current balance 

print("========WELCOME TO SIB BANK==========")
my_list=[]
Name=input("Enter your Name:")
Pan_card=int(input("Enter your PAN card number:"))
Date_of_birth=input("Enter your date Date of Birth:")
Email_id=input("Enter your Email Id:")
Contact_No=int(input("Enter your Contact Number:"))
Address=input("Enter your Address:")
Current_Balance=int(input("Enter your Current Balance:"))
Account_No=1000

my_list=[Email_id,Contact_No,Address,Current_Balance]
my_tuple=[Name,Pan_card,Account_No,Date_of_birth,my_list]

print("Customer Details",[my_tuple])








