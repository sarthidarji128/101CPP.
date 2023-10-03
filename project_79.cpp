#include <iostream>
#include <string>

using namespace std;

string LCS(const string& str1, const string& str2) 
{
    if (str1.empty()||str2.empty()) {
        return "";
    }

    if (str1.back()==str2.back()) {
        return LCS(str1.substr(0, str1.length()-1), str2.substr(0, str2.length()-1))+str1.back();
    } 
    else {
        string lcs1=LCS(str1, str2.substr(0, str2.length()-1));
        string lcs2=LCS(str1.substr(0, str1.length()-1), str2);
        
        return(lcs1.length()>lcs2.length())?lcs1:lcs2;
    }
}

int main() {
    string str1,str2;

    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string: ";
    cin>>str2;

    string lcs= LCS(str1, str2);

    cout<<"Longest Common Subsequence: "<<lcs<<endl;

    return 0;
}
