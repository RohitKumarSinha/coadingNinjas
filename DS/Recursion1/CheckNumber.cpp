/* Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.
Sample Input 1 :
3
9 8 10
8
Sample Output 1 :
true */

bool checkNumber(int input[], int size, int x)
{

    // if we dont find the x in array return false
    if (size == 0)
        return false;

    // if we find the x in array return true
    if (input[0] == x)
        return true;

    // everytime we decrease input size and array size and store the value in check
    bool check = checkNumber(input + 1, size - 1, x);
}
