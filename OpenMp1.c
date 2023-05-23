#include<stdio.h>
#include<omp.h>
int Mul(int , int );
int Adder(int, int);

void main(void) {
	int a, b;

#pragma omp parallel   //compiler to run code on different threads
	                   //fist enable open mp support

	printf("Hello \n"); // For this machine 8 possible threads
	printf("Enter the value of a: ");
	scanf_s("%d", &a);
	printf("Enter the value of b: ");
	scanf_s("%d", &b);


	int sum = Adder(a, b);
	printf("Sum of a and b is %d\n",sum);

	int prod = Mul(a, b);
	printf("Product of a and b is %d\n", prod);



}
int Mul(int a, int b) {

	return a * b;


}

int Adder(int a, int b) {

	return a + b;


}



