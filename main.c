#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int i;
	int grade[5];
	int *ptr;
	int sum=0;
	
	ptr = grade;
	
	for(i=0; i<5; i++)
	{
		printf("grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}

	for(i=0; i<5; i++){
		
		printf("grade[%d] = %d\n", i, *(ptr+i));
		sum += *(ptr+i);
	}
		
	printf("\n -- average : %i\n", sum/5);
	
	return 0;
}
