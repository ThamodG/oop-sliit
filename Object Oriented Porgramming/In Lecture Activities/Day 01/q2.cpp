#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a five digit number = ";
    cin>>x;
    cout<<x/10000<<"   "<<(x/1000)%10<<"   "<<(x/100)%10<<"   "<<(x/10)%10<<"   "<<x%10;
    return 0;
}