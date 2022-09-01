#include <algorithm>
void rotate(int *input, int d, int n)
{
  // Write your code here
  reverse(input, input + n);
  int i = 0;
  int j = (n - d) - 1;
  for (i = 0; i < j; i++, j--)
  {
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
  }
  j = n - d;
  int last = n - 1;
  for (j; j < last; j++, last--)
  {
    int temp = input[j];
    input[j] = input[last];
    input[last] = temp;
  }
}