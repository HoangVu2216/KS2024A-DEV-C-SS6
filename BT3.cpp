#include <stdio.h>
#include <string.h>
int main() {
    char name[20]="1";
    char check[20];
    int count;
  //  while(count<10) {
    while(count < 5) {
        printf("nhap cai mat khau diiiiii: ");
        scanf("%s",check);
        if(strcmp(check,name)==0) {
            printf("pass dung roi");
            return 0;
        }
        else {
            printf("pass sai \n");
            count++;
        }
    }
  //  printf("goi y la...\n");
  //  while(count < 10) {
//        printf("nhap cai mat khau diiiiii: ");
//        scanf("%s",check);
//        if(strcmp(check,name)==0) {
//            printf("pass dung roi");
//            return 0;
//        }
//        else {
//            printf("pass sai \n");
//            count++;
//        }
//    }
//    }
    printf("ban da nhap sai qua nhieu lan.");
return 0;
}
