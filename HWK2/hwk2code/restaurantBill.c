/*
 * restaurantBill.c
 *
 *  Created on: Feb 14, 2019
 *      Author: alexa
 */
#include <stdio.h>

int main()
{
	//Restaurant Bill
	float mealCost = 88.67;
	float taxPercent = 0.0675;
	float tipPercent = 0.2;

	printf("This is the cost of the meal is $%.2f\n",mealCost);
	printf("This is the tax percentage: %.4f\n", taxPercent);
	printf("This is the tip percentage: %.2f\n", tipPercent);

	float mWTax = mealCost + (mealCost*taxPercent);
	float totalBill = mWTax + (mWTax * tipPercent);
	printf("Total bill is $%.2f", totalBill);

	//Ocean Levels
	float rate = 1.5;
	float five = rate*5.0;
	float seven = rate * 7.0;
	float ten = rate * 10.0;

	printf("Number of millimeters higher that the current ocean's level will be in 5 years: %.1f\n", five);
	printf("Number of millimeters higher that the current ocean's level will be in 5 years: %.1f\n", seven);
	printf("Number of millimeters higher that the current ocean's level will be in 5 years: %.1f\n", ten);

	//

		return 0;

	return 0;

}
