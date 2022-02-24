/* You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by 
D elements(towards the left).

Sample Input 1:
1
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2 */

void rotate(int *input, int d, int n)
{
    //Write your code here
    
    int arr[d];
    for(int i = 0; i < d; i++){
        arr[i] = input[i];
    }
    
    int j;
    for(j = 0; j < n-d; j++){
        input[j] = input[j + d];
    }
    int k = 0;
    for(j; j < n; j++){
        input[j] = arr[k];
        k++;
    }
    
    
}
