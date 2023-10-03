#include <iostream>

using namespace std;

int main() 
{
    int choice;
    double temperature, convertedTemp;

    cout<<"Temperature Conversion Menu:\n";
    cout<<"1.Celsius to Fahrenheit\n";
    cout<<"2.Fahrenheit to Celsius\n";
    cout<<"Enter your choice (1 or 2): ";
    cin>>choice;

    if(choice==1) 
    {
        cout<<"Enter temperature in Celsius: ";
        cin>>temperature;
        convertedTemp=(temperature*9/5)+32;
        cout<<"Temperature in Fahrenheit: "<<convertedTemp<<"°F\n";
    } 
    else if(choice==2) 
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temperature;
        convertedTemp=(temperature-32)*5/9;
        cout<<"Temperature in Celsius: "<<convertedTemp<<"°C\n";
    } 
    else 
    {
        cout<<"Invalid choice. Please enter 1 or 2.\n";
    }

    return 0;
}
