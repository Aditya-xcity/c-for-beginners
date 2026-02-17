/*
Write C program to compute following series till n terms: 

a. 1+(1+2)+(1+2+3)+(1+2+3+4)+..................+(1+2+3+.....n) 
NAME: Aditya Bhardwaj
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    
    int ans = 0;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            ans += j;
        }
    }
    
    printf("The Answer Is: %d\n", ans);
    return 0;
}


/*
OUTPUT:
Enter The Number: 5
The Answer Is: 35
*/