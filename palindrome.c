#include <stdio.h>

int main()
{
      int num, original, reversed = 0, remainder;

      printf("Enter the number to check if it's a palindrome:\n");
      scanf("%d", &num);

      original = num;

      // Reverse the number
      while (num > 0)
      {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num = num / 10;
      }

      // Check palindrome
      if (original == reversed)
            printf("The number is a palindrome.\n");
      else
            printf("The number is not a palindrome.\n");

      return 0;
}
