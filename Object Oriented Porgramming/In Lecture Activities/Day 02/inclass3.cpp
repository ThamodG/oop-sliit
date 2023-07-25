#include <iostream>

using namespace std;

int main(){
	int mat[5][5];
	int tmat[5][5];
	
	for(int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			cout << "Enter the element for row " <<i+1<< " and column " <<j+1<< " :";
			cin >> mat[i][j];
		}
	}
	for (int i=0; i<5; i++){
			for (int j=0; j<5; j++){	
				tmat[i][j] = mat[j][i];
		}
	}
	for(int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			cout << "["<<tmat[i][j]<< "]";
		}
		cout << endl;
	}
	return 0;
		
	
}
