#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
        cout<<"Enter value for arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"The array in reverse order is : ";
    for(i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
