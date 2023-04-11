#include <stdio.h>

int main()
{
	int day, days, week_start, day_start;

	printf("Enter number of days in month: ");
	scanf("%d", &days);

	switch (days){
		case 31: case 30: case 28:
			printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
			scanf("%d", &week_start);	

			printf("\n");

			for (day_start = 1; day_start < week_start; day_start++)
				printf("   ");

			for (day = 1; day <= days; day++){

				printf("%2d ", day);

				if (week_start >= 7){
					printf("\n");
					week_start = 1; 
				}
				else {
					week_start++;
				}
			}
			break;
		default:
			printf("Entered date is not valid. Terminating program.");
	}
	return 0;
}