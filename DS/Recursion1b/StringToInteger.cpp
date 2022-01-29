/* Write a recursive function to convert a given string into the number it represents. 
That is input will be a numeric string that contains only numbers, 
you need to convert the string into corresponding integer and return the answer.

Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567 */

#include<bits/stdc++.h>
int stringToNumber(char input[]) {
    // Write your code here
    if(strlen(input) == 0) return 0;
    int a = input[0] - 48;
    return (a* pow(10, strlen(input) - 1)) + stringToNumber(input+1);
}


