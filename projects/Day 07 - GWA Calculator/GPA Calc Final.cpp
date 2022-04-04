// By @kamriesan_
// GPA Calculator (Not Tabled)
#include <iostream>
using namespace std;

int main (){
	int courseNum;
	
	cout << "GPA Calculator by @kamriesan_";
	cout << "\n-------------------------------\n";
	cout << "\nInput the number of courses: "; cin >> courseNum;
	cout << "Input Course Details:" << endl;
		
	// 1. Input the course details; name, units, grade
	int i;
	float courseGrade[courseNum], courseUnits[courseNum];
	string courseName[courseNum];
		
	for (i=0; i<courseNum; i++) {
		cout << "\nCourse #"<< i+1  << " - Name | No. Units | Grade: "; 
		cin >> courseName[i]; 
		cin >> courseUnits[i]; 
		cin >> courseGrade[i];	
	}
	
	
	// 2. Compute for the summation of all total units
	float sumCourseUnits=0;
	for (i=0; i<courseNum; i++) {
		sumCourseUnits += courseUnits[i];
	}
	// Checking:
	/* cout << "\nSummation of Course Units: " << sumCourseUnits; */	

		
	// 3. Multiply the grade and number of units for each course
	float prodUnitGrade[courseNum];
	
	for (i=0; i<courseNum; i++) {
		prodUnitGrade[i] = courseUnits[i] * courseGrade[i];
		// Checking:
		/* cout << "\nProduct of Unit and Grades of Course No. " << i+1 << " is: "<< prodUnitGrade[i];
		*/
	}
	
	
	// 4. Compute for the summation of all the product of grade and units
	float totalProdGradeUnits;
	
	for (i=0; i<courseNum; i++) {
		totalProdGradeUnits += prodUnitGrade[i];
	}
	
	// Checking:
	/* cout << "\n\nTotal Product of Units and Grades is: "<< totalProdGradeUnits;
	*/
		
	// 5. Final GWA
	float finalGWA;
	finalGWA = totalProdGradeUnits/sumCourseUnits;
	cout << "\nFinal GWA is: " << finalGWA;	
	
	
return 0;
}
