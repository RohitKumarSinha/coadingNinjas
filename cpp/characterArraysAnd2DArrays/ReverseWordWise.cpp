void reverseStringWordWise(char input[]) {
    // Write your code here

    size_t len = 0, i, j;
    while (input[len])
        ++len;

    // reverse entire sequence
    i = 0, j = len;
    while (i < j--)
    {
        char c = input[i]; 
        input[i++] = input[j];
        input[j] = c;
    }

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