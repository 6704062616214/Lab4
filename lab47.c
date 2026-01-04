#include <stdio.h>
int main (void)
{
int i,j,r,l;
char a;
	scanf ("%c %d %d", &a,&r,&l);
		for (i = 0; i<l; i++){
				for (j = 0; j<r; j++){
					printf("%c",a);
				}
			printf("\n");
				}
return 0;
} 
