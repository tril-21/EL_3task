#include <stdio.h>

int main(){
	int a, b;
	char *p=&a;
	while(1){
		printf("Введите целое положительное число:\t");
		scanf("%d", &a);
		if(a<0){
			printf("Ошибка\n");
		}else{
			break;
		}
	}
	while(1){
		printf("Введите число от 0 до 255:\t");
		scanf("%d", &b);
		if(b<0||b>255){
			printf("Ошибка\n");
		}else{
			break;
		}
	}
	printf("Address A= %p\n", &a);
	printf("Address p= %p\n", p);
	
	printf("1 число:\t0x(a)=%x\n2 число:\t0x(b)=%x\n",a,b);
	p=p+2;
	printf("Address p= %p\n", p);
	*p=b;
	printf("Число с замененным байтом:\t0x(a)=%x\n",a);
	return 0;
}
