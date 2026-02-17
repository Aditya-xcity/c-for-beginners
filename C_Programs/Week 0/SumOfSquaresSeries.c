/*
Write C program to compute following series till n terms: 
12+22+32+…………………………upto n terms 
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE

*/


#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    int sum = 0;
    
    for(int i = 1; i <= n; i++) {
        sum += i * i;
    }
    
    printf("The sum of the series is: %d\n", sum);
    return 0;
}
/*
OUTPUT:
Enter the number of terms (n): 5
The sum of the series is: 55
*/