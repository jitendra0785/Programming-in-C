#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d = %lld\n", num, factorial(num));
    }
    return 0;
}
