/* You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list
which sum to X.

Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7
Sample Input 2:
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10
Sample Output 2:
0
2 */

int pairSum(int *input, int size, int x)
{
	//Write your code here
    int count = 0;
     for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            if (input[i]+ input[j] == x){
                count++;
            }
        }
    }
    return count;
}