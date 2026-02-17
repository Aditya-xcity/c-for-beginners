"""Write a python program to find & display all the occurrence of words starting with 
the letters a, c, d, g, p and s read in a file from the user to the screen. Assume 
articles or single letters also as words. Ignore the case. 
  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
"""


f = open("hi.txt", "r")
data = f.read()

wordlist = data.split()
for i in range(len(wordlist)):
    word = wordlist[i].lower()

    if(word[0] == 'a' or word[0] == 'c' or word[0] == 'd' or word[0] == 'g' or word[0] == 'p' or word[0] == 's'):
        print(word, end =" ")
f.close()


'''
Output: 
Can design game python assume are players a code say code are allowed 
'''