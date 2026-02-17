'''Design a function in Python to copy N lines from a file Sample.txt present in the 
current drive to another file Chunk.txt. Display the contents of Chunk.txt to the 
screen.
  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
'''


n = int(input("Enter number of lines to copy: "))


with open("Sample.txt", "r") as source_file:
    lines = []
    for i in range(n):
        line = source_file.readline()
        if not line: 
            break
        lines.append(line)


with open("Chunk.txt", "w") as dest_file:
    dest_file.writelines(lines)


print("\nContents of Chunk.txt:")
with open("Chunk.txt", "r") as chunk_file:
    print(chunk_file.read())
