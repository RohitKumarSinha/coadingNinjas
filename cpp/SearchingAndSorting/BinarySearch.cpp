/* You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. 
Write a function to search this element in the given input array/list using 'Binary Search'. 
Return the index of the element in the input array/list. In case the element is not present in the array/list, 
then return -1.
Sample Input 1:
7
1 3 7 9 11 12 45
1
3
Sample Output 1:
1 */

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int first = 0;
    int last = n-1;
    int middle = (first + last) / 2;
    while (first <= last){
        if (input[middle] < val){
            first = middle + 1;
        }
        else if (input[middle] == val){
            return middle;
            break;
        }
        else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    
    if (first > last){
        return -1;
    }
}