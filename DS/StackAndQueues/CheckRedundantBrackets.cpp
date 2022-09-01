#include <stack>
bool checkRedundantBrackets(string expression)
{
  // Write your code here
  stack<char> s;
  int c;
  bool ans = false;
  for (int i = 0; i < expression.length(); i++)
  {
    if (expression[i] != ')')
    {
      s.push(expression[i]);
    }
    else if (expression[i] == ')')
    {
      while (s.top() != '(')
      {
        s.pop();
        c++;
      }
      s.pop();
      if (c == 0 || c == 1)
      {
        ans = true;
        return ans;
      }
      c = 0;
    }
  }
}