/* Sample Input 1:
6
Sample Output 1:
8
Explanation of Sample Input 1:
Now the number is ‘6’ so we have to find the “6th” Fibonacci number
So by using the property of the Fibonacci series i.e 

[ 1, 1, 2, 3, 5, 8]
So the “6th” element is “8” hence we get the output. */

#include<iostream>
using namespace std;


int main(){
    
  int n;
  cin >> n;

  int i = 1, j = 1;
  int sum_fib = 1;

  for(int z = 3; z <= n; z++){

    sum_fib = i + j;  // 3
    i = j;         // 2
    j = sum_fib;  // 3
  }

  cout << sum_fib;
}
   
