#include <iostream>

using namespace std;

int fibonacci(int n) {
    if(n<=1) {
        return n; 
        return fibonacci(n-1)+fibonacci(n-2); 
    }
}

int main() {
    int n;

    cout<<"Enter the value of n: ";
    cin>>n;

    if (n<0) {
        cout<<"Invalid input. Please enter a non-negative integer.\n";
    }
    else {
        int result=fibonacci(n);
        cout<<"The "<<n<<"th Fibonacci term is: "<<result<<endl;
    }

    return 0;
}
