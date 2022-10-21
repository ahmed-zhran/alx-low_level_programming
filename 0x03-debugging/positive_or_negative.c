#include <stdio.h>
/**
   * positive_or_negative - checkes the integer positive or negative
    * @n: The integer to check
     *
      * Return: result
        */
void positive_or_negative(int n){
    if (!n)
    {
        printf("%d is zero\n", n);
    }
    else if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }
}