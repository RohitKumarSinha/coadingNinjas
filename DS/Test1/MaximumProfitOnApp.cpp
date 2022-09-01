#include <bits/stdc++.h>
int maximumProfit(int budget[], int n)
{
  // Write your code here
  int ans = INT_MIN;
  sort(budget, budget + n);
  for (int i = 0; i < n; i++)
  {
    ans = max(ans, budget[i] * (n - i));
  }
  return ans;
}
