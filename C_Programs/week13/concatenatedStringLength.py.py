'''Design a function in python that returns the concatenated string and its length to 
the calling program. Display the joined string and its length to the console. 
  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
  '''

def fun(str1,str2):
    str3 = str1+str2
    length =len(str3)
    return str3,length


str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")

str3,length = fun(str1,str2)
print("The joined string: ",str3)
print("Length of new string: ",length)

'''
output:
Enter the first string: tic tac 
Enter the second string:  toc
The joined string:  tic tac toc        
Length of new string:  11
'''