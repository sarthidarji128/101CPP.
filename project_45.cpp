#include <iostream>

using namespace std;

int main() {
    int arr[]={1, 2, 3, 4, 5};

    int arrSize=sizeof(arr)/sizeof(arr[0]);

    cout<<"Elements of the array: ";
    for(int i=0; i<arrSize; i++) 
    
    {
    cout<<arr[i]<<" ";
    }
    
    
    cout<<endl;

    return 0;
}
