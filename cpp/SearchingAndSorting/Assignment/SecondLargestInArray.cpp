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

int findSecondLargest(int *input, int n)
{
    //Write your code here
    long a = 2147483648;
     int count=0;int i=0,j=1;
    for(j;j<n;j++){
        if(input[i] == input[j]){
        	count++;
        }
    }
    if((count)==n-1 || n <= 1)
    	return -a;
    else{
        int max = -9999999;
	    int j = 0;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max){
			    max = input[i];
		    }
	    }
	    int temp = max;
	    max = -9999999;
	    for(int i = 0; i < n; i++){
		    if(input[i] > max && input[i] != temp){
			    max = input[i];
		    }
	    }
        return max;
	}
}
