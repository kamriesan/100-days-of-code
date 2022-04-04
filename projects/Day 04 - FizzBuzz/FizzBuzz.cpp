#include <iostream>
using namespace std;
int main(){
	
  int i;
	for(i=0; i<=100; i++){
    
    if (i%5 == 0 && i%3 == 0) {
      cout << "\nFizzBuzz";
    }
    else if (i%3 == 0) {
    cout << "\nFizz";
    }
    else if (i%5 == 0) {
    cout << "\nBuzz";
    }
    else {
    cout << endl << i ;
    }
  

  }

	return 0;
}
