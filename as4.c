#include <stdio.h>

int main()
{
	int n, power;

	printf(" n	      2 to the n\n");
	printf("---	   ---------------\n");

	for(n = 0; n <=10; n++) {
		power = 1;

		printf("%2d               ", n);

		for (int i = 0; i < n; i++)
		{
			power *= 2;
		}

		printf("%d\n", power);
	}

	return 0;
}

/* Output:

 n            2 to the n
---        ---------------
 0                1
 1                2
 2                4
 3                8
 4                16
 5                32
 6                64
 7                128
 8                256
 9                512
 10               1024

 */

