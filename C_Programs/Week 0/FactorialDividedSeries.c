/*
Write C program to compute following series till n terms: 
1+2/2!+3/3!+4/4!.................n/n! 
NAME: Aditya Bhardwaj
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    double sum = 0.0;
    double fact = 1.0;
    
    for(int i = 1; i <= n; i++) {
        fact *= i;
        sum += i / fact;
    }
    
    printf("The sum of the series is: %.6lf\n", sum);
    return 0;
}
/*
OUTPUT:
Enter the number of terms (n): 5
The sum of the series is: 2.708333
*/