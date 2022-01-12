/* Aadil has been provided with a sentence in the form of a string as a function parameter. 
The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA". */

void reverseEachWord(char input[]) {
    // Write your code here
    size_t len = 0, i, j;
    while (input[len])
        ++len;

    // reverse entire sequence
    
    // walk again, reversing each word.
    i = 0;
    while (input[i])
    {
        // skip ws; root 'i' at beginning of word
        while (input[i] == ' ') 
            ++i;

        // skip until ws or eos; root 'j' at one-past end of word
        j = i;
        while (input[j] && input[j] != ' ') 
            ++j;

        // remember the last position
        size_t last = j;
        while (i < j--)
        {
            char c = input[i]; // or use std::swap
            input[i++] = input[j];
            input[j] = c;
        }

        // start at last-left posiion
        i = last;
    }
}