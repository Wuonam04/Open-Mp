#include <stdio.h>
#pragma once
class Functions
{
	//declare a function type, name and return type

	int Mul(int a, int b) {
		printf("Enter the value of a: ");
		scanf_s("%d", &a);
		printf("Enter the value of b: ");
		scanf_s("%d", &b);

		return a * b;

		
	}

	int Adder(int a, int b) {
		printf("Enter the value of a: ");
		scanf_s("%d", &a);
		printf("Enter the value of b: ");
		scanf_s("%d", &b);

		return a + b;


	}


}
