/* Print the following pattern for the given number of rows.
Note: N is always odd.

Sample Input 1:
3
Sample Output 1:
  *
 ***
  *    */

#include <iostream>
using namespace std;
int main()
{

   int n;
   cin >> n;
   int n1 = (n + 1) / 2;
   int n2 = n / 2;

   for (int i=1; i <= n1; i++){
      int spaces = 1;
      while (n1 - i >= spaces){
         cout << ' ';
         spaces++;
      }
      int j = 1;
      while(2* i - 1 >= j){
         cout << '*';
         j++;
      }
    cout << endl;
   }

   for (int a = n2; a >= 1; a--){
      int spaces = 1;
      while (n2 - a + 1 >= spaces){
         cout << ' ';
         spaces++;
      }

      int j = 1;
      while (2*a - 1 >= j){
        cout << '*';
        j++;
      }
      cout << endl;
   }
    return 0;
}
