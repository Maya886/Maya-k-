import numpy as np
#vector array
a=np.array([1,2,3,4])
print("vector array:",a)

#matrix array
b=np.array([[1,2],[3,4]])
print(" Matrix array:",b)

#zeros of the given shape
c=np.zeros((2,3))
print("zeros:",c,)

#array of ones
d=np.ones(4)
print("ones:",d)

#identify matrix
e=np.eye(3)
print("eye:",e)

#by step;stop excluded
f=np.arange(0,10,2)
print("arange:",f)

#n points;stop included
g=np.linspace(0,1,5)
print("linspace:",g)


print("Number of dimensions:",b.ndim)
print("Size of each dimension(row,column):",b.shape)
print("Total number of element:",b.size)
print("Data type of the element:",b.dtype)
print("Bytes used be eack elements:",b.itemsize) 
print("Converts type(decimals are cut):",b.astype(int))

first=np.array([1,2,3])
second=np.array([4,5,6])
print("Addition:",first+second)
print("Substration:",first-second)
print("Multiplication: ",first*second)

first_2d=np.array([[10,20,30],[40,50,60]])
second_2d=np.array([[100,200,300],[400,500,600]])
print("Addition:",first_2d+second_2d)
print("Substration:",first_2d-second_2d)
print("Multiplication:",first_2d*second_2d)

x=np.array([[1,2],[4,5],[6,7]])
y=np.array([[10,20],[30,40],[50,60]])
print("Multiplication:",x*y)
print("Addiction:",x+y)