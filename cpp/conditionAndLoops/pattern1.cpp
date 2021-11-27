#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i = 1;
    while (i <= n){
     int j = 1;
     int value = i;
     while (j <= i){
        cout << value;
        value = value + 1;
        j = j + 1;
     }
     i = i + 1;
     cout << endl;
    }

    return 0;

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


