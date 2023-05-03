

#include <stdio.h>


void printDigit(int N)
{
	int r;

	
	if (N == 0) {
		return;
	}

	
	r = N % 10;

	
	printDigit(N / 10);


	printf("%d ", r);
}


int main()
{
	int N = 4873;

	printDigit(N);
	return 0;
}

