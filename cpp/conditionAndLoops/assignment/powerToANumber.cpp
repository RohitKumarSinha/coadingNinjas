#include <iostream>
using namespace std;
int main() {
    int x, n;
    cin >> x >> n;

    int i = 1;
    int total = 1;

    while (n >= i){
      total = total * x;
      i = i + 1;

    }
    cout << total;

    return 0;
}
