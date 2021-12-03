/*
Name        : A.Thrimurthy
Date        : 03-09-2021
Description : WAP to generate fibbonacci numbers <= 'n'
Input       : Enter a number: 8
Output      : 0, 1, 1, 2, 3, 5, 8
              Do you want to continue (y/Y) : y
*/

#include<stdio.h>

int main()
{
    /* variables of ingeter from the user */
    int i,smallest, largest=1;
    /* variable of character from user */
    char ch;
    /*calculation of 2^20 */
    for(i = 0; i < 20; i++)
    {
	largest = largest * 2; /*storing the value of 2^20 in variable largest */
    }
    smallest = -1 * largest; /*storing the value of -2^20 in variable smallest */
    do
    {
	int previous_term = 0, current_term = 1, next_term = 0, num;
       	printf("Enter a number: ");
       	scanf("%d", &num);
	/* checking for -2^20 < 'N' < 2^20 */
	if(smallest < num && num < largest)
	{
	    /* For positive series */
	    if(num > 0)
	    {
		printf("%d %d ", previous_term, current_term);
	     	while(next_term <= num)
	       	{
	    	    next_term = previous_term + current_term;
	    	    if(next_term <= num)
	    	    {
	    		printf("%d ", next_term);
	    	    }
	    	    previous_term = current_term;
	            current_term = next_term;
	    	}
    	    }
	    /* For negative series */
    	    else if(num < 0)
	    {
		printf("%d %d ", previous_term, current_term);
    		while(next_term >= num)
    		{
    		    next_term = previous_term - current_term;
    		    if(next_term > 0)
    		    {
    			next_term = -next_term;
    			if(next_term >= num)
    			{
    			    next_term = -next_term;
    			    printf("%d ", next_term);
    			}
    		    }
    		    else
    		    {
    			if(next_term >= num)
    			{
    			    printf("%d ", next_term);
    			}
    		    }
    		    previous_term = current_term;
    		    current_term = next_term;
    		}
    	    }
    	    else
    	    {
    		printf("0"); /*printing 0 if user enters */
    	    }
	}
     	else
	{
	    printf("Error : Number out of range, please enter the value -2^20 < 'N' < 2^20");
	}
	/* continuous looping for input from the user */
	printf("\nDo you want to continue(y/Y)");  
	scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');
    return 0;
}
    
