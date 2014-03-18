#include <stdio.h>
#include "mylib.h"

main()
{
	printf("Hello!\n");
	int a;
	int b;

	printf("Vvedite visoty:\n");
	scanf("%d", &a);
	//printf("a+1=%d\n", a+1);
	printf("Vvedite shiriny:\n");
	scanf("%d", &b);

   dom(a,b);
}


