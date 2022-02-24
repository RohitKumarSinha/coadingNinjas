#include<iostream>
using namespace std;


int main(){
    
     int S, E, W;
    int cel;
    cin >> S >> E >> W;
      if ((0 <= S <= 80) && (S <= E <=  900) && (0 <= W <= 40))
      {
      while (S <= E){
        cout << S;
       cel = ((S - 32) * 5) / 9;
       cout << "\t" << cel << endl;
       S = S + W;
      }
    }

    return 0;

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}


