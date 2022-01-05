/* Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). 
The idea here is to represent each array/list as an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers and put the result in another 
array/list i.e. output array/list will also contain only single digit at every index.

Sample Input 1:
1
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0 */

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int i = size1-1, j = size2-1;
    int carry=0;
    int k;
    if(size1 < size2){
      k = size2;
    }
    else{
       k = size1;
    }
    while(k >= 0){
        output[k] = (input1[i]+input2[j]+carry)%10;
          carry = (input1[i]+input2[j]+carry)/10;
        if(i>0)
            i--;
        else{
            i=-1;
            input1[i] = 0;
        }
        if(j>0)
            j--;
        else{
            j=-1;
            input2[j] = 0;
        }
        k--;
    }
}