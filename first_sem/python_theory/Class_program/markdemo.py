print('First student details:')
FirstName=input('Enter your Name:')
EnglishMark=input('English Mark:')
MathsMark=input('Maths Mark:')
PythonMark=input('Python Mark:')
EnglishMark=int(EnglishMark)
MathsMark=int(MathsMark)
PythonMark=int(PythonMark)
TotalMark=EnglishMark+MathsMark+PythonMark
print('TotalMark:',TotalMark)
AverageMark=TotalMark/300*100
print(f"The Percentage is {AverageMark:.2f}",'%')

print('Second student details')
SecondName=input('Enter your Name:')
EnglishMark1=input('English Mark:')
MathsMark1=input('Maths Mark:')
PythonMark1=input('Python Mark:')
EnglishMark1=int(EnglishMark1)
MathsMark1=int(MathsMark1)
PythonMark1=int(PythonMark1)
TotalMark1=EnglishMark1+MathsMark1+PythonMark1
print('TotalMark:',TotalMark1)
AverageMark1=TotalMark1/300*100
print(f"The Percentage is {AverageMark1:.2f}",'%')
print(f"{'Name':<20}\t{'English':<3}\t{'Maths':<3}\t{'Python':<3}\t{'Total':<4}\t{'%':<3}")
print(f"{FirstName:<20} \t{EnglishMark:<3}\t{MathsMark:<3}\t{PythonMark:<3}\t{TotalMark:<4}\t{AverageMark:<3}")
print(f"{SecondName:<20}\t{EnglishMark1:<3}\t{MathsMark1:<3}\t{PythonMark1:<3}\t{TotalMark1:<4}\t{AverageMark1:<3}")





