/* Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28 */

void insertionSort(int *input, int size)
{
    //Write your code here
     for(int i=1;i<size;i++){
        int current=input[i];
        int j;
        for( j = i-1; j >= 0;j--){
            if(current < input[j]){
                input[j+1]=input[j];    // shifting by 1 position
            }
            else{
                break;
            }
        }
        input[j+1]=current;
    }
}