#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int numb, last;
    int sum_even = 0, sum_odd = 0;

    while (n > 0) {
    last = n % 10;
    if (last % 2 == 0) {
    sum_even = sum_even + last;
    }
    else {
    sum_odd = sum_odd + last;
    }
    n = n / 10;
    }

    cout << sum_even << ' ' << sum_odd;
    return 0;
}
