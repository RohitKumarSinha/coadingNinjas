/* Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1 */

int findUnique(int *arr, int size)
{
    //Write your code here
    for(int i=0; i<size;i++){
        int j;
        for(j=0;j<size;j++){
            if(i!=j){
                if(arr[i] == arr[j]){
                    break;
               }
            }
        }
        if(j==size){
            return arr[i];
        }
    }
}