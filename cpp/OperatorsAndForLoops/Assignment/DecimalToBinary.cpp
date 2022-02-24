/* Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Sample Input 1 :
12
Sample Output 1 :
1100
 */

// C++ program to convert a decimal
// number to binary number

#include <iostream>
using namespace std;

// function to convert decimal to binary
void decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	// printing binary array in reverse order
	for (int j = i - 1; j >= 0; j--)
		cout << binaryNum[j];
}

// Driver program to test above function
int main()
{
	int n;
    cin >> n;
    if (n  <= 12){
        int remainder; 
        long long int binary = 0;
        int i = 1;
        while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
        
        cout << binary;
        
  }
    
    else {
         decToBinary(n);
    }
	return 0;
}
