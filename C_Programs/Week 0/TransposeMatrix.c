/*Develop a C program that computes and displays the 1st highest, 2nd highest, and 3rd highest scores by reading
the percentage marks of 'N' students in a class. 
Assume all scores are distinct, with a maximum of 100 marks for each subject
NAME: ADITYA BHARDWAJ
ROLL NO: 06
SECTION: F1
COURSE: BTech
BRANCH: CSE
*/
#include <stdio.h>

int main() {
    int n, i, f, s, t;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int sc[n];
    printf("Enter the scores:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &sc[i]);
    }

    f = s = t = -1;

    for (i = 0; i < n; i++) {
        if (sc[i] > f) {
            t = s;
            s = f;
            f = sc[i];
        } else if (sc[i] > s) {
            t = s;
            s = sc[i];
        } else if (sc[i] > t) {
            t = sc[i];
        }
    }

    printf("1st Highest Score: %d\n", f);
    printf("2nd Highest Score: %d\n", s);
    printf("3rd Highest Score: %d\n", t);

    return 0;
}

/*OUTPUT
Enter the number of students: 5
Enter the scores:
90
80
70
60
50
1st Highest Score: 90
2nd Highest Score: 80
3rd Highest Score: 70
*/