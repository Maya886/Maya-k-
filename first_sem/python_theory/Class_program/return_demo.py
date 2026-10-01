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
    def read_data():
        global rollnumber,name,maths,english,hindi
        rollnumber=int(input("Enter your rollnumber:"))
        #reads the string typedata from keybaord
        name=input("Enter your Name:")
        maths=int(input("Enter your Maths Mark:"))
        english=int(input("Enter your English Mark:"))
        hindi=int(input("Enter your Hindi Mark:"))
        #returns multiple values
        return rollnumber,name,maths,english,hindi
    
    def gettotal(firstmark,secondmark,thirdmark):
        global total
        total=maths+english+hindi
        return total
    def getaverage():
        global average
        average=total/3
        return average
    
    def getpercentage():
        global percentage
        percentage=total/300*100
        return percentage
    
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
        print("\n ==========STUDENT DETAILS==========")
        print("Student RollNumber:",rollnumber)
        print("Stdent Name:",name)
        print("Maths Mark:",maths)
        print("English Mark:",english)
        print("Hindi Mark:",hindi)
        print("Total Mark:",total)
        print("Average Mark:",average)
        print("percentage Mark:",percentage)
            
    a,b,c,d,e=read_data()
    #stores returned value in total
    total=gettotal()
    average=getaverage()
    percentage=getpercentage()
    displaystudentdetail()
    findgrade()




                    

        