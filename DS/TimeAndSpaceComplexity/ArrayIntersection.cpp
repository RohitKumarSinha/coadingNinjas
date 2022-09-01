void helper(int *arr1, int *arr2, int n, int m)
{
  if (n == 0 || m == 0)
  {
    return;
  }
  else
  {
    if (arr1[0] == arr2[0])
    {
      cout << arr1[0] << " ";
      helper(arr1 + 1, arr2 + 1, n - 1, m - 1);
    }
    else if (arr1[0] > arr2[0])
    {
      helper(arr1, arr2 + 1, n, m - 1);
    }
    else
    {
      helper(arr1 + 1, arr2, n - 1, m);
    }
  }
}
void intersection(int *arr1, int *arr2, int n, int m)
{
  // Write your code here
  sort(arr1, arr1 + n);
  sort(arr2, arr2 + m);
  helper(arr1, arr2, n, m);
}