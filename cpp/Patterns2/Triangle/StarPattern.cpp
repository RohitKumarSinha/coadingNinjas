/* Print the following pattern
Pattern for N = 3
 ..*
.*** 
*****
The dots represent spaces. */

#include<iostream>
using namespace std;


int main(){
    
     int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
    int spaces = 1;

    while (spaces <= n-i) {
     cout << ' ';
     spaces++;
    }
    int j = 1;
      while (j <= i) {
       cout << '*';
       j++;
      }

      j = i;

      while (j >= 2){
        cout << '*';
        j--;
      }
      i++;
      cout << endl;
    }

    return 0;
}


