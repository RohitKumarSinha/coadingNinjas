/* Given a string S, remove consecutive duplicates from it recursively.
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz */

void removeConsecutiveDuplicates(char *input)
{

  if (input[0] == '\0')
  {
    return;
  }
  removeConsecutiveDuplicates(input + 1);
  if (input[0] == input[1])
  {
    for (int k = 0; input[k] != '\0'; k++)
    {
      input[k] = input[k + 1];
    }
  }
}