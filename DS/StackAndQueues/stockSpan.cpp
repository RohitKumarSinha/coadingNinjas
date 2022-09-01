#include <stack>
int *stockSpan(int *price, int size)
{
  // Write your code here
  int *ans = new int[size];
  stack<int> s;

  for (int i = 0; i < size; i++)
  {
    while (s.size() != 0 && price[s.top()] < price[i])
    {
      s.pop();
    }
    if (s.empty())
    {
      ans[i] = i + 1;
    }

    else if (!s.empty() && price[s.top()] >= price[i])
    {
      ans[i] = i - s.top();
    }
    s.push(i);
  }
  return ans;
}