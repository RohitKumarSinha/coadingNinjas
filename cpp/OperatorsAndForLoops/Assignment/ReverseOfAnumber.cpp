/* Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
Sample Input 1 :
1234
Sample Output 1 :
4321 */

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  // zero doesn't come first after reversing the number
  while (n % 10 == 0)
  {
    n = n / 10;
  }

  while (n > 0)
  {
    int res = n % 10;
    cout << res;
    n = n / 10;
  }

  return 0;
}
