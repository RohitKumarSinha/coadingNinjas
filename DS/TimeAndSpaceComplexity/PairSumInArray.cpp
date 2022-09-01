int pairSum(int *arr, int n, int num)
{
  // Write your code here
  sort(arr, arr + n);
  int si = 0;
  int ei = n - 1;
  int numPairs = 0;

  while (si < ei)
  {
    if (arr[si] + arr[ei] < num)
    {
      si++;
    }
    else if (arr[si] + arr[ei] > num)
    {
      ei--;
    }
    else
    {
      int eAtst = arr[si];
      int eAtEd = arr[ei];

      if (eAtst == eAtEd)
      {
        int totalElFromSTE = (ei - si) + 1;
        numPairs += (totalElFromSTE * (totalElFromSTE - 1) / 2);
        return numPairs;
      }

      int tempSi = si + 1;
      int tempEi = ei - 1;

      while (tempSi <= tempEi && &&arr[tempSi] == eAtst)
      {
        tempSi += 1;
      }
      while (tempEi >= tempSi && arr[tempEi] == eAtEd)
      {
        tempEi -= 1;
      }
      int t
    }
  }
}