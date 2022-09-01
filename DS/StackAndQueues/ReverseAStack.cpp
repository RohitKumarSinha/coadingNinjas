void reverseStack(stack<int> &input, stack<int> &extra)
{
  // Write your code here
  if (input.size() <= 1)
  {
    return;
  }

  int save = input.top();
  input.pop();

  reverseStack(input, extra);

  while (!input.empty())
  {
    extra.push(input.top());
    input.pop();
  }

  extra.push(save);

  while (!extra.empty())
  {
    input.push(extra.top());
    extra.pop();
  }
}