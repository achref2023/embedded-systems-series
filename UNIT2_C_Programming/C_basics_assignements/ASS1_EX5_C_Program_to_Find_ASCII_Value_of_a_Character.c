/*
 ======================================================================================================================
 Name        : ASS5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 Author      : Achref othmani
 Created on	 : Jan 01, 2025
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX5 C Program to Find ASCII Value of a Character
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
   char ch;

   printf("Enter a character: ");
   scanf("%c",&ch);

   printf("ASCII value of %c = %d",ch,ch);

   return 0;
}