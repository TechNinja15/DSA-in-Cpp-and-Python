user_input = input("Enter a Character : ")

ch = user_input[0]  #Because of this line the compiler only takes first alphabet is the user bymistakely entered more than a char

if (ch>='a' and ch<='z'):
    print(ch, " is a Lower Case Character")
elif(ch>='A' and ch<='Z'):
    print(ch," is a Upper Case Character")
else:
    print(ch, " is not a Character, INVALID!")