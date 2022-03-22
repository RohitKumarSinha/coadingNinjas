/* Check whether a given String S is a palindrome using recursion. Return true or false.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false */

#include <cstring>

bool checkPalindrome(char input[], int start, int end)
{
    if (input[0] == '\0' || input[1] == '\0')
    {
        return true;
    }

    if (start >= end)
    {
        return true;
    }

    if (input[start] != input[end])
    {
        return false;
    }

    if (input[start] == input[end])
    {
        return checkPalindrome(input, start + 1, end - 1);
    }
}

bool checkPalindrome(char input[])
{
    int length = strlen(input);
    return checkPalindrome(input, 0, length - 1);
}
