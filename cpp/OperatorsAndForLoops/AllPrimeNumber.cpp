/*  Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Sample Input 1:
9
Sample Output 1:
2
3
5
7  */

#include <iostream>
using namespace std;
int main()
{

 int n;
 cin >> n;

 if (n >= 2){
     cout << 2 << endl;
    }

 int i = 3;
    while (i <= n){
      int d = 2;
      bool isPrime = true;
      while (i > d){
         if (i % d == 0){
            isPrime = false;
         }
         d++;
      }

      if (isPrime){
      cout << i << endl;
      }
      i++;
    }

    return 0;
}
