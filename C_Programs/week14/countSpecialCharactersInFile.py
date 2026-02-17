"""Develop a program in python to read an entire text file and display the number of 
special characters present in it to the screen.   

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
"""

# Open the file in read mode
f = open("abc.txt", "r")
content = f.read()
f.close()


special_chars = "!@#$%^&*()-_=+[]{};:'\",.<>?/\\|`~₹€£•"  


special_count = 0


for ch in content:
    if ch in special_chars:
        special_count += 1


print("Number of special characters in the file:", special_count)


'''
output:
Number of special characters in the file: 3
'''