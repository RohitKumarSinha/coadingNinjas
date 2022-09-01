int arrayRotateCheck(int *input, int size)
{
  // Write your code here
  if (size == 0)
  {
    return 0;
  }

  int i = 0;
  for (i; input[i] <= input[i + 1]; i++)
  {
    continue;
  }
  return i + 1;
}