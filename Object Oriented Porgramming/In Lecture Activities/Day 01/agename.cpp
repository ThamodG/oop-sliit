#include <iostream>

using namespace std;
 
int main()
{
    int age;
    string name;

    cout<<"Enter your Name: \n";
    cin>>name;

    cout<<"Hello "<<name<<"!";

    cout<<"Enter your Age: ";
    cin>>age;

    if(age>60)
    {
        cout<<"You are a Senior Citizen";
    }
    else if(age>25)
    {
        cout<<"You are an Adult";
    }
    else if(age>14)
    {
        cout<<"You are a Teenager";
    }
    else
    {
        cout<<"You are a Child";
    }
return 0;
}