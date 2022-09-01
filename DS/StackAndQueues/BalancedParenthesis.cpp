#include <stack>
bool isBalanced(string expression)
{
  // Write your code here
  stack<char> stk;
  for (int i = 0; i < expression.length(); i++)
  {
    if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
    {
      stk.push(expression[i]);
    }
    else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
    {
      if (stk.empty())
      {
        return false;
      }

      char topChar = stk.top();
      stk.pop();

      if (expression[i] == '(' && topChar == ')')
      {
        continue;
      }
      else if (expression[i] == '[' && topChar == ']')
      {
        continue;
      }
      else if (expression[i] == '{' && topChar == '}')
      {
        continue;
      }
    }
  }
  return stk.empty();
}