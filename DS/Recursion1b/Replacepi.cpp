/* Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
ample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
*/

// Change in the given string itself. So no need to return or print anything
#include <cstring>
void replacePi(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }

    if (input[0] == 'p' && input[1] == 'i')
    {
        // looping backside for shifting the value 2 because we need 2 extra space of putting the value 1, 4
        // and 3 and . goes to the position p i
        for (int i = strlen(input); i >= 2; i--)
        {
            input[i + 2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 4);
    }
    else
    {
        replacePi(input + 1);
    }
}
