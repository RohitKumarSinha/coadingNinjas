/* You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, 
merge them into a third array/list such that the third array is also sorted.
Sample Input 1 :
1
5
1 3 4 7 11
4
2 4 6 13
Sample Output 1 :
1 2 3 4 4 6 7 11 13 */

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here  
    int i = 0, j = 0, k = 0; 
  
    // Traverse both array 
    while (i<size1 && j <size2) 
    { 
         
            if(arr1[i] < arr2[j]) {
                ans[k] = arr1[i];
                k++;
                i++;
            }
    
            else{
                ans[k] = arr2[j];
                k++;
                j++;
            } 
    
    }
        while (i < size1){
            ans[k] = arr1[i];
            k++;
            i++;
        }
    
        while (j < size2){
            ans[k] = arr2[j];
            k++;
            j++;
        }
}
