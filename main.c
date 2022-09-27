#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x, y, z, m;
	
	printf("input the second : ");
	scanf("%i", &x);
	
	y = x / 3600;
	z = (x - y*3600) / 60;
	m = x - y*3600 - z*60 ; 
	
	printf("The time for %i second is %i : %i : %i \n", x, y, z, m);
	
	return 0;
}
