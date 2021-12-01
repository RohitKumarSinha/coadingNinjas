/* Print the following pattern for the given number of rows.
Pattern for N = 5
....1
...232
..34543
.4567654
567898765
The dots represent spaces. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
    int spaces = 1;
    while (spaces <= n-i){
      cout << ' ';
      spaces++;
    }
    int j = 1;
    int p = i;
    while (j <= i){
     cout << p;
     p = p + 1;
     j = j + 1;
    }

    while (p - 2 >= i){
      cout << p - 2;
      p--;
    }
    cout << endl;
    i = i + 1;
    }

    return 0;
}
