/* Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.
Input Format :
Sample Input 1 :
this is test string
Sample Output 1 :
is */

/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/
#include <climits>
#include <cstring>
void minLengthWord(char input[], char output[]){
		
	// Write your code here	
    int minStart = -1;
    int minLength = INT_MAX;
    int currentStart = 0;
    int i = 0;
    int len = strlen(input);
    for(; i < len; i++){ 
        if(input[i] == ' '){
            int currentWordLength = i - currentStart;
            if(currentWordLength < minLength){
                minStart = currentStart; 
                minLength = currentWordLength;
            }
            currentStart = i + 1;
        }
    }
    if(minStart == -1){
        for(int i = 0; i <= len; i++) { 
            output[i] = input[i];
        }
    }
    else{
        int currentWordLength = i - currentStart;
        if(currentWordLength < minLength){
            minStart = currentStart;
            minLength = currentWordLength;
        } 
        int j = 0;
        for(int i = minStart; i < minStart + minLength; i++) {
            output[j++] = input[i];
        }
        output[j] = '\0';
    }

}


