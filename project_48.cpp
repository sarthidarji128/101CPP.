#include <iostream>

using namespace std;

int main() {
    int arr[]={16, 52, 27, 4, 71, 55, 96, 38};
    int n=sizeof(arr)/sizeof(arr[0]);
    int search;

    cout<<"Enter the element you want to search for: ";
    cin>>search;

    bool found=false;
    int index=-1;

    for(int i=0; i<n; i++) {
        if(arr[i]==search) {
        found=true;
        index=i;
        break; 
        }
    }

    if(found) {
        cout<<"Element "<<search<<" found at index "<<index<<endl;
        } 
    else {
        cout<<"Element "<<search<<" not found in the array"<< endl;
    }

    return 0;
}
