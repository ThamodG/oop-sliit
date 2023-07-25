#include <iostream>

using namespace std;

int main(){
	
	int age;
	string name;
	
	cout << "Enter your name: ";
	cin >> name;
	
	cout << "Enter your age: ";
	cin >> age;
	
	if (age > 60){
		cout << "Hi " << name << "! Your age group is seniors.";
	}else if(age >25){
		cout << "Hi " << name << "! Your age group is adult.";
	}else if(age > 14){
		cout << "Hi " << name << "! Your age group is youth.";
	}else{
		cout << "Hi " << name << "! Your age group is children.";
	}
	return 0;
}
