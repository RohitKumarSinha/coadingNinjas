/* Given the code to find out and return the number of digits present in a number recursively.
But it contains few bugs, that you need to rectify such that all the test cases should pass.

Sample Input 1 :
156
Sample Output 1 :
3 */

int small = 0;
int count(int n)
{
  if (n <= 0)
  {
    return 0;
  }

  // everytime decrease the number by digit 1 and increment the value in res when function call everytime
  int res = 1 + count(n / 10);
}