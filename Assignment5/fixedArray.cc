#include <iostream>
using namespace std;

class FixedArray {
    enum { maxSize = 100 };
    int arr[maxSize];
    int size;

public:
  
    void setSize(int sz) {
       if(sz>maxSize){
		size = maxSize;
       }
       else
	       size = sz;
    }

    void fillArray() {
        for (int i = 0; i < size; ++i) {
            arr[i] = i + 1; // Filling with sequential numbers for demonstration
        }
    }

    void printArray() {
        cout << "Array elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

     bool isPrime(int num) {
        if (num == 0 || num == 1)
		return false;
	for(int i=2;i<num;i++){
		if(num%i==0)
			return false;
	}
        return true;
    }

     void printPrimeSeries(){
	     cout << "Prime Numbers in Array: ";
	for(int i=0;i<size;i++){
	if(isPrime(arr[i]))
		cout << arr[i]<< " " ;
	}
	     cout << endl;
     }
};

int main() {
    FixedArray arrObj;
    arrObj.setSize(10);
    arrObj.fillArray();
    arrObj.printArray();
    arrObj.printPrimeSeries();

    return 0;
}

