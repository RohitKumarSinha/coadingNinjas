#include <stack>
int countBracketReversals(string input)
{
  // Write your code here
  stack<char> s;
  int count = 0;
  if (input.length() % 2 != 0)
  {
    return -1;
  }

  for (int i = 0; i < input.length(); i++)
  {
    if (input[i] == '{')
    {
      s.push(input[i]);
    }
    else if (input[i] == '}')
    {
      if (s.empty())
      {
        s.push(input[i]);
      }
      else if (s.top() == '}')
      {
        s.push(input[i]);
      }
      else if (s.top() == '{')
      {
        s.pop();
      }
    }
  }

  while (!s.empty())
  {
    char fir = s.top();
    s.pop();
    char sec = s.top();
    s.pop();

    if (fir == sec)
    {
      count = count + 1;
    }
    else
    {
      count = count + 2;
    }
  }

  return count;
}