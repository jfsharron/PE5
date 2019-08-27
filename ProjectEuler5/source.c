//  ===========================================================================
//  Program:              ProjectEuler5
//
//  File:                 source.c
//
//  Software Engineer:    Jonas Sharron
//
//  Class:				  x
//
//  Date:                 24-August-2019
//
//  Purpose:              The purpose of this program is to solve Project Euler
//						  problem 5: 
//
//						  2520 is the smallest number that can be divided by 
//                        each of the numbers from 1 to 10 without any remainder.
//
//                        What is the smallest positive number that is evenly
//					      dividable by all the numbers from 1 to 20?
//
//                        https://projecteuler.net/problem=5
//
//  Parameters:           x
//
//  Returns:              x
//  ===========================================================================

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 


//  ===========================================================================
int main() {

	int upperLimit = 0;
	int flag = 0;
	int i = 1;

	printf("Please enter the upper limit value: ");
	scanf("%d", &upperLimit);
	printf("\nVerify upperLimit: %d\n", upperLimit);  //  TODO remove
	int answer = upperLimit;


	//  do loop 1 to check values 1-upperLimit to see if upperLimit dividable
	//  with no remainder
	do
	{
		if (upperLimit % i == 0)
		{
			flag = 0;
			i++;
			printf("flag = %d\n", flag);
			printf("i = %d\n", i);		
		}
		else
		{
			flag = 1;
			i++;
			printf("flag = %d\n", flag);
			printf("i = %d\n", i);
		}
	} while ((i <= upperLimit) && (flag == 0));
	//  end do loop 1















}  //  end main
//  ===========================================================================

