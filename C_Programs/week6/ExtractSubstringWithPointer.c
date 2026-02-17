/* Design a UDF that takes a single string and a character present in the string as its arguments.  
   The function should return the index of the first occurrence of the character in the string.  
   Write a C program to read a sentence in the main program and display  
   the substring starting from the index returned by the UDF using a pointer to the console. */  

/* Sample Input:  
   Sentence: "jack and jill went up the hill"  
   Search Character: 'w'  
   Output: "went up the hill" */  


   /*  
   Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
  */

   #include <stdio.h>
   #include <string.h>
   
   int finder(char *sen, char ch) {
       for (int i = 0; sen[i]; i++) 
           if (sen[i] == ch) return i;
       return -1;
   }
   
   int main() {
       char sen[100], ch;
       int idx;
   
       printf("Enter a sentence: ");
       fgets(sen, sizeof(sen), stdin);
       sen[strcspn(sen, "\n")] = '\0';
   
       printf("Enter a character: ");
       scanf(" %c", &ch);
   
       idx = finder(sen, ch);
       printf(idx != -1 ? "Output: %s\n" : "Character not found\n", sen + idx);
       
       return 0;
   }
   

   /*
   
   OUTPUT
   Enter a sentence: jack and jill went to graphic era hill
Enter a character: w
Output: went to graphic era hill
   */