#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[20];	
};

void main(void) {
	struct Book *p;
	
	p= (struct Book *)malloc(2*sizeof(struct Book)); //dynamic allocation of 2 Book structure instances
	
	if(p==NULL){
		printf("메모리 할당 오류\n");
		return;
	}
	
	p->number = 1;
	strcpy(p->title, "C Programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Electronics");
	
	printf("%s %s\n",p->title,(p+1)->title);
	
	free(p);
	return 0;

}
