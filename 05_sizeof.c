/*

Name           : A.Thrimurthy

Date             : 02-09-2021

Description  : To Print sizes of all basic data types of C

Input            : ./sizeof

Output         :  Size of int                   : 4 bytes

                       Size of char                 : 1 byte

                       Size of float                 : 4 bytes

                       Size of double             : 8 bytes

                       Size of unsigned int    : 4 bytes

                       Size of long int            : 8 bytes

*/



#include<stdio.h>

int main()

{

    /* variable declaration */

    int num1;

    char num2;

    float num3;

    double num4;

    unsigned int num5; 

    long int num6;

    unsigned char num7;

    long double num8;

    signed int num9;

    short int  num10;



      /* sizeof evaluates the size of a variable */

    printf("Size of int                    : %zu bytes\n", sizeof(num1));

    printf("Size of char                 : %zu byte\n",  sizeof(num2));

    printf("Size of float                 : %zu bytes\n", sizeof(num3));

    printf("Size of double             : %zu bytes\n", sizeof(num4));

    printf("Size of unsigned int    : %zu bytes\n", sizeof(num5));

    printf("Size of long int            : %zu bytes\n", sizeof(num6));

    printf("Size of unsigned char  : %zu byte\n",  sizeof(num7));

    printf("Size of long double      : %zu bytes\n", sizeof(num8));

    printf("Size of signed int         : %zu bytes\n", sizeof(num9));

    printf("Size of short int            : %zu bytes\n", sizeof(num10));

    return 0;

}
