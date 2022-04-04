// By: @kamriesan_
// Day 8 100 days of Code: Matrices Equality

#include <iostream>
using namespace std;

int main (){
	char ans;
	
	do {
		int m,n;
		
		// Input array size
		do {
			cout<<"Dimensions (row, col): "; cin >> m >> n;
			if (m<3 || n<3) 
				cout<<"Minimum size is 3x3. Pls try again...\n\n";
			else if (m>9 || n>9) 
				cout<<"Maximum size is 9x9. Pls try again...\n\n";
		} while(!(3<=m && m<=9) || !(3<=n && n<=9));
		
		
		int i, j, firstArr[m][n], secArr[m][n];
		// input first matrix
		cout << "\nEnter First Matrix:\n";
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				cin >> firstArr[i][j]; 
			}
		}

		
		// input second matrix
		cout << "\nEnter Second Matrix:\n";
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				cin >> secArr[i][j]; 
			}
		}


		// print matching elements
		cout << "\nMatching Elements:";
		for(i=0; i<m; i++){
			cout << endl;
			for(j=0; j<n; j++){
				if (firstArr[i][j]==secArr[i][j]) {
					cout << firstArr[i][j] << " ";
				}
				else {
					cout << "   ";
				}
			} 
		}
		
		
		// Matrix equal or not equal
		int equal=1;
		
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				if(firstArr[i][j]!=secArr[i][j]){
					equal=0;
					break;
				}
			}
		}
		cout << endl;
		if (equal==1) 
			cout << "\nMATRICES ARE EQUAL";
		else  
			cout << "\nMATRICES ARE NOT EQUAL";
			
			
		// input validation 
		do {
			cout << "\n\nTry Again? (y/n) ";
			cin >> ans; cout << endl;
		} while(!((ans == 'y') || (ans == 'n')));
	} while(ans == 'y');
	


	
	
return 0;
}
