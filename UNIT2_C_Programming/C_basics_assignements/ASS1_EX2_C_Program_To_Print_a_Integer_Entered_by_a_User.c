/*
 ======================================================================================================================
 Name        : ASS2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 Author      : Achref othmani
 Created on	 : JAN 01, 2025
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX2 C Program To Print a Integer Entered by a User using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("Enter a  integer: ");   
	scanf("%d",&num);
	printf("You entered: %d",num);

	return 0;
}