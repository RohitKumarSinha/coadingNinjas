/* Given an integer sorted array (sorted in increasing order) and an element x, 
find the x in given array using binary search. Return the index of x.

Sample Input :
6
2 3 4 5 6 8 
5 
Sample Output:
3 */

int helper(int input[], int l, int r, int x){
    if(l > r){
        return -1;
    }
    else{
        int mid = (l + r) / 2;
        if(input[mid] == x){
            return mid;
        }
        else if(input[mid] < x){
            helper(input, mid+1, r, x);
        }
        else{
            helper(input, l, mid-1, x);
        }
    }
}

int binarySearch(int input[], int size, int element) {
	return helper(input, 0, size-1, element);
}
