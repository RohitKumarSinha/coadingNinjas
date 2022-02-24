/* Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. 
Save all the indexes in an array (in increasing order).Do this recursively. Indexing in the array starts from 0. 

Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4 */


int allIndexes(int input[], int size, int x, int output[]) {
    if(size == 0)
        return 0;
    int smallCount= allIndexes(input, size -1, x, output);
     if(input[size -1] == x)
     {
         output[smallCount] = size -1;
         return smallCount +1;
     } else {
         return smallCount;
     }

}
