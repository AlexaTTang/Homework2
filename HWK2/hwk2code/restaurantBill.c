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
	printf("Retaurant Bill");
	float mealCost = 88.67;
	float taxPercent = 0.0675;
	float tipPercent = 0.2;

	printf("This is the cost of the meal is $%.2f\n",mealCost);
	printf("This is the tax percentage: %.4f\n", taxPercent);
	printf("This is the tip percentage: %.2f\n", tipPercent);

	float mWTax = mealCost + (mealCost*taxPercent);
	float totalBill = mWTax + (mWTax * tipPercent);
	printf("Total bill is $%.2f", totalBill);
	printf("\n");

	//Ocean Levels
	printf("Ocean Levels");
	float rate = 1.5;
	float five = rate*5.0;
	float seven = rate * 7.0;
	float ten = rate * 10.0;

	printf("Number of millimeters higher that the current ocean's level will be in 5 years: %.1f\n", five);
	printf("Number of millimeters higher that the current ocean's level will be in 5 years: %.1f\n", seven);
	printf("Number of millimeters higher that the current ocean's level will be in 5 years: %.1f\n", ten);
	printf("\n");

	//Stock Transaction
	printf("Stock Trading Program Bill");
	float shares = 1000.0;
	float shareCost = 45.50;
	float commision = 0.02;
	float shareSale = 56.90;
	float stockC = (shares*shareCost);
	float stockCommision = stockC*commision;
	float stockCostTotal = (shares*shareCost) + (shares*shareCost)*commision;
	float stockSoldTotal = (shares*shareSale) + (shares*shareSale)*commision;
	float stockProfit = stockSoldTotal - stockCostTotal;
	printf("The Joe paid for the stock: $%.2f\n", stockC);
	printf("The amount of commision Joe paid for the stocks: $%.2f", stockCommision);
	printf("The total amount Joe recieved for the stock: $%.2f\n", stockSoldTotal);
	printf("The profit Joe made: $%.2f", stockProfit);
	printf("\n");

	//Triangle
	printf("Pattern Displays");
	int rows = 10;
	int i;
	int j;
	//pattern A
	for (i = 1; i <= rows; ++i)
	{
		for(j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}

  printf("\n");

	//pattern B
	for (i = rows; i >=1; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;

}
