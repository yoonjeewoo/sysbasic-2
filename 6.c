#include <stdio.h>

int main() {
    int n;
    int front=0;
    int back=1;
    int c;
    printf("숫자를 입력하세요.");
    scanf("%d",&n);
    if(n==0) {
        printf("0 ");
    }else {
        printf("1 ");
    }
    for(int i=1;i<n;i++) {
        c=front+back;
        printf("%d ",c);
        front=back;
        back=c;
    }
}