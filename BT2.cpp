#include <stdio.h>

int main() {
    int a, n, count1, count2;
    for (a=1; a<=5; a++) {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n%2!=0) {
            count1++;
        }
        else {
            count2++;
        }
    }
    printf("co %d so le \n", count1-1);
    printf("co %d so chan",  count2);
return 0;
}
