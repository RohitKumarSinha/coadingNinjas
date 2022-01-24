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

int firstIndex(int input[], int size, int x) {

    if (  size < 1 )
    {        
        return -1;
    }
    else if ( input[0] == x)
    {
        return 0;
    }        
    else
    {        
        int i = firstIndex( input + 1, size - 1, x );
        return i == - 1 ? i : i + 1;
    }    
}
