/*Design a UDF in C to find the product and quotient of two numbers passed to
it from the calling program. Display the product and the quotient in the main
program. Read the two numbers in the main program & also display their
product and quotient. Implement using a pointer.

  Name    - ADITYA BHARDWAJ
  Section - F1
  Roll No - 06
  Course  - B TECH
  Branch  - CSE



*/


#include<stdio.h>

void fun(int a, int b, float *p, float *q) {
    *p = a * b;
    if (b != 0)
        *q = (float)a / b;
    else
        *q = 0;
}

int main() {
    int a, b;
    float p = 0, q = 0;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    fun(a, b, &p, &q);

    printf("Product: %.2f\n", p);
    if (b != 0)
        printf("Quotient: %.2f\n", q);
    else
        printf("Quotient: Undefined (division by zero)\n");

    return 0;
}


/*output


Enter the first number: 6
Enter the second number: 3
Product: 18.00
Quotient: 2.00

*/
