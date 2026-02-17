/*Design a UDF that returns the product of the first and last digit of an integer passed to it as an argument.
Write a C program to read the integer and display the desired product to the screen in the main program.
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE
*/

#include<stdio.h>
int sum(int n){
    int ld = n%10;
    int fd;
    while(n>0){
        fd = n;
        n/=10;
    }
    return (fd * ld);
}
int main(){
    int n,ans;
    printf("Enter The Number: ");
    scanf("%d",&n);
    ans = sum(n);
    printf("%d",ans);
    return 0;
}