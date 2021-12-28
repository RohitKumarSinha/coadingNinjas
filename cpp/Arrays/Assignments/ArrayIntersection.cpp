/* You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their 
intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or 
to put it in other words, when there is a common value that exists in both the arrays/lists.
Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10
Sample Output 1 :
2 4 3
10
Sample Input 2 :
1
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
2 1 2 */

void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
   
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(input1[i] == input2[j]){
                cout << input2[j] << " ";
                input2[j] = -3333333333333333;
                break;
            }
        }
    }
    
}