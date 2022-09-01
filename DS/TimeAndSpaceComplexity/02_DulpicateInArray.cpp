int findDuplicate(int *arr, int n)
{
  // Write your code here
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  int res = ((n - 1) * (n - 2)) / 2;

  res = sum - res;

  return res;
}