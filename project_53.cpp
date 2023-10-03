#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool palindrome(const string& str) {
    
    string cleanedStr = str;

    cleanedStr.erase(remove_if(cleanedStr.begin(),cleanedStr.end(),::isspace),cleanedStr.end());
    transform(cleanedStr.begin(),cleanedStr.end(),cleanedStr.begin(),::tolower);

    int left=0;
    int right=cleanedStr.length()-1;

    while(left<right) {
        if (cleanedStr[left]!=cleanedStr[right]) {
            return false; 
        }
    left++;
    right--;
    }

    return true; 
}



int main() {
    string input;

    cout<<"Enter a string: ";
    getline(std::cin, input);

    if(palindrome(input)) {
        cout<<"The string is a palindrome.\n";
    } 
    else {
        cout<<"The string is not a palindrome.\n";
    }

    return 0;
}
