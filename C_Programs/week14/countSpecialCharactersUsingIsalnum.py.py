"""
Develop a program in python to read an entire text file and display the number of 
special characters present in it to the screen.   

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
"""

f = open("abc.txt", "r")
content = f.read()
f.close()

special_count = 0

for ch in content:
    if not ch.isalnum() and not ch.isspace():
        special_count += 1

print("Number of special characters in the file:", special_count)
