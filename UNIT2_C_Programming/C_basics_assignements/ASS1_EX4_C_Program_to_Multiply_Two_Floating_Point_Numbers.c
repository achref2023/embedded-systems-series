/*
 ======================================================================================================================
 Name        : ASS4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 Author      : Achref Othmani 
 Created on	 : JAN 01, 2025
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> ASS4 C Program to Multiply two Floating Point
 	 	 	   Numbers using Ansi-style (c99)
 ======================================================================================================================
 */
#include <stdio.h>

int main( )
{
   float num1, num2,multiplication_result;

   printf("Enter two numbers: ");
   scanf("%f %f",&num1,&num2);

   multiplication_result = num1 * num2;

   printf("multiplication_result: %f",multiplication_result);

   return 0;
}