// By @kamriesan_
// Desc: Certification Exam Result

#include <iostream>
using namespace std;

int main() { 

	// input no. of categories and passing rates
	int catNum, passRate;
	cout << "# of Categories: "; cin >> catNum;
	cout << "Passing Rate(%): "; cin >> passRate;
	cout << endl;
	
	
	// Cat 1 (Cat Name, Score, Total): Grammar, 20 25
	string catName[catNum]; // Cat Name
	float catScore[catNum]; // Cat Score
	float catTotal[catNum]; // Cat Total


	// Read values for loop
	int j;
	
	for (j=0; j<catNum; j++) {
		cout << "Cat " << j+1 << " (CatName, Score, Total): ";
		cin >> catName[j] >> catScore[j] >> catTotal[j];
	}
	
	
	// Compute and Print Percentages
	float percent[catNum];
	bool catPassed[catNum], examPassed;
	string catAss[catNum], verdict;
	
	cout <<"\nExam Performance";
	for (j=0; j<catNum; j++) {
		percent[j] = (catScore[j]/catTotal[j]) * 100;
		if (percent[j] >= passRate) {
			catPassed[j] = true;
			catAss[j] = "Passed";
		}
		else {
			catPassed[j] = false;
			catAss[j] = "Failed";
		}
		examPassed=examPassed && catPassed;
		cout << endl << catName[j] << ": "  << percent[j] << "%";
	}
	
	// Verdict Pass or Fail Boolean Condition
	cout << endl;
	if (examPassed) 
		cout << "\nVerdict: PASSED";
	else  
		cout << "\nVerdict: FAILED";
	
	// Assessment
	cout << endl;
	cout << "\nAssessment: \n";
	for (j=0; j<catNum; j++) {
		cout << catName[j] << ": " << catAss[j] << endl;
	}
	return 0;
}
