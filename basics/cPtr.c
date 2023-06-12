#include <stdio.h>

int main(){
	
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("val of a is %d\n",a);

	printf("val of b is %d\n",b);
	

	printf("after giving the address of \"a\" to pointer\n");

	int *ptr=NULL;

	if(ptr){
		printf("ptr is not null\n");
	}

	ptr=&a;
	*ptr = 19;

	printf("now val of a is %d\n",a);
	printf("value of \"b\" is still %d\n",b);

	return 0;
}
