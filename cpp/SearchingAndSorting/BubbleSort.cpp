/* Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.
Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28 */

void bubbleSort(int *input, int size)
{
    //Write your code here
     int k=0;
  while( k < size-1){    // for n-1 round to sort the array
        for(int i=0;i<size-1;i++){    // for 1 round
            if(input[i]>input[i+1]){
                int temp = input[i];
                input[i] = input[i+1];
                input[i+1] = temp;
            }
        }
      k++;
  }
}