/* Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC */

 #include<iostream>
using namespace std;


int main(){
    
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
    int j = 1;
    char print = 'A' + i - 1;
    while (j <= i){
     cout << print;
     j = j + 1;
    }
    cout << endl;
    i = i + 1;
    }

    return 0;
}

