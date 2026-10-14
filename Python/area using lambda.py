sq_area=lambda side_length:side_length**2
rect_area=lambda length,width:length*width
tri_area=lambda base,height:0.5*base*height
sqs=int(input("Enter the side of the SQUARE:"))
print("Enter the base and height of the RECTANGLE")
ht=int(input("Height:"))
bs=int(input("Base:"))
print("Enter the length and breadth of TRIANGLE")
l=int(input("Length:"))
b=int(input("Breadth:"))
square=sq_area(sqs)
print("Area of square:",square)
rectangle=rect_area(l,b)
print("Area of rectangle:",rectangle)
triangle=tri_area(bs,ht)
print("Area of triangle:",triangle)



