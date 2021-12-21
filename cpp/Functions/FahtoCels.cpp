/* Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), 
you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and 
print the table.
Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37  */

#include<iostream>
using namespace std;

void printTable(int start, int end, int step) {

    int cel;

     if ((0 <= start <= 1000) && (0 <= end <=  1000) && (0 <= step <= 1000))
      {
      while (start <= end){
        cout << start;
       cel = ((start - 32) * 5) / 9;
       cout << "\t" << cel << endl;
       start = start + step;
      }
    }
    
}

int main(){
    
    int S, E, W;
    cin >> S >> E >> W;
    printTable(S, E, W);

    return 0;

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}



