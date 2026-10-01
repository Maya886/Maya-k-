sum=0
my_mark=[]
for number in range(5):
    Newmark=int(input("Enter your  Subject Mark:"))
    my_mark.append(Newmark)
for i in range(len(my_mark)):
    sum+=my_mark[i]
print("total sum",sum)
    
