/* You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this 
array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, 
you will be visiting each element in the array/list just once.

Sample Input 1:
1
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 */




void sort012(int *arr, int n)
{
    //Write your code here
    int count0 = 0,count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){    //count 0   
        if(arr[i] == 0){
            count0++;
        }
        if(arr[i] == 1){    //count 1
            count1++;
        }  
    }
    
    for(int i=0;i<count0;i++){    //print 0
        arr[i]=0;
    }
    int temp = count0 + count1;
     for(int i=count0;i<temp;i++){    //print 1
        arr[i]=1;
    }
     for(int i=temp;i<n;i++){    //print 2
        arr[i]=2;
    }
}