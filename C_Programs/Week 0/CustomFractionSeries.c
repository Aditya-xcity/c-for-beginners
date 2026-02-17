/*Design a UDF that evaluates the following series. Read the number of terms N as the input in the main program.
1/21+2/51+3/101+ 4/171+5/261. ...up to N terms
NAME: ADITYA BHARDWAJ
ROLLNO: 06
SECTION:F1
COURSE: BTECH
BRANCH:CSE
*/

#include<stdio.h>
long long Fact(int n){
    long long ans = 1;
    while(n>0){
        ans*=n;
        n--;
    }
    return ans;
}
float SeriesSum(int n){
    int i = 1,numOfTerm = 1;
    float sum = 0;
    while (numOfTerm <= n){
        long long deno = Fact((i*i)+1);
        sum += (float)i / deno;
        i+=2;
        numOfTerm++;
    }
    return sum;
}
int main(){
    int n;
    float sum;
    printf("Enter The Number Of Terms: ");
    scanf("%d",&n);
    sum = SeriesSum(n);
    printf("%.6f",sum);
    return 0;
} 