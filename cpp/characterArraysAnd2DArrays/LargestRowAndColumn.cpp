/* For a given two-dimensional integer array/list of size (N x M), you need to find out which row or 
column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

Sample Input 1 :
1
2 2 
1 1 
1 1
Sample Output 1 :
row 0 2 */


void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here
    int i,j,sum = 0;
	    int tempr = -2147483648;
	    int maxrow = 0, maxr = 0;
	// finding each row sum 
	for(i = 0; i < nRows; i++){ 
		for (j = 0; j < mCols; j++) { 
			// Add the element 
			sum = sum + input[i][j]; 
		}
        //finding th greatest row
		if(sum > tempr){
			maxrow = sum;
			maxr = i;
			tempr = maxrow;
		}
		// Reset the sum 
		sum = 0; 
	}
	
	i=0,j=0,sum = 0; 
	int tempc = -2147483648;
	int maxcol = 0, maxc = 0;
	
	// finding the each column sum 
	for (i = 0; i < mCols; ++i) { 
		for (j = 0; j < nRows; ++j) { 

			// Add the element 
			sum = sum + input[j][i]; 
		}
        // finding th greatest column
		if(sum > tempc){
			maxcol = sum;
			maxc = i;
			tempc = maxcol;
		}
		// Reset the sum 
		sum = 0;
	}
    

    //comparing the max row or col
	if(maxrow > maxcol){
		cout<<"row " << maxr<<" "<<maxrow;
	}
	else if(maxrow < maxcol){
		cout<<"column " << maxc<<" "<<maxcol;
	}
    else if (maxrow > 0){
        cout<<"row " << maxr<<" "<<maxrow;
    }
	else{
		cout<<"row " << maxr<<" "<< -2147483648;
	}
    
}

