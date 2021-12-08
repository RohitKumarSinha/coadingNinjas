/* Given a binary number as an integer N, convert it into decimal and print.
Sample Input 1 :
1100
Sample Output 1 :
12 */

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;
    int countt = 0;
    cin >> n;

    int result = 0;
    int lastdigit;

    lastdigit = n % 10;
    if (lastdigit == 1) {
       result += 1;
       n = n / 10;
       countt++;
    }

    while (n > 0){
       lastdigit = n % 10;
       if (lastdigit == 0){
          result = result + 0;
          countt++;
          n = n / 10;
       }
       else {
          int j = 1;
          int sum = 1;
          while (j <= countt){
             sum = sum * 2;
             j++;
          }
          result += sum;
          countt++;
          n = n / 10;
       }
    }

    cout << result;

    return 0;
	
}
