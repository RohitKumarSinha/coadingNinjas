/* Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.
Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28 */

void bubbleSort(int *input, int size)
{
    // Write your code here
    int last = size - 1; // we have to traverse n - times
    while (last >= 0)
    { // after every round largest element will go their place
        for (int i = 0; i < last; i++)
        { // checking every element that its next index element is smaller or not
            if (input[i] > input[i + 1])
            {
                int temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
            }
        }
        last = last - 1; // decreasing the size because after every round last element go their right place
    }
}