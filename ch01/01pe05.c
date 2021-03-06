/* 01pe05.c */
/* ===================================80 chars=============================== */

/*
Relationship between Celsius and Fahrenheit is governed by the formula:
9C
F = ---- + 32
5

Write a program to convert the temperature:
(a) from Celsius to Fahrenheit, and
(b) from Fahrenheit to Celsius.
*/

/*
Compiled & tested with:
gcc -std=c89 -pedantic -Wall -Werror $filename.c -o binary/$filename
*/

#include <stdio.h>

#define CVAL 25.0
#define FVAL 94.0

int main( void )
{
	float c, f;

	/* 25 C = ? F */
	f = ( 9 * CVAL / 5 ) + 32;
	printf( "%f Celsius = %f Fahrenheit\n", CVAL, f );

	/* 94 F = ? C */
	c = ( FVAL - 32 ) * 5 / 9;
	printf( "%f Fahrenheit = %f Celsius\n", FVAL, c );

	return 0;
}

/* ===================================80 chars=============================== */

/* EOF */

