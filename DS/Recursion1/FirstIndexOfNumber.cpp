/* Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array.
Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.

Sample Input :
4
9 8 10 8
8
Sample Output :
1 */

int firstIndex(int input[], int size, int x)
{

    if (size == 0)
    {
        return -1;
    }

    // if we find the index at first position return  0
    if (input[0] == x)
    {
        return 0;
    }

    // every time recursion is called by each input value and check that value with x
    int res = 1 + firstIndex(input + 1, size - 1, x);
    // if the entire array searched and result is not found then it return -1 and we add 1 so it becomes 0
    // so we check if the entire array searched and our value is not found then return -1 other wise result
    if (res == 0)
    {
        return -1;
    }
    else
    {
        return res;
    }
}
