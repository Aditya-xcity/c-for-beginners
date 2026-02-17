/*Read a positive number in the main program and then design a UDF to find the sum of its individual digits. Later check if the sum is even or add in the main program. Implement a C program to print an appropriate message.
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE

*/

#include <stdio.h>
int numcheck(int n){
    int t =0;
    int sum =0;
    while(n!=0){
        t = n%10;
        n = n / 10;
        sum += t;
    }
    return sum;
}
int main(){
    int n,ans;
    printf("Enter a Number: ");
    scanf("%d",&n);
    ans = numcheck(n);
    if(ans%2==0){
        printf("The Sum Of All The Digits Of %d Is Even\n",n);
    }
    else{
        printf("The Sum Of All The Digits Of %d Is Odd\n",n);\
    }
    return 0;
}

/*OUTPOUT
Enter a Number: 123454
The Sum Of All The Digits Of 123454 Is Odd
*/