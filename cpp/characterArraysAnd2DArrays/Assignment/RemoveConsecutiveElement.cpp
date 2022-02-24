/* For a given string(str), remove all the consecutive duplicate characters.
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc" */

void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
     int nextIndex = 1;
    char lastChar = input[0];
    for(int i = 0; input[i] != '\0';) { 
        if(input[i] == lastChar) { 
            i++; 
        } 
        else {
            input[nextIndex] = input[i];
            nextIndex++; 
            lastChar = input[i];
            i++;
        }
    }
    input[nextIndex] = '\0';
}
