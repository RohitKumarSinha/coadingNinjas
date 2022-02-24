/* Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
2 1 5 2 3
Sample Output 2 :
1 2 2 3 5 */

void mergeArray(int input[], int s, int e){
    int size = (e - s) + 1;
    int mid = (s + e) / 2;
    int *output = new int [size];
    int i = s;
    int j = mid + 1;
    int k = 0;
    while(i<=mid&&j<=e){
        if(input[i] >= input[j]){
            output[k++] = input[j++];
        }
        else{
            output[k++] = input[i++];
        }
    }
    while(i<=mid){
        output[k++] = input[i++];
    }
    while(j<=e){
        output[k++] = input[j++];
    }
    int m = 0;
    for(int i=s; i<=e; i++){
        input[i] = output[m];
        m++;
    }
    delete [] output; 
}

void helper(int input[], int s, int e){
    if(s >= e){
        return;
    }
    else{
        int mid = (s+e) / 2;
        helper(input, s, mid);
        helper(input, mid+1, e);
        mergeArray(input, s, e);
    }
}


void mergeSort(int input[], int size){
	// Write your code here
     helper(input, 0, size-1);   
}
