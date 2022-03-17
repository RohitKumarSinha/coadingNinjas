/* Given a binary number as an integer N, convert it into decimal and print.
Sample Input 1 :
1100
Sample Output 1 :
12 */

#include <iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;

   int mul = 1;
   int res = 0;
   // if the end of number is one then add the value other wise don't add
   if (n % 10 == 1)
   {
      res++;
      n = n / 10;
   }
   else
   {
      n = n / 10;
   }

   while (n > 0)
   {
      // every time increase the power of 2 by 1
      mul = mul * 2;
      // if we have 1 at the end then add that value into result
      if (n % 10 == 1)
      {
         res = res + mul;
      }
      // every time short the number
      n = n / 10;
   }

   cout << res;
   return 0;
}
