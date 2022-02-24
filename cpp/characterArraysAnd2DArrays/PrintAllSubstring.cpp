/* For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous */

void printSubstrings(char input[]) {
    // Write your code here
    for(int start = 0; input[start] != '\0'; start++){
        for(int end = start; input[end] != '\0'; end++){
            for(int i = start; i <= end; i++){
                cout << input[i];
            }
            cout << endl;
        }
    }
}