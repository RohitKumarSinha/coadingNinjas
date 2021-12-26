/* Take input a stream of n integer elements, find the second largest element present.
Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3  */

 #include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int max = INT_MIN, secondMax = INT_MIN;
    int num;
    int count = 1;
    while(count <= n) {
        cin >> num;
        if(num > max) {
            secondMax = max;
            max = num;
        }
        else if(num > secondMax && num != max) {
            secondMax = num;
        }
        count++;
    }
    cout << secondMax << endl;
}
