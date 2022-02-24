/* You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some 
number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has 
been rotated.

Sample Input 1:
1
6
5 6 1 2 3 4
Sample Output 1:
2  */

int arrayRotateCheck(int *input, int size)
{
    //Write your code here
     int count=1;
    bool check = false;
    for(int i = 0; i < size-1; i++){
        if(input[i] <= input[i+1]){
            count++;
        }
        else{
            check = true;
            break;
        }
    }
    if(check == false){
        return 0;
    }
    else{
        return count;
    }
}