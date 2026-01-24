'''
Q1.Example:
    for n = 4
    1234
    1234
    1234
    1234
'''

# n =int(input("Enter a Number : "))
# for i in range(1,n+1):
#     for j in range (1,n+1):
#         print(j, end="")
#     print()

'''
Q2. for n = 4 Example:
    ABCD
    ABCD
    ABCD
    ABCD
'''

# n=int(input("Enter a Number : "))
# for i in range(1,n+1):
#     char ch = 'A'
#     for j in range(1,n+1):
#         print(ch)
#         ch = chr(ord(ch)+1) # here ord() converts character into there ASCII code while chr converts it into Character again and +1 is used to increment the character when it is converted into ASCII code 
#     print() # this is used to print the next line

'''
Q3. for n =3 Example: 
    123
    456
    789
'''

# n=int(input("Enter a Number : "))
# num = 1

# for i in range(1,n+1):
#     for j in range(1,n+1):
#         print(num,end="")
#         num = num +1
#     print()

'''
Q4. for n = 4 Example:
    ABC
    DEF
    GHI
'''

# n=int(input("Enter a Number : "))
# ch = 'A'

# for i in range(1,n+1):
#     for j in range(1,n+1):
#         print(ch,end="")
#         ch = chr(ord(ch)+1) 
#     print()

'''
Q5. For n = 4 Example : 
    *
    **
    ***
    ****
'''

# a = int(input("Enter a Number : "))

# for i in range(1,a+1):
#     print("*"*i)

'''
Q6. for n = 4 Example:
    1
    22
    333
    4444
'''

# n = int(input("Enter a Number : "))

# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(i,end="")
#     print()

'''
Q7. for n = 4 Example:
    A
    BB
    CCC
    DDDD
'''
# n = int(input("Enter a Number : "))
# ch = "A"
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(ch,end="")
#     ch = chr(ord(ch)+1) # we kept this outside the inner loop because we want to print the same character in the same row
#     print()

'''
Q8. for n = 4 Example : 
    1
    21
    321
    4321
'''

# n = int(input("Enter a Number : "))

# for i in range(1,n+1):
#     for j in range(i, 0, -1):
#         print(j,end="")
#     print()

'''
Q9. for  n=4 Example :
    1
    23
    456
    78910
'''

# n = int(input("Enter a Number : "))
# count = 1
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         print(count, end="")
#         count = count + 1
#     print()

'''
Q10. for  n=4 Example :
    A
    BC
    DEF
    GHIJ
'''

# n = int(input("Enter a Number : "))
# ch = 'A'
# for i in range(1,n+1):    
#     for j in range(1,i+1):
#         print(ch,end="")
#         ch= chr(ord(ch)+1)
#     print()


'''
Q11 for n=4 Example :
    A
    BA
    CBA
    DCBA
'''

# n = int(input("Enter a Number : "))
# ch = ord('A')

# for i in range(n):
#     for j in range(ch, ord('A') - 1, -1):
#         print(chr(j), end="")
#     print()
#     ch += 1


