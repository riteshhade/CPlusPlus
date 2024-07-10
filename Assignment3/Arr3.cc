#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num == 0||num==1)
        return false;

    for (int i = 2; i< num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    const int size = 100;
    int arr[size];

    cout << "Enter the first value (arr[0]): ";
    cin >> arr[0];

    for (int i = 1; i < size; ++i) {
        arr[i] = arr[i - 1] + 1;
    }


    cout << "Array Elements (prime numbers left unchanged, others set to 0):" << endl;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            arr[i] = 0;
        }
        cout  << arr[i] << " ";
    }
    cout << endl;

   	// Find maximum consecutive zeroes
int maxZeroes = 0;
int currentZeroes = 0;
int startNum = arr[0];
int tempStartNum = 0;
for (int i = 0; i < size; ++i) {
    if (arr[i] == 0) {
        currentZeroes++;
        if (currentZeroes == 1) {
            tempStartNum = arr[i - 1];
        }
        if (currentZeroes > maxZeroes) {
            maxZeroes = currentZeroes;
            startNum = tempStartNum;
        }
    } else {
        currentZeroes = 0;
    }
}

cout << "Maximum consecutive zeroes: " << maxZeroes << endl;
cout << "Start number: " << startNum << endl;
cout << "End number: " << startNum+maxZeroes+1 << endl;


    return 0;
}

