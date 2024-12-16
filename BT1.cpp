#include <stdio.h>

int main() {
    int a, n, sum;
    for (a=1; a<=5; a++) {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n%2!=0) {
            sum = sum + n;
        }
    }
    printf("The sum of the given numbers is %d", sum);
return 0;
}
