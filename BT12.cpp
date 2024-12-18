#include <stdio.h>
    int main() {
        int n;
        printf("Nhap vao mot so nguyen n: ");
        scanf("%d", &n);
        if (n > 0) {
            int a = 0, b = 1;
            printf("%d so dau tien trong day Fibonacci la:\n", n);
            for (int i = 0; i < n; i++) {
                printf("%d\n", a);
                int sum_at_time = a + b;
                a = b;
                b = sum_at_time;
            }
        }
    return 0;
}
