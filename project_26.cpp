#include <iostream>

using namespace std;

int main() {
    int N;
    int sum = 0;

    cout<<"Enter a positive integer N: ";
    cin>>N;

    if(N<=0) {
        cout<<"Enter a positive integer.\n";
    } 
    else {
        for (int i=1; i<=N; i++) {
            sum+=i;
        }

        cout<<"The sum of natural numbers from 1 to "<<N<<"is:"<<sum<<endl;
    }

    return 0;
}
