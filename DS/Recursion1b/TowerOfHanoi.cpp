/* Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle 
is to move all disks from source 
rod to destination rod using third rod (say auxiliary). The rules are :
Sample Input 1 :
2
Sample Output 1 :
a b
a c
b c */

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Write your code here
     if (n == 0){
         return;
     }
    towerOfHanoi(n-1, source, destination, auxiliary);
    cout << source << " " << destination << endl;
    towerOfHanoi(n-1, auxiliary, source, destination);
}
