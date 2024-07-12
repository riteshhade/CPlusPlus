#include <iostream>

using namespace std;

class DynArray {
    int *arr;
    int size;

public:
    void setSize(int sz) {
        size = sz;
    }

    void allocateMemory(int sz) {
        arr = new int[sz];
    }

    void fillArray() {
        cout << "Enter " << size << " integers:\n";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    bool isPrime(int num) {
        if(num==0 && num == 1)
		return false;
	for(int i=2;i<num;i++){
		if(num%i==0)
			return false;
	}
	return true;
    }

    void deleteMemory() {
        delete[] arr;
    }

    void printArray() {
        cout << "Array elements:\n";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void printPrimes() {
        cout << "Prime numbers in the array:\n";
        for (int i = 0; i < size; ++i) {
            if (isPrime(arr[i])) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    DynArray dynArr;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    dynArr.setSize(size);
    dynArr.allocateMemory(size);
    dynArr.fillArray();
    dynArr.printArray();
    dynArr.printPrimes();
    dynArr.deleteMemory();
    return 0;
}

