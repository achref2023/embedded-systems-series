/*
 ======================================================================================================================
 Name        : ASS7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 Author      : Achref Othmani
 Created on	 : Jan 01, 2025
 Description : Unit 2 C-Progtamming >> Assignment 1 C-Basic >> EX7 Swap Two Numbers Without Temp Variable
 	 	 	   using Ansi-style (c99)
 ======================================================================================================================
 */

#include <stdio.h>

int main()
{
    int x = 50, y = 9;

    // Code to swap 'x' and 'y' using XOR
    x = x ^ y; // Step 1: x becomes 59 (binary XOR of 50 and 9)
    y = x ^ y; // Step 2: y becomes 50 (binary XOR of 59 and 9)
    x = x ^ y; // Step 3: x becomes 9 (binary XOR of 59 and 50)

    printf("After Swapping: x = %d, y = %d", x, y);

    return 0;
}



// Code to swap 'x' and 'y' using XOR
    // Explanation:
    // - XOR (^) is a bitwise operator that returns 1 if the corresponding bits of two operands are different, and 0 if they are the same.
    // - Step 1: x = x ^ y; // This stores the XOR of x and y in x, effectively encoding both values in x.
    // - Step 2: y = x ^ y; // This decodes the original value of x and stores it in y.
    // - Step 3: x = x ^ y; // This decodes the original value of y and stores it in x.
    // The result is that x and y have been swapped without using a temporary variable.
