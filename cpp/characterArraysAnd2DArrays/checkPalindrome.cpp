/* Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards. */

bool checkPalindrome(char str[]) {
    // Write your code here

   int i=0;
    int j = strlen(str) - 1;
    while(j > i){
        if(str[i] != str[j]){
            return false;
        }   
        i++;
        j--;
    }    
    return true;
}
