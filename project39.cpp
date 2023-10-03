#include <iostream>
using namespace std;

int main()
{
   int rows;

   cout << "Enter the number of rows : ";
   cin >> rows;

   for (int i = 1; i <= rows; i++)
   {
      // Print spaces before the asterisks
      for (int j = 1; j <= rows - i; j++)
      {
         cout << " ";
      }

      // Print asterisks for the current row
      for (int k = 1; k <= 2 * i - 1; k++)
      {
         cout << "*";
      }

      // Move to the next line
      cout << endl;
   }

   return 0;
}
