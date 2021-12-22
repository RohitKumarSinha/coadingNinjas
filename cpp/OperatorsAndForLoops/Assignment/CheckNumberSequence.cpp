/* You are given S, a sequence of n integers i.e. S = s1, s2, ..., sn. Compute if it is possible to split S into two parts : 
s1, s2, ..., si and si+1, si+2, ….., sn (0 <= i <= n) in such a way that the first part is strictly decreasing 
while the second is strictly increasing one.

Sample Input 1 :
5
9
8
4
5
6
Sample Output 1 :
true
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int current_term;
    cin>>current_term;
    bool isDecreasing = true,is_valid_sequence_yet=true;
    int i=2;// first term of sequence has already been taken
    while(i<=n){
        int next_term;
        cin>>next_term;
        if(is_valid_sequence_yet && isDecreasing && current_term>next_term){
            current_term=next_term;
            isDecreasing=true;
        }else if(is_valid_sequence_yet && current_term < next_term){
            current_term=next_term;
            isDecreasing = false;
        }else{
            is_valid_sequence_yet=false;
        }
        i++;
    }
    if(is_valid_sequence_yet){
        cout << "true" << endl;
    }else{
        cout << "false" <<endl;
    }
}
