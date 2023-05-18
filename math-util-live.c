#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int n[10], eventCount = 0, sumOdd = 0; //vip
	
	printf("Please input 10 numbers\n");
	for (int i = 0; i < 10; i++)
	{
		printf("Input number #%d: ", (i +1));
		scanf("%d", &n[i]);	//&n[i] ~~~ int yob & yob
		
	}
	

	printf("You have input the following numbers\n");
	for ( int i = 0; i < 10; i++)
		printf("%d\t", n[i]);
	
	printf("\n");
	
	for (int i = 0; i < 10; i++)
	{
		
		if ( n[i] % 2 == 0)
			eventCount++; // gap thang chan ++ lien
		else
			sumOdd += n[i]; 
	}
	
	printf("There is/are %d even number(s) in this array\n", eventCount);
	printf("The sum of odd number(s) in this array is: %d\n", sumOdd);
	
	return 0;
}