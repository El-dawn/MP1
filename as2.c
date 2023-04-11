#include <stdio.h>

int main()
{
	int i;

	i = 0;
	printf("While loop:\n");
	while(i < 10) {
		printf("%d ", i);
		i++;
	}

	i = 0;
	printf("\nFor loop:\n");
	for(; i < 10;) {
		printf("%d ", i);
		i++;
	}

	i = 0;
	printf("\nDo-While loop:\n");
	do {
		printf("%d ", i);
		i++;
	}
	while (i < 10);

	return 0;
}

/* Output: 

While loop:
0 1 2 3 4 5 6 7 8 9
For loop:
0 1 2 3 4 5 6 7 8 9
Do-While loop:
0 1 2 3 4 5 6 7 8 9

Although the outputs are the same, the FOR loop is different from
the other two loops because it only runs once. On the other hand,
the WHILE loop and DO-WHILE loop will always run while i < 10.

*/