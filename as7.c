#include <stdio.h>

#define ROWS 9
#define COLUMNS 9 
int main() {
	char points[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
	int road_networks[ROWS][COLUMNS] = {{1, 1, 0, 0, 0, 1, 0, 0, 0},
							   		  	{1, 1, 1, 0, 0, 0, 0, 0, 0},
							   	        {0, 1, 1, 0, 1, 1, 0, 0, 1},
							   		    {0, 0, 0, 1, 1, 0, 0, 0, 0},
							   		    {0, 0, 0, 1, 1, 0, 0, 0, 0},
							   		    {1, 0, 1, 0, 0, 1, 0, 0, 0},
							   		    {1, 0, 0, 1, 0, 0, 1, 0, 0},
							   		    {0, 0, 0, 0, 0, 0, 0, 1, 1},
							   		    {0, 0, 0, 0, 0, 0, 0, 1, 1}};

	for (int i = 0; i < ROWS; i++){
		if (i == 2 || i == 3) {
			printf("POINT %c: {", points[i]);
			for(int j =0; j < COLUMNS; j++) {
				printf(" %d ", road_networks[i][j]);
			}
			printf("}");
		}
		else {
			printf("POINT %c: ", points[i]);
			for(int j =0; j < COLUMNS; j++) {
				printf(" %d ", road_networks[i][j]);
			}
		}

		printf("\n");
	}

	int start;

	printf("\nWhich point do you want to start? (1-A, 9-I): ");
	scanf("%d", &start);

	switch (start) {
		case 1: case 2: case 6:
			printf("\nYou are at point %c. The nearest charging station is point C.", points[--start]);
			break;
		case 5: case 7:
			printf("\nYou are at point %c. The nearest charging station is point D.", points[--start]);
			break;
		case 8: case 9:
			printf("\nYou are at point %c. There are no nearby charging stations.", points[--start]);
			break;
		case 3: case 4:
			printf("\nYou are at point %c. You are already at a charging station.", points[--start]);
			break;
		default:
			printf("\nInvalid point. Terminating Program.");
	}
	
	return 0;
}

