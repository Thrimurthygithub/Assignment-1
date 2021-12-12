/*

Name          : A.Thrimurthy

Date            : 02-09-2021

Description : WAP to check whether a given number is perfect or not

Input           : Enter a number: 6

Output        : Yes, entered number is perfect number

                      Do you want to continue (y/Y) : y

*/



#include<stdio.h>

int main()

{

    char ch; //variable declaration

    /* continuous looping to read the input from the user */

    do

    {

	int num,i,j,sum=0,largest=1;  //variable declaration

	printf("Enter a number: ");   

	scanf("%d", &num);

	/*calculation of 2^20 */

	for(i=0; i<20; i++)

	{

	    largest = largest * 2;

	}

	/* for positive numbers only */

	if(num > 0)

	{

	    if(num <= largest)

	    {

		for(i=1; i<num; i++)

		{

		    if(num % i == 0)

		    {

			sum = sum + i;

		    }

		}

		/* checking whether given number is equal to the sum */

		if(num == sum)

		{

		    printf("Yes, entered number is perfect number\n");

		}

		else

		{

		    printf("No,entered number is not perfect number\n");

		}

	    }

    	    else

	    {

		printf("Number out of range\n");

	    }

	}

	else

	{

	    printf("Error:Invalid input,Enter only positive number\n");

	}

	/* continuous looping for input from user */

	printf("Do you want to continue(y/Y)");

	scanf(" %c", &ch);

    }while( ch == 'y' || ch == 'Y');

    return 0;

}
