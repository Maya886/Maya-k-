print("----------ELECRICITY BILL----------")
print("calculate a household's electricity bill ")
duedate=21/7/26
category=input("enter the category : ")
if category == "1":
    print("Commercial")
    unitsconsumed=int(input("No of units consumed:"))
    if unitsconsumed <=100:
        bill=unitsconsumed*10
    elif unitsconsumed <=300:
        bill=unitsconsumed*12
    elif unitsconsumed >300:
        bill=unitsconsumed*15
    print("The bill after unitsconsumed : ",bill)
    peakthreshold=input(" Is peakthreshold found[yes/no]:")
    if peakthreshold  == "yes" :
        penalty_bill=bill+100
    else: 
        penalty_bill=bill
    print("The bill after threshold :",penalty_bill)
    billpayed_date=input("Enter the date when bill is payed:")
    if billpayed_date=="due date" :
        print("The discount is available")
    else: 
        print("The discount is not available")

else: 
    category =="0"
    print("Non-commercial")
    unitsconsumed=int(input("No of units consumed:"))
    if unitsconsumed <=100:
        bill1=unitsconsumed*5
    elif unitsconsumed <=300:
        bill1=unitsconsumed*6
    elif unitsconsumed >300:
        bill1=unitsconsumed*8
    print("The bill after unitsconsumed : ",bill1)
    peakthreshold=input(" Is peakthreshold found[yes/no]:")
    if peakthreshold == "yes" :
        penalty_bill1=bill1+50
    else: 
        penalty_bill1=bill1
    print("The bill after threshold :",penalty_bill1)
    billpayed_date=input("Enter the date when bill is payed:")
    if billpayed_date=="due date" :
        print("The discount is available")
    else: 
        print("The discount is not available")