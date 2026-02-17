/* Design a UDF that returns the count of a special character present in a sentence,  
   passed to it using a pointer to the calling program.  
   Implement a C program to read a string in the main program and display  
   the count of the special character returned by the function to the console. */




#include<stdio.h>
#include<string.h>

int special_character(const char *str)
{
    int i = 0, count = 0;
    while (*(str + i) != '\0')
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
        {
            count++;
        }
        i++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int count = special_character(str);
    printf("Number of special characters: %d\n", count);
    return 0;
}


/*
OUTPUT

Enter a string: #herwegoagain!
Number of special characters: 3        

*/