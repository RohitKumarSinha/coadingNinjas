/* You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest
element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31
(It is the smallest value for the range of Integer)

Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
13 */
#include <climits>
int findSecondLargest(int *input, int n)
{
	// check whether the size of the array is less than one or not
	if (n <= 1)
	{
		return INT_MIN;
	}

	else
	{
		// find the maximum of the array
		int maxi = input[0];
		for (int i = 0; i < n; i++)
		{
			if (input[i] > maxi)
			{
				maxi = input[i];
			}
		}
		// with the help of maximum find the second maximum of the array
		int sec_max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			if (input[i] < maxi && input[i] > sec_max)
			{
				sec_max = input[i];
			}
		}

		return sec_max;
	}
}
