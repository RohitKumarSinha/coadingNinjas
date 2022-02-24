/* You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that
are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.

Sample Input 1:
1
7
2 0 0 1 3 0 0
Sample Output 1:
2 1 3 0 0 0 0 */

void pushZeroesEnd(int *input, int size)
{
    //Write your code here
  int k=0;
  while( k < size-1){    // for n-1 round to sort the array
        for(int i=0;i<size-1;i++){    // for 1 round
            if(input[i]<input[i+1]){
                int temp = input[i+1];
                input[i+1] = input[i];
                input[i] = temp;
            }
        }
      k++;
  }
}