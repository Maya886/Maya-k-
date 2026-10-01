for i in range(1,4):
    #global variable
    rollnumber=0
    name=''
    maths=0
    english=0
    hindi=0
    total=0
    average=0
    percentage=0
    #function to read student mark
    def studentdata():
        global rollnumber,name,maths,english,hindi
        rollnumber=int(input("Enter your rollnumber:"))
        #reads the string typedata from keybaord
        name=input("Enter your Name:")
        maths=int(input("Enter your Maths Mark:"))
        english=int(input("Enter your English Mark:"))
        hindi=int(input("Enter your Hindi Mark:"))
    def gettotal():
        global total
        total=maths+english+hindi
    def getaverage():
        global average
        average=total/3
    
    def getpercentage():
        global percentage
        percentage=total/300*100
    
    def findgrade():
        if percentage>=85:
            print("Grade:Double Distinction")
        elif percentage>=75:
            print("Grade:Distinction")
        elif percentage>=60:
            print("Grade:First Class")
        elif percentage<35:
            print("Grade:Fail")
        else:
            print("Grade:Pass")
        
    def displaystudentdetail():
        print("\n =====STUDENT DETAILS=====\n")
        print("Maths Mark:",maths)
        print("English Mark:",english)
        print("Hindi Mark:",hindi)
        print("Total Mark:",total)
        print("Average Mark:",average)
        print("percentage Mark:",percentage)
        
    


    studentdata()
    gettotal()
    getaverage()
    getpercentage()
    displaystudentdetail()
    findgrade()




                    

        