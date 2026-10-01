marks=['Sachin',78,65,89,99,90]   #To declare an list 'mark' to store marks of 'Sachin'
print(marks)
my_mark=[]                        #dynamic initializtion
for number in range(5):
    Newmark=int(input("Enter the Marks:"))
    my_mark.append(Newmark)
print("List elements are:")
for i in range(len(my_mark)):
    print("My Marks",my_mark[i])
        
    
    
    
