//(t1 °C × 9/5) + 32 = t2 °F this formula can be used to convert the temperature value from Celsius to Fahrenheit. Write a program to get the temperature as input in Celsius from the user and print the temperature value in Fahrenheit

#include <iostream>

using namespace std;

int main()
{
    float celcius, fahrenheit;
    cout<<"Enter the temperature in celcius: ";
    cin>>celcius;
    if(celcius<300)
    {
    fahrenheit = (celcius*9/5)+32;
    cout<<"The temperature in fahrenheit is: "<<fahrenheit;
    }
    else
    {
        cout<<"The temperature is too high";
    }
    return 0;
}