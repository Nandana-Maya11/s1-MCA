num_list=[]
n=int(input("Enter the number of values in the list:"))
print("Enter the elements to the list:")
for i in range(n):
    val=int(input())
    num_list.append(val)
total=0
for item in num_list:
    total=total+item
print("The sum of all items in the list is:",total)    
