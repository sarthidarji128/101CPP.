#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int user, computer;
    int uscore = 0;
    int cscore = 0;
    char playagain;

    cout << "Welcome to Rock, Paper, Scissors!\n";

    do 
    {
        cout<<"Choose:\n";
        cout<<"1.Rock\n";
        cout<<"2.Paper\n";
        cout<<"3.Scissors\n";
        cout<<"Enter your choice (1, 2, or 3): ";
        cin>>user;

        computer=rand()%3+1;

        cout<<"You chose ";

        switch(user) {
            case 1:
                cout<<"Rock";
                break;
            case 2:
                cout<<"Paper";
                break;
            case 3:
                cout<<"Scissors";
                break;
            default:
                cout<<"Invalid choice";
                break;
        }
        cout<<"\nComputer chose ";
        
        switch(computer) {
            case 1:
                cout<<"Rock";
                break;
            case 2:
                cout<<"Paper";
                break;
            case 3:
                cout<<"Scissors";
                break;
        }
        cout<<"\n";

        if(user==computer) {
            cout<<"It's a tie!\n";
        } 
        else if((user==1 && computer==3)||(user==2 && computer==1)||(user==3 && computer==2)) {
            cout<<"You win!\n";
            uscore++;
        } 
        else {
            cout<<"Computer wins!\n";
            cscore++;
        }

        cout<<"Score-You: "<<uscore<<"Computer: "<<cscore<<"\n";

        cout<<"Do you want to play again? (y/n): ";
        cin>>playagain;

    } 
    
    while(playagain=='y'||playagain=='Y');

    
    cout<<"Thanks for playing!\n";

    return 0;
}
