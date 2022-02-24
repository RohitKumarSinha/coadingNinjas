/* Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.
Sample Input 1 :
3 4
Sample Output 1 :
81 */

int power(int x, int n) {
    
      if (n != 0){
          return x*(power(x, n-1));
      } else {
          return 1;
      }

}

