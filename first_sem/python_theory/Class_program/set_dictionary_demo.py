#employees name,employee number,copamy name,salary should be taken from the keyboard and stored in a set and dictionary
name=input("Enter your Name:")
employee_id=input("Enter your employee number:")
company=input("Enter your company name:")
salary=input("Enter your salary:")
address=input("Enter your address:")
work_hour=input("Enter the work hour:")

employee_set={name,employee_id,company,salary}
employee_set.add(address)
employee_set.add(work_hour)

employee_dic={"Name":name,"EmployeeID":employee_id,"Company":company,"Salary":salary}
employee_dic["Address:"]=address
employee_dic["Work Hour:"]=work_hour
print("In Set:",employee_set)
print("In dictionary:",employee_dic)
print("\nEmployee details using tabular column:")

print("-" * 110)
print(f"{'Employee Name':<20}{'Employee Number':<20}{'Company Name':<20}{'Salary':<15}{'Address':<25}{'Work Hour':<15}")
print("-" * 110)

for name, number, company, salary, address, work_hour in [
    (name, employee_id, company, salary, address, work_hour)
]:
    print(f"{name:<20}{number:<20}{company:<20}{salary:<15}{address:<25}{work_hour:<15}")

print("-" * 110)

