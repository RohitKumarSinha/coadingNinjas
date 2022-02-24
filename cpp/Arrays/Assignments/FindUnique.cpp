/* Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1 */
#include <climits>

int findUnique(int *arr, int size)
{
    // Write your code here
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                arr[j] = INT_MIN;
            }
        }
        if (flag == 0 && arr[i] != INT_MIN)
        {
            int value = arr[i];
            return value;
        }
    }
    return -1;
}