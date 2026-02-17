/*
Write C program to compute following series till n terms: 
1-1/3+1/5-1/7+1/9..............upto n terms. 
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
    
    double ans = 0.0; 
    int d = 1;
    
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            ans += 1.0 / d;
        }
        else{
            ans -= 1.0 / d;
        }
        d += 2;
    }
    
    printf("The Answer Is: %.6lf\n", ans); 
    return 0;
}
/*
OUTPUT:
Enter The Number: 11
The Answer Is: 0.808079
*/