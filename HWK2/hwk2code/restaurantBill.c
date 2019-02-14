/*
 * restaurantBill.c
 *
 *  Created on: Feb 14, 2019
 *      Author: alexa
 */
#include <stdio.h>

int main()
{
	float mealCost = 88.67;
	float taxPercent = 0.0675;
	float tipPercent = 0.2;

	printf("This is the cost of the meal is $%.2f\n",mealCost);
	printf("This is the tax percentage: %.4f\n", taxPercent);
	printf("This is the tip percentage: %.2f\n", tipPercent);

	float mWTax = mealCost + (mealCost*taxPercent);
	float totalBill = mWTax + (mWTax * tipPercent);
	printf("Total bill is $%.2f", totalBill);
	return 0;

}
