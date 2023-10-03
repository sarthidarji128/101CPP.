#include <iostream>

using namespace std;

void towerofhanoi(int n, char source, char auxiliary, char destination) 
{
    if (n==1) {
        cout<<"Move disk 1 from "<<source<<"to"<< destination<<endl;
        return;
    }

    towerofhanoi(n-1, source, destination, auxiliary);
    cout<<"Move disk "<<n<< "from "<<source<<"to"<<destination<<endl;
    towerofhanoi(n-1, auxiliary, source, destination);
}

int main() {
    int numdisks;
    
    cout<<"Enter the number of disks: ";
    cin>>numdisks;

    if(numdisks<1) {
        cout<<"Number of disks should be at least 1.\n";
        return 1;
    }

    cout<<"Steps to solve the Tower of Hanoi with "<<numdisks<<" disks:\n";
    towerofhanoi(numdisks,'A','B','C');

    return 0;
}
