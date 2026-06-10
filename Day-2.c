" Day-2"


"1- write a pragram to find sum of digits of a number "


#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        num = -num;  
    }

    while (num != 0) {
        remainder = num % 10;   
        sum += remainder;      
        num = num / 10;         
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}



"2-write  to program to reverse a number"

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;            
        reversed = reversed * 10 + remainder; 
        num = num / 10;                  
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}


"3-write a program to find product of digits of a number"

#include <stdio.h>

int main() {
    int num, product = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        product = 0;
    } else {
        while (num != 0) {
            remainder = num % 10;
            product *= remainder;
            num = num / 10;
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}


"4- write a program to check taht number is palindrome or not"

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original < 0) {
        original = -original;
    }

    if (original == reversed) {
        printf("Number is Palindrome\n");
    } else {
        printf("Number is Not Palindrome\n");
    }

    return 0;
}
