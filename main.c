#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumtwo( int a, int b) 
{
	int output;
	output = a+b;
	return output;
}

int square ( int n)
{
	return (n*n);
}

int get_max (int a, int b)
{
   if (a> b)
     return a;
     
    return b; 
}

int main(int argc, char *argv[]) {
	int x, y;
	int output;
	
	x = 4;
	y = 3;
	
	output = sumtwo( x, y);
	printf("sumtwo : %i\n", output);
	printf("square : %i\n", square (x));
	output = get_max(x, y);
	printf("get_max : %i\n", get_max(x, y));
	
	return 0;
}
