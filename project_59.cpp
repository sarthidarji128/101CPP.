#include <iostream>

using namespace std;

int main() {
    int arr[]={14, 38, 25, 9, 63, 74, 89, 36};
    int n=sizeof(arr)/sizeof(arr[0]);

    if(n<2) {
        cout<<"The array does not have a second largest element.\n";
       
        return 0;
    }

    int firstmax=arr[0]; 
    int secondmax=arr[0]; 

    for(int i=1; i<n; i++) {
        if(arr[i]>firstmax) {
            secondmax=firstmax; 
            firstmax=arr[i]; 
        } 
        else if(arr[i]>secondmax &&arr[i]!=firstmax) {
            secondmax=arr[i]; 
        }
    }

    cout<<"The second largest element in the array is: "<<secondmax<<endl;

    return 0;
}
