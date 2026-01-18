n= int(input("Enter a Number : "))
sum = 0

for i in range(1,n+1):
    if(i%2!=0):
        print(i)
        sum = sum + i
print("Sum is : ",sum)
