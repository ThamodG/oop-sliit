#include <iostream>

using namespace std;

int main(){
	int arr[10];
	int i;
	float avg;
	int sum = 0;
	for(i=0; i<10; i++){
		cout << "Enter value for arr["<<i<<"] :";
		cin >> arr[i]; 
	}
	for (i=0; i<10; i++){
		sum = sum + arr[i];	
	}
	avg = sum/10;
	for (i = 0; i<10; i++){
		if(arr[i]>avg){
			cout << "arr["<<i<< "] : " <<arr[i]<< endl;
		}
	}
	return 0;
}
