/*	ENG175IN	Summer 2020
 *
 *	Author:	Quynn Bell
 *
 *	Date Created:	____ of ___ 2020
 *
 *	Copyright @Qbell.	All Rights Reserved.
 *
 *	Program Function:
 */

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

char userRestart;

int main(void) {

	double valueX1, valueX2, valueY1, valueY2;
	int userCalcChoice;
	char userCalcDist[50] = "Distance Formula";
	char userCalcSlope[50] = "Slope Formula";
	char userCalcMid[50] = "Midpoint Formula";
	double distance;
	double slope;
	double midPointX, midPointY;


	printf("Program: Slope, Distance, and Midpoint Calculator\n\n");
	printf("This program will prompt you for two seperate cartesian points. First you will be prompted for X and then Y.\n\n");
	printf("*------------------------------------------*\n");
	printf("\* A Cartesian Point is expressed as (X, Y) \*\n");
	printf("*------------------------------------------*\n\n");
	do {
		printf("Please enter your first set of cartesian points:\n");
		printf("Enter X1: ");
		scanf("%lf", &valueX1);
		printf("Enter Y1: ");
		scanf("%lf", &valueY1);
		printf("Please enter your second set of cartesian points:\n");
		printf("Enter X2: ");
		scanf("%lf", &valueX2);
		printf("Enter Y2: ");
		scanf("%lf", &valueY2);

		printf("\nChoose a calculation!\n");
		printf("1 - Distance Formula     2 - Slope Formula     3 - Midpoint Formula\n");
		printf("Enter your choice: ");
		scanf("%d", &userCalcChoice);

		while ((userCalcChoice <= 0) || (userCalcChoice > 3)) {
			printf("Invalid calculation choice! Enter value (1 - 3): ");
			scanf("%d", &userCalcChoice);
		} while (userCalcChoice == 1) {
			printf("\nYou chose the %s\n", userCalcDist);
			distance = sqrt(pow((valueX2 - valueX1), 2) + pow((valueY2 - valueY1), 2));
			printf("You entered (%.2lf, %.2lf) and (%.2lf, %.2lf). You then chose the %s.\n\n", valueX1, valueY1, valueX2, valueY2, userCalcDist);
			printf("The final solution is: %.2lf\n", distance);
			break;
		} while (userCalcChoice == 2) {
			printf("\nYou chose the %s\n", userCalcSlope);
			slope = (valueY2 - valueY1) / (valueX2 - valueX1);
			printf("You entered (%.2lf, %.2lf) and (%.2lf, %.2lf). You then chose the %s.\n\n", valueX1, valueY1, valueX2, valueY2, userCalcSlope);
			printf("The final solution is: %.2lf\n", slope);
			break;
		} while (userCalcChoice == 3) {
			printf("\nYou chose the %s\n", userCalcMid);
			midPointX = ((valueX1 + valueX2) / 2);
			midPointY = ((valueY1 + valueY2) / 2);
			printf("You entered (%.2lf, %.2lf) and (%.2lf, %.2lf). You then chose the %s.\n\n", valueX1, valueY1, valueX2, valueY2, userCalcMid);
			printf("The final solution is: (%.2lf, %.2lf)\n", midPointX, midPointY);
			break;
		}

		// assking user if they want to restart program
		printf("\nDo you wish to restart the program? (Y / N) ");
		scanf(" %c", &userRestart);


		// checking and validating user's response is either Y or N
		while ((userRestart != 'N') && (userRestart != 'n') && (userRestart != 'Y') && (userRestart != 'y')) {
			printf("Invalid Entry. Please enter Yes or No (Y / N) ");
			scanf(" %c", &userRestart);
		}


		// if user wants to exit, break from loop an exit. else continue the loop.
		if ((userRestart == 'N') || (userRestart == 'n')) {
			printf("\nGoodbye.\n");
			break;
		}
		else {
			printf("\n------------------------------------------------------------------------------------------------------------------------\n");
			continue;
		}

	} while ((userRestart == 'Y') || (userRestart == 'y'));


	// printing end line
	printf("\n------------------------------------------------------------------------------------------------------------------------\n");


	// exit program
	return 0;
}