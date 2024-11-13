/******************
Name: Ori rosemarin
ID: 218233088
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num, pos;
  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Please enter a position: \n");
  scanf("%d", &pos);
  int bit = (num >> pos) & 1;
  printf("The bit in position %d of number %d is: %d\n", pos, num, bit);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Please enter a position: \n");
  scanf("%d", &pos);
  int mask = 1 << pos;
  printf("Number with bit %d set to 1: %d\n", pos, mask | num);
  printf("Number with bit %d set to 0: %d\n", pos, (~mask) & num);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Please enter a position: \n");
  scanf("%d", &pos);
  mask = 1 << pos;
  printf("Number with bit %d toggled: %d\n", pos, mask ^ num);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number: \n");
  scanf("%d", &num);
  int change = num | 1;
  printf("%d", change ^ num);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int firstNum, secondNum;
  printf("Please enter the first number (octal): \n");
  scanf("%o", &firstNum);
  printf("Please enter the second number (octal): \n");
  scanf("%o", &secondNum);
  num = firstNum + secondNum;
  printf("The sum in hexadecimal: %X\n", num);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", 
        (num >> 3) & 1, (num >> 5) & 1, (num >> 7) & 1, (num >> 11) & 1);

  printf("Bye!\n");
  
  return 0;
}

