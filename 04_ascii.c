/*

Name           : A.Thrimurthy

Date             : 03-09-2021

Description  : WAP to Print all ascii characters.

Input            : ./ascii

Output         : Dec       Oct         Hex        Ascii

                       ---         ---          ---         -----

                        0          000         00       Non Printable

                        1          001         01       Non Printable

*/



#include<stdio.h>



int main()

{

    int i; // variable declaration

    char ch; //variable declaration

    printf("Dec\t Oct\t Hex\t Ascii\t\n");

    printf("---\t ---\t ---\t ----\t\n");

    //for loop to iterate decimal less than 127

    for(i = 0; i < 127; i++)

    {

	//To print "Non-printable" for i < 32 and i = 127

	if(i >= 0 && i < 32 || i == 127)

	{

	    printf("%d\t %.3o\t %.2X\t Not Printable \t\n", i,i,i);

	}

	// else part to print Decimal Octal Hexadecimal and printable charcters 

	else

	{

	    printf("%d\t %.3o\t %.2X\t %c\t\n", i,i,i,i);

	}

    }

}
