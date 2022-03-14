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
    // copying the starting d element in new array
    int arr[d];
    for (int i = 0; i < d; i++)
    {
        arr[i] = input[i];
    }
    // shifting the index of input array
    int j = 0;
    for (int i = d; i < n; i++)
    {
        input[j] = input[i];
        j++;
    }
    // pasting the new array value to the last of the input array
    int k = 0;
    while (j < n)
    {
        input[j] = arr[k];
        k++;
        j++;
    }
}
