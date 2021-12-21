/* Given a number N, figure out if it is a member of fibonacci series or not. 
Return true if the number is member of fibonacci series else false.

Sample Input 1 :
5
Sample Output 1 :
true */


#include<iostream>
using namespace std;

bool checkMember(int n){

    int i = 1;
    int j = 1;
    int fib_sum = i + j;

    while (fib_sum <= n){
       if (fib_sum == n){
          return true;
       }

       i = j;
       j = fib_sum;
       fib_sum = i + j;

    }

    return false;

}

int main() {
    int n;
    cin >> n;
    bool result;

    result = checkMember(n);
    if (result){
      cout << "true";
    }  else {
       cout << "false";
    }

}




