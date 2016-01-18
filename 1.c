#include <stdio.h>

int main(void){
	int x, y = 0;
	x = 1 / y; //1 나누기 0은 불가능하다. 그걸 정수int형 변수에 넣는 것이 불가능하다.
	printf(“x = %d\n”, x);
	return 0;
}
