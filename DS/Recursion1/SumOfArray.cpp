/* Given an array of length N, you need to find and return the sum of all elements of the array.
Sample Input 1 :
3
9 8 9
Sample Output 1 :
26 */

int sum(int input[], int n) {
    
    if(n==0)
      return 0;
    
    int total= input[0] + sum (input+1,n-1);
    return total;

}
