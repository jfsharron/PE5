//  ===========================================================================
//  Program:              ProjectEuler5
//
//  File:                 source.c
//
//  Software Engineer:    Jonas Sharron
//
//  Date:                 24-August-2019
//
//	Purpose: 			  2520 is the smallest number that can be divided by 
//                        each of the numbers from 1 to 10 without any remainder.
//
//                        What is the smallest positive number that is evenly
//					      dividable by all the numbers from 1 to 20?
//
//  Parameters:           no parameters passed, input given by user during 
//                        execution
//
//  Returns:              Returns 0 for successful execution, answer output to
//						  screen.
//  ===========================================================================

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 

//  ===========================================================================
int main() {

	int upperLimit = 0;		//  highest dividend (provided by user)
	int flag = 0;			//  control flag for do loop 1
	int flag2 = 0;			//  control flag for do loop 2
	int dividend = 0;		//	value to divide by
	int answer;				//  value starting at upperLimit and incremented
							//  until all dividends mod 0

	printf("Please enter the upper limit value: ");
	scanf("%d", &upperLimit);

	answer = upperLimit;

	//  do loop 2 to repeat do loop 1 after incrementing answer variable 
	//  (divisor)
	do
	{
		flag = 0;
		dividend = 1;
		//  do loop 1 to check values 1-upperLimit to see if upperLimit dividable
		//  with no remainder
		do
		{
			if (answer % dividend == 0)
			{
				dividend++;
			}
			else
			{
				flag = 1;
				answer++;
			}

			if (dividend == upperLimit)
			{
				flag2 = 1;
			}

		} while ((dividend <= answer) && (flag == 0));
		//  end do loop 1

	} while (flag2 == 0);

	//  subtract one from answer to account for extra increment in above else
	//  statement
	answer = answer--;

	printf("The smallest multiple is: %d\n", answer);

}  //  end main
//  ===========================================================================

