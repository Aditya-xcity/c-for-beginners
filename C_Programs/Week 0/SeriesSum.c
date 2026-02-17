/*Design a user defined function 
'IsPrime that retums 1 if the number is prime else 0. Implement a C program to read 
the number and display the output in the calling program
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE*/

#include<stdio.h>
int isPrime(int n){
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if(n%2==0) return 0;
    for (int i = 3; i*i <= n; i+=2){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("%d",isPrime(n));
    return 0;
}

/*OUTPUT
Enter a number:55
0

Enter a number:11
1

*/