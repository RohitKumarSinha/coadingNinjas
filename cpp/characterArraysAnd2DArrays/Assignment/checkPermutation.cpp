/* For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Sample Input 1:
abcde
baedc
Sample Output 1:
true */


bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int freq[256] = {0};
    for(int i = 0; input1[i] != '\0'; i++) { 
        int index = input1[i];
        freq[index]++; 
    }
    for(int i = 0; input2[i] != '\0'; i++) {
        int index = input2[i];
        freq[index]--; 
    }
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) { 
            return false;
        }
    }
    return true;
}