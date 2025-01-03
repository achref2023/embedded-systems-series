/*
 ======================================================================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      :Achref Othmani
 Created on	 : Jan 01, 2025
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> ASSASS3_C_Program_to_Add_Two_Integers.c3 C Program to Add Two Integers using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, somme;

   printf("Enter two integers: ");
   scanf("%d %d",&num1,&num2);

   somme = num1 + num2;

   printf("Sum: %d",somme
   );

   return 0;
}