#include <iostream>

using namespace std;

int main(){    
    int X;
    cout<<"Enter an integer X: ";
    cin>>X;

    int sum=0;
    for(int i=2; i<=X; i+=2){
        sum+=i;
    }

    cout<<"The sum of even numbers between 1 and "<<X<<" is: "<<sum<<endl;
    
    
    
    return 0;
}
