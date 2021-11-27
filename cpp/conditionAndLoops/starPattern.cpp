#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    float i = 1;
    while (i <= n) {
    int z = i;
      while (z < n){
        cout << ' ';
        z = z + 1;
      }
    cout << '*';
     int j = 2;
     while (i >= j){
      cout << "**";
      j = j + 1;
     }
      i = i + 1;
      cout << endl;
    }
}
