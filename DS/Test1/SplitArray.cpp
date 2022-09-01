bool check(int input[], int size, int si, int ls, int rs)
{
  if (si == size)
  {
    return ls == rs;
  }
  if (input[si] % 5 == 0)
  {
    return check(input, size, si + 1, ls + input[si], rs);
  }

  else if (input[si] % 3 == 0)
  {
    return check(input, size, si + 1, ls, rs + input[si]);
  }
  else
  {
    bool leftAns = check(input, size, si + 1, ls + input[si], rs);
    bool rightAns = check(input, size, si + 1, ls, rs + input[si]);
    return leftAns || rightAns;
  }
}

bool splitArray(int *input, int size)
{
  return check(input, size, 0, 0, 0);
}
