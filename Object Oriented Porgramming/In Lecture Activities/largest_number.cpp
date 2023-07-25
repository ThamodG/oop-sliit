#include <iostream>

using namespace std;

int main(){
	int number = 0;
	int largest_number = 0;
	
	for (int i = 0; i < 10; i++){
		cout << "Enter a number: ";
		cin >> number;
		if (number > largest_number ){
			largest_number = number;
		}else{
			//largest_number = largest_number;
		}
	}
	cout << "Largest number you entered is " << largest_number;
	return 0;
}
