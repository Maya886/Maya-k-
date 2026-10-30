my_string='''sachin__KUMAR
sachin@GOOGLE.COM
+91-1234-5684-11'''

name=(my_string.split('\n')[0])
print('Name         :',name)
email=(my_string.split('\n')[1])
print('Email        :',email)
contactnumber=(my_string.split('\n')[2])
print('Contactnumber:',contactnumber)
print(name.title())
print(email.title())
print(contactnumber.title())