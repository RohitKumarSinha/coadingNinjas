/* You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this
array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words,
you will be visiting each element in the array/list just once.

Sample Input 1:
1
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 */

void sort012(int *arr, int n)
{
    // check whether the size of the array is less than one or not
    if (n <= 1)
    {
        return;
    }
    else
    {
        // making count variable to keep track of total number of zero and one in array
        int count_zero = 0;
        int count_one = 0;
        // updating those variable using loop
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                count_zero++;
            }
            if (arr[i] == 1)
            {
                count_one++;
            }
        }
        // reinitializing the variable firstly zero then one then two using loop
        int i = 0;
        for (i; i < count_zero; i++)
        {
            arr[i] = 0;
        }
        for (int j = 0; j < count_one; j++)
        {
            arr[i] = 1;
            i++;
        }
        for (i; i < n; i++)
        {
            arr[i] = 2;
        }
    }
}