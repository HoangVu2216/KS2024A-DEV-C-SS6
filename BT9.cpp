#include <stdio.h>
int main() {
    printf("cac so amstrong la : \n");
    for (int i=100; i<1000; i++) {
        int sohangtram=i/100, sohangchuc=(i%100)/10, sohangdonvi=i%10;
        int tonglp=(sohangtram*sohangtram*sohangtram)+(sohangchuc*sohangchuc*sohangchuc)+(sohangdonvi*sohangdonvi*sohangdonvi);
        if (i==tonglp) {
            printf("%d\n", i);
        }
    }
return 0;
}
