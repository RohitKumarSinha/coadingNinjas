/* Given is the code to print numbers from 1 to n in increasing order recursively.
But it contains few bugs that you need to rectify such that all the test cases pass.

Sample Input 1 :
 6
Sample Output 1 :
1 2 3 4 5 6 */
#include <iostream>
using namespace std;
void print(int n)
{
    if (n <= 0)
    {
        return;
    }

    print(n - 1);
    // when the base case returns then we print the n in ascending order from 1
    cout << n << " ";
}
