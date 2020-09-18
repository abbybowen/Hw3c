// Author: Abigail Bowen aeb6095@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <math.h>
#include <stdlib.h>

  int digit_sum(int n) {
    if (n <= 1) {
      return n;
    }
    else {
      return (n % 10) + digit_sum(n/10);
    }
  }

int main(void) {
  int n = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n",n, digit_sum(n));
}