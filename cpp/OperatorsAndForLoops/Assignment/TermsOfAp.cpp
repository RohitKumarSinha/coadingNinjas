/* Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Input format :
Integer x
Output format :
Terms of series (separated by space)
Constraints :
1 <= x <= 1,000
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41 */

#include <iostream>
using namespace std;
int main() {
    int n;
    int res = 0;
    cin >> n;

    int i = 1;
    int j = 1;
    while (i <= n){
    if (n <= 1 || n >= 1000){
       break;
    }
        res = 3 * j + 2;
        if (res % 4 != 0){
            cout << res << ' ';
            i++;
        }
        j++;
    }

    return 0;
}
