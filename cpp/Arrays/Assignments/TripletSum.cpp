/* You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in the 
array/list which sum to X.

Sample Input 1:
1
7
1 2 3 4 5 6 7 
12
Sample Output 1:
5
Sample Input 2:
2
7
1 2 3 4 5 6 7 
19
9
2 -5 8 -6 0 5 10 11 -3
10
Sample Output 2:
0
5 */

int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int count = 0;
     for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
            for (int k = j+1; k < size; k++){
             if (input[i]+ input[j] + input[k] == x){
                count++;
              }   
           }
        }
    }
    return count;
}