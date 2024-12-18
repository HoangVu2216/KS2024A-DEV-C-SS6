#include <stdio.h>
int main() {
   int number;
    printf("nhap vao mot so: ");
    scanf("%d", &number);
    printf("cac uoc cua so do la \n");
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
//        	if (i==number) {
//			return 0;
//			} else {
            printf("%d\n", i);
//            }
        }
    }
    return 0;
}

