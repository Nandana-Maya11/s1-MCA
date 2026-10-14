result=[]
start=int(input("Enter the string range(four-digit number):"))
end=int(input("Enter the ending range(four-digit number):"))
if start<1000 or end>9999 or start >end:
    print("Invalid range.Please enter a valid four-digit range.")
else:
    for num in range(start,end+1):
        root=int(num**0.5)
        if root*root==num:
            digits=str(num)
            if all(int(digit)%2==0 for digit in digits):              
                result.append(num)
    print("Four-digit even perfect square number in the given range.")
    print(result)
