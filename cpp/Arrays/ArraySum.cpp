/* Given an array of length N, you need to find and print the sum of all elements of the array.
Sample Input :
3
9 8 9
Sample Output :
26  */

#include <iostream>
using namespace std;
int main() {
  int n;
  int sum = 0;
  cin >> n;

  int arr[n];

  for(int i = 0; i < n; i++){
     cin >> arr[i];
  }

  for(int i = 0; i < n; i++){
      sum += arr[i];
  }

  cout << sum;
  return 0;
}
