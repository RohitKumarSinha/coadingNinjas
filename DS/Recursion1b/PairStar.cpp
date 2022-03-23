/* Given a string S, compute recursively a new string where identical chars that are adjacent in the original
string are separated from each other by a "*".
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a */

// Change in the given string itself. So no need to return or print the changed string.
#include <cstring>
void pairStar(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }

    if (input[0] == input[1])
    {
        // we are looping in back side because we can easily shift the value using loop back side
        for (int i = strlen(input); i >= 1; i--)
        {
            input[i + 1] = input[i];
        }
        input[1] = '*';
        pairStar(input + 2);
    }

    pairStar(input + 1);
}