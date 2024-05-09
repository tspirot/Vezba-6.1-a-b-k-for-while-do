// Vezba-6.1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// FOR ciklus
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, a, b, k;
	printf("Unesi pocetnu vrednost brojaca:\n");
	scanf("%d", &a);
	printf("Unesi krajnju vrednost brojaca:\n");
	scanf("%d", &b);
	printf("Unesi korak brojaca:\n");
	scanf("%d", &k);
	// FOR CIKLUS
	//i=a
	for (i = a; i <= b; i += k) //i<10
	{
		printf("%d ", i);
	}//i+=2
	printf("\n");
	// WHILE PETLJA
	i = a;
	while (i <= b)
	{
		printf("%d ", i);
		i += k;
	}
	printf("\n");
	// DO PETLJA
	i = a;
	do
	{
		printf("%d ", i);
		i += k;
	} while (i <= b);

}
