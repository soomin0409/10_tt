#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[5];
	int sum=0;
	for(i=0;i<5;i++){
		printf("input grade[%i]:",i);
		scanf("%i",&grade[i]);
	}
	for(i=0;i<5;i++){
	
	printf("grade[%i]: %i\n",i,grade[i]);
	
	}
	int *ptr;
	ptr=grade;
	for(i=0;i<5;i++){
		sum+=*(ptr+i);
	}
	printf("average:%i",sum/5);
	
	return 0;
}
