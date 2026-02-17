/*Design a user-defined function (UDF) GCD that returns the greatest common divisor to the calling program. Implement a C program to read two integers and print the GCD after calling the function
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE

*/
#include<stdio.h>
int GCD(int a, int b){
    int ans;
    ans = 1;
    if(a==b){
        printf("%d",a);
        return 0;
    }
    int smallest = a < b ? a : b;
    int i = 2;
    while(i <= smallest){
        if(a%i==0 && b%i==0){
            a/=i;
            b/=i;
            ans = ans*i;
        }
        else{
            i++;
        }
    }
    return ans;    
}
int main(){
    int a,b,ans;
    printf("Enter The First Number: ");
    scanf("%d",&a);
    printf("Enter The Second Number: ");
    scanf("%d",&b);
    ans = GCD(a,b);
    printf("%d",ans);
    return 0;
}

/*OUTPUT
Enter The First Number: 26
Enter The Second Number: 91
13
*/