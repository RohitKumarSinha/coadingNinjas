/* You have been given a random integer array/list(ARR) of size N, and an integer X. 
You need to search for the integer X in the given array/list using 'Linear Search'.
You have been required to return the index at which X is present in the array/list. 
If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of 
X would be encountered. In case X is not present in the array/list, then return -1.
Sample Input 1:
1
7
2 13 4 1 3 6 28
3
Sample Output 1:
4 */

int linearSearch(int *arr, int n, int x)
{
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

/* without function from starting
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int output[n];
  int k = 0;

  int num = 1;
  while (n >= num){
    int input;
    cin >> input;
    int arr[input];
    for(int i = 0; i < input; i++){
       cin >> arr[i];
    }
     int result;
    cin >> result;

    int flag = 0;
    for (int j = 0; j < input; j++){
       if (arr[j] == result){
           output[k] = j;
           k++;
           flag = 1;
       }
    }
    if (flag == 0){
       output[k] = -1;
       k++;
    }

    num++;

  }

  for (int z = 0; z < n; z++){
       cout << output[z] << endl;
    }
  return 0;
} */
