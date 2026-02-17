/*Write a C program to accept & store N real numbers into an array. Find their
mean and standard deviation using pointers and display the same to the output
screen.
 Sample Input:
 N=9 Array[ ] = {22, -3, 11, -2, 5, 7,12,13, 18}
 Output:
 Mean μ : 9.22 Std. Deviation: 7.91
 Hint: Use Std. Deviation formula: 
 
 
   Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE
 
 
 
 */





 #include <stdio.h>
#include <math.h>

void calculateMeanStdDev(float *arr, int n, float *mean, float *stdDev) {
    float sum = 0.0, variance = 0.0;


    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    *mean = sum / n;


    for (int i = 0; i < n; i++) {
        variance += pow(*(arr + i) - *mean, 2);
    }
    variance /= n;

    *stdDev = sqrt(variance);
}

int main() {
    int n;
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter %d real numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float mean = 0.0, stdDev = 0.0;
    calculateMeanStdDev(arr, n, &mean, &stdDev);

    printf("Mean μ : %.2f\n", mean);
    printf("Standard Deviation σ : %.2f\n", stdDev);

    return 0;
}


/*output

Enter the number of elements (N): 5
Enter 5 real numbers:
1
2
3
4
5
Mean ╬╝ : 3.00
Standard Deviation ╧â : 1.41

*/
