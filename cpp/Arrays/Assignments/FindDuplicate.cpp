/* Sample Input 1:
1
9
0 7 2 5 4 7 1 3 6
Sample Output 1:
7 */

int duplicateNumber(int *arr, int size)
{
  int i = 0;
    while (i < size){
    int flag = 0;
        int uniquee = arr[i];
        int j = i+1;
        while (j < size){
        if (uniquee == arr[j]){
            flag = 1;
        }
        j++;
     }
     if (flag == 1){
            return uniquee;
        }
        i++;
    }
  return 0;
}
