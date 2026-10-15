number = int(input("Enter the Number of Accounts: "))
account_details=[]
for i in range(number):
    name = input("Enter the Accounter name: ")
    pan_card= int(input("Enter PAN Number: "))
    dob = input("Enter Date of Birth: ")
    account_number=1000+i
    emailid=input("Enter the Email id:")
    contact=int(input("Enter the Contact Number:"))
    address=input("Enter the Address:")
    balance=int(input("Enter the Current Balance:"))
    bank_details=(name,pan_card,dob,account_number,[emailid,contact,address,balance])
    current_balance=bank_details[4][3]
    new_deposit=500
    current_balance=current_balance+new_deposit
    bank_details[4][3]=current_balance
    account_details.append(bank_details)
    
print("Account Details:",account_details)

for i in range(number):
    print("1. Deposit")
    print("2. Withdraw")
    print("3. Show accounts")

    choice = int(input("Enter your Choice: "))

    if choice == 1:
        account_number = int(input("Enter Account Number: "))

        for i in account_details:
            if i[3] == account_number:
                print("Account found...", i[0])
                amount = int(input("Please enter Deposit Amount: "))
                i[4][3] = i[4][3] + amount
                print("Current Balance:", i[4][3])
                break
        else:
            print("Invalid Account Number.......")

    elif choice == 2:
        account_number = int(input("Enter Account Number: "))

        for i in account_details:
            if i[3] == account_number:
                amount = int(input("Enter Withdrawal Amount: "))

                if amount > 0 and amount <= i[4][3]:
                    i[4][3] = i[4][3] - amount
                    print("Current Balance:", i[4][3])
                else:
                    print("Insufficient Balance.........")
                break
        else:
            print("Invalid Account Number")

    elif choice == 3:
        print("Your Account Details:", account_details)

    else:
        print("Invalid Choice")

    
