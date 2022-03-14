/* You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some
number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has
been rotated.

Sample Input 1:
1
6
5 6 1 2 3 4
Sample Output 1:
2  */
#include <climits>
int arrayRotateCheck(int *input, int size)
{
    // check whether the size of the array is less than one or not
    if (size <= 1)
    {
        return INT_MIN;
    }
    // checking whether the array the sorted or not if sorted the increase count if not then return the updated count value
    else
    {
        int count = 1;
        for (int i = 0; i < size; i++)
        {
            if (input[i] < input[i + 1])
            {
                count++;
            }
            else
            {
                return count;
            }
        }
        return 0;
    }
}