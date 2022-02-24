/* Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word

Sample Input :
abc def g hi
Sample Output :
abcdefghi */

void trimSpaces(char input[]) {
    // Write your code here
    
    int j = strlen(input);
    int count = 0;
    for(int i = 0; i < j; i++){
        if (input[i] != ' '){
            input[count] = input[i];
            count++;
        }
    }
    input[count] = '\0';
}