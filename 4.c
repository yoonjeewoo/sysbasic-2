#include<stdio.h>

int main() {
    int i;
    int j;
    int gop=1;
    printf("::::::::::A TABLE OF POWERS::::::::::\n");
    printf("Integer \t Square \t 3rd Power \t 4th Power \t 5th Power\n");
    printf("------- \t ------ \t --------- \t --------- \t ---------\n");
    for(i=1;i<=10;i++) {
        for(j=1;j<=5;j++) {
            gop*=i;
            printf("%7d \t ",gop);
            
        }
        gop=1;
        printf("\n");
    }
}
