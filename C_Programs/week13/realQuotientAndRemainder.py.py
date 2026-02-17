'''Design a function in python that returns the real quotient and the remainder to 
the calling program. Display the quotient and the remainder to the console. 
  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE

'''


def fun(dividend, divisor):

    quotient = dividend / divisor
    remainder = dividend % divisor
    return quotient, remainder


num1 =int(input("Enter first number: "))
num2 =int(input("Enter second number: "))


q, r = fun(num1, num2)

print("The quotient is:", q)
print("The remainder is:", r)

'''
Output:
Enter first number: 628
Enter second number: 25
The quotient is: 25.12
The remainder is: 3  
'''