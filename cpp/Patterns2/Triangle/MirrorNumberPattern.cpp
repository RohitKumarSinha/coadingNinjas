/* Print the following pattern for the given N number of rows.
Pattern for N = 4

. . .1
. . 1 2 
. 1 2 3
1 2 3 4 

The dots represent spaces. */

#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
    int spaces = 1;
    while (spaces <= (n - i)){
      cout << ' ';
      spaces++;
    }
    int j = 1;
    while (j <= i){
     cout << j;
     j = j + 1;
    }
    cout << endl;
    i = i + 1;
    }

    return 0;
  
}


