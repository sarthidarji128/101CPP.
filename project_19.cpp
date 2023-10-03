#include <iostream>
#include <vector>

using namespace std;

// Class to represent an account
class Account {
public:
  // Constructor
  Account(int balance) {
    this->balance = balance;
  }

  // Function to check the balance
  int get_balance() {
    return balance;
  }

  // Function to deposit money
  void deposit(int amount) {
    balance += amount;
  }

  // Function to withdraw money
  void withdraw(int amount) {
    if (amount <= balance) {
      balance -= amount;
    } else {
      cout << "Insufficient funds" << endl;
    }
  }

private:
  // The balance of the account
  int balance;
};

// Main function
int main() {
  // Create an account with a balance of 1000
  Account account(1000);

  // Display a menu of options to the user
  cout << "1. Check balance" << endl;
  cout << "2. Deposit money" << endl;
  cout << "3. Withdraw money" << endl;
  cout << "4. Quit" << endl;

  // Get the user's choice
  int choice;
  cin >> choice;

  // Switch statement to handle the user's choice
  switch (choice) {
    case 1:
      // Check the user's balance
      cout << "Your balance is $" << account.get_balance() << endl;
      break;
    case 2:
      // Deposit money into the user's account
      cout << "How much money would you like to deposit?" << endl;
      int amount;
      cin >> amount;
      account.deposit(amount);
      cout << "Your new balance is $" << account.get_balance() << endl;
      break;
    case 3:
      // Withdraw money from the user's account
      cout << "How much money would you like to withdraw?" << endl;
      cin >> amount;
      account.withdraw(amount);
      cout << "Your new balance is $" << account.get_balance() << endl;
      break;
    case 4:
    cout<<"thanks for visiting";
    break;
    }
    return 0;
  }
