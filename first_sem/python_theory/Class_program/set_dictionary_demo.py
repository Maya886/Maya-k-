#employees name,employee number,copamy name,salary should be taken from the keyboard and stored in a set and dictionary
name=input("Enter your Name:")
employee_id=input("Enter your employee number:")
company=input("Enter your company name:")
salary=input("Enter your salary:")
#set format
employee_set={name,employee_id,company,salary}
#in dictionary
employee_dictionary={"Name":name,"EmployeeID":employee_id,"Company":company,"Salary":salary}
print("In Set:",employee_set)
print("In dictionary:",employee_dictionary)
