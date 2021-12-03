/*
Name        : A.Thrimurthy
Date        : 01-09-2021
Description : WAP to check if number is odd or even.
Input       : ./even_odd
Output      : Enter the value of 'n' : -4
              -4 is -ve even number
*/

#include<stdio.h>

int main()
{ 
    /* variables for character input from user */
    char ch;
    do 
    {
	/*variables for integer input from user */
	int i,num,mul=1,sum=-1;   
	printf("Enter the value of 'n' :"); //display to the user to enter number
	scanf("%d", &num); 	// Read input from user end and store in variable num

	/* calculation of 2^20 */
	for(i=1; i<=20; i++)   
	{
	    mul = mul * 2;  // storing the value of 2^20 in variable mul
	}
	sum = -1 * mul;  // storing the value of -2^20 in variable sum

        /* Range check -2^20 < 'N' < 2^20 */
	if(sum < num  && num < mul)  
	{
	    /* for a positive number */
	    if(num > 0)  
	    {
		/* modulus operation by 2 to check if the number is equal to zero */
	    	if(num % 2 == 0) 
    		{
		    printf("%d is +ve even number\n", num);
		}
		else
		{
		    printf("%d is +ve odd number\n", num);
		}
	    }

	    /* for negative number */
	    else if(num < 0)
	    {
		/* modulus operation by 2 to check if the number is equal to zero */
		if(num % 2 == 0)
		{
		    printf("%d is -ve even number\n", num);
		}
		else
		{
	    	    printf("%d is -ve odd number\n", num);
    		}
	    }

	    /* if user entered number is just 0 */
	    else
	    {
		printf("0 is neither odd nor even\n");
	    }
	}
	else
	{
	    printf("Number out of range\n"); 
	}

	/* continuous looping for input from the user */
	printf("Do you want to continue(y/Y)");
	scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');
    return 0;	
}
