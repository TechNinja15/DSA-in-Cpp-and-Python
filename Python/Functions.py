# n = int(input("Enter a number : "))
# sum_of_digits = 0

# while n > 0:
#     lastdig = n % 10      
#     n = n // 10        
#     sum_of_digits += lastdig 

# print("Sum of digits = ", sum_of_digits)


# a = int(input("Enter number for n : "))
# b = int(input("Enter number for r : "))

# def factorial(n):
#     fact = 1
#     for i in range(1, n+1):
#         fact = fact * i
#     return fact

# n = factorial(a)
# r = factorial(b)
# n_r = factorial(a-b)

# print(n/(r*n_r))



# def prime(n):
#     count = 0
#     for i in range(1,n+1):
#         if n % i == 0:
#             count = count + 1
#     if count == 2:
#         print("This is a prime Number")
#     else:
#         print("This is not a prime Number")
# a = int(input("Enter a Value : "))
# prime(a)


def fibonacci(n):
    if n <= 0:
        print("Please enter a positive integer")
        return
    
    a, b = 0, 1
    
    if n >= 1:
        print(a)
    if n >= 2:
        print(b)
        
    for i in range(2, n):
        c = a + b
        a = b
        b = c
        print(c)

n = int(input("Enter a Number : "))
fibonacci(n)
