/* You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
You don't need to print or return anything, just change in the input array itself.
Sample Input 1:
1
6
9 3 6 12 4 32
Sample Output 1 :
3 9 12 6 32 4 */

void swapAlternate(int *arr, int size)
{
    // Write your code here
    int i = 0, j = 1;
    while (j < size)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j = j + 2;
        i = j - 1;
    }
}