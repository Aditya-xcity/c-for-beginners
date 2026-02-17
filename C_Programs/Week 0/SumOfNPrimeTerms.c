/*
Design a UDF that evaluates the sum of the following prime series 
and returns the summation to the calling program. 
Implement a Cprogram to read the value of N in the main program. 1+2+3+5+7+11+13+17+........N
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE

*/

#include<stdio.h>
int isPrime(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    int i = 3;
    while(i*i <= n){
        if(n%i==0){
            return 0;
        }
        i+=2;
    }
    return 1;
}
int sumPrime(int n){
    int count = 0, sum = 0, i = 1;
    while (count < n){
        if(isPrime(i)){
            count++;
            sum += i;
        }
        i++;
    }
    return sum;
}
int main(){
    int n,ans;
    printf("Enter The Number Of Terms: ");
    scanf("%d",&n);
    ans = sumPrime(n); 
    printf("The Sum Of %d Prime Terms Is: %d\n",n,ans);
    return 0;
}

/*OUTPUT
Enter The Number Of Terms: 7
The Sum Of 7 Prime Terms Is: 58
*/