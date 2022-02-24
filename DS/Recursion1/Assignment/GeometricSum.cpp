/* Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.

Sample Input 1 :
3
Sample Output 1 :
1.87500 */

double geometricSum(int k) {
    // Write your code here
    if(k==0)
        return 1;
    int no=2;
    for (int i=1;i<k;i++)
    {
        no=no*2;
    }
     double power= 1/(double)no;
    
    return power+geometricSum(k-1);

}


