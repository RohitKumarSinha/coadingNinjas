/* Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.
Sample Input 1 :
10
Sample Output 1 :
3 */

#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    int root = 1;
    int result = 1;

    while (n >= result){

      root++;
      result = root * root;
    }

    root--;

    cout << root;
    return 0;
}
