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
int main()
{
    int n;
    cin >> n;

    int count = 1;
    while (count <= n)
    {
        // checking whether if res if divide by 4 then increment the n value
        int res = (3 * count) + 2;
        if (res % 4 == 0)
        {
            n++;
        }
        // if not print the res value
        else
        {
            cout << res << " ";
        }
        count++;
    }
}
