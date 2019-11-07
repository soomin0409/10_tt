#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap_1(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void swap_2(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}


int main(int argc, char *argv[]) {
	int a=3;
	int b=5;
	swap_2(a,b);
	printf(" a:%i, b:%i\n",a,b);
	swap_1(&a,&b);
	printf(" a:%i, b:%i\n",a,b);
	
	return 0;
}
