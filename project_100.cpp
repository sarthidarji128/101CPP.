#include <iostream>

using namespace std;

int main()
{
 // Initialize variables
 int i,j;
 int n=5;

 // Loop from n to 1
 for(i=n;i>=1;i--)
 {
      // Inner loop from i to n
      for(j=i;j<=n;j++)
      {
          // Print uppercase letter
          cout<<((char)(j+64));
      }

      // Move to next line
      cout<<endl;
 }

 return 0;
}