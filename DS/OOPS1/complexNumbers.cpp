/* A ComplexNumber class contains two data members : one is the real part (R) and the other is imaginary (I) (both integers).
Implement the Complex numbers class that contains following functions -
1. constructor
You need to create the appropriate constructor.
2. plus -
This function adds two given complex numbers and updates the first complex number.
e.g.
if C1 = 4 + i5 and C2 = 3 +i1
C1.plus(C2) results in: 
C1 = 7 + i6 and C2 = 3 + i1
3. multiply -
This function multiplies two given complex numbers and updates the first complex number.
e.g.
if C1 = 4 + i5 and C2 = 1 + i2
C1.multiply(C2) results in: 
C1 = -6 + i13 and C2 = 1 + i2
4. print -
This function prints the given complex number in the following format :
a + ib
Sample Input 1 :
4 5
6 7
1
Sample Output 1 :
10 + i12
Sample Input 2 :
4 5
6 7
2
Sample Output 2 :
-11 + i58 */

class ComplexNumbers {
    // Complete this class
    int real;
    int imaginary;
    
    public:
	ComplexNumbers(int real, int imaginary){
        this -> real = real;
        this -> imaginary = imaginary;
    }
    
    void plus(ComplexNumbers c2){
        this->real = this->real + c2.real;
        this->imaginary = this->imaginary + c2.imaginary;
    }
    
    void multiply(ComplexNumbers c2){
         int real = (this -> real * c2.real) - (this -> imaginary * c2.imaginary);
        int imaginary = (this -> real * c2.imaginary) + (this -> imaginary * c2.real);
    	this -> real = real;
        this -> imaginary = imaginary;
        
    }
    
    void print(){
         if(this -> imaginary < 1){
            cout << this -> real << " " << "- i" << -(this -> imaginary); 
        }
        else{
            cout << this -> real << " " << "+ i" << this -> imaginary; 
        }
    }
    
    
};