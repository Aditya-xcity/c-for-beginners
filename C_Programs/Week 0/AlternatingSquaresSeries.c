/*
Write C program to compute following series till n terms: 
12-22+32-42………………………upto n terms 
NAME: Aditya Bhardwaj
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE*/


#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);
    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(i%2!=0){
            ans+= pow(i,2);
        }
        else{
            ans-= pow(i,2);
        }
    }
    printf("The Answer Is: %d",ans);
    return 0;
}   

/*OUTPUT:
Enter The Number: 5
The Answer Is: 14
*/