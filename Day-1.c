Day-1


"1- write a program to find sum of  first N natural numbers"

#include <stdio.h>

int main() {
    int N, sum;
    printf("Enter a number: ");
    scanf("%d", &N);

    sum = N * (N + 1) / 2;  
    printf("Sum of first %d natural numbers is: %d\n", N, sum);

    return 0;
}
  

"2- write a program to print multiplication table of given number"

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


"3-write a program to find a factoraial of a number"

#include <stdio.h>

int main() {
    int n, i;
    fact = 1;  

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}


"4-write a program to count digit in a number in c"

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num == 0) {
        count = 1;
    } else {
        
        if (num < 0) {
            num = -num;  
        }

        while (num != 0) {
            num = num / 10;  
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
