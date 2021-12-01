/* Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321 */

#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
    int j = 1;
    int print = i;
    while (j <= i){
     cout << print;
     j = j + 1;
     print--;
    }
    cout << endl;
    i = i + 1;
    }

    return 0;

}


