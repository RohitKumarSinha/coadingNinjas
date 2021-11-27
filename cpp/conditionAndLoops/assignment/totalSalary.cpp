#include <iostream>
#include <cmath>
using namespace std;
int main() {
     int bs;
     cin >> bs;
     char allow;
     cin >> allow;
     double hra, da, pf;
     int gs;

     if (allow == 'A'){
     hra =  (double)bs / 100 * 20;
      da = (double)bs / 100 * 50;
      pf = (double)bs / 100 * 11;
       gs = round(bs + hra + da + 1700 - pf);
       cout << gs;
     }
     else if (allow == 'B'){
     hra =  (double)bs / 100 * 20;
      da = (double)bs / 100 * 50;
      pf = (double)bs / 100 * 11;
     gs = round(bs + hra + da - pf + 1500);
       cout << gs;
     }

     else {
     hra =  (double)bs / 100 * 20;
      da = (double)bs / 100 * 50;
      pf = (double)bs / 100 * 11;
       gs = round(bs + hra + da + 1300 - pf);
       cout << gs;
     }

    return 0;
}
