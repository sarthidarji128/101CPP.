#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 is neither prime nor composite
    }

    if (num <= 3) {
        return true; // 2 and 3 are prime
    }

    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are composite
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // Numbers divisible by i or i+2 are composite
        }
    }

    return true; // If not divisible by any smaller prime, it's prime
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else { if(num <= 1){
        cout<<"1 is neither a prime nor a composite number."<<endl;
    } else{
        cout << num << " is a composite number." << endl;
    }
        
    }

    return 0;

}