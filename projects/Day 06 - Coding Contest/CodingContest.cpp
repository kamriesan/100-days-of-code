// By: @kamriesan_
// Coding Contest
#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	char ans;
	
	do {
		int teamNum;
		cout << "-------------------------------\n";
		cout << "CODING CHALLENGE RESULTS";
		cout << "\nNumber of Teams (6-10): "; cin >> teamNum;
		cout << endl << "ENTER TEAM DETAILS BELOW..." << endl;
		
		// Number of Teams loop
		int i;
		float teamScore[teamNum];
		string teamName[teamNum], teamCourse[teamNum];
		
		for (i=0; i<teamNum; i++) {
			cout << "\nTeam "<< i+1 << "-------------------------";
			cout << "\nTeam Name(No space): "; cin >> teamName[i];
			cout << "Course(IT/CS/IS/CE): "; cin >> teamCourse[i];	
			cout << "Team Score(50..100): "; cin >> teamScore[i];	
		}
		
		
		// Compute Average Score
		float sumTeamScore=0;
		double aveTeamScore;
		cout << "\n----- CONTEST STATISTICS -----";
	
		for (i=0; i<=teamNum; i++) {
			sumTeamScore += teamScore[i];
		}
		aveTeamScore = sumTeamScore / teamNum;
		cout << "\nAverage Team Score: " << setprecision(5) << aveTeamScore;
		
		
		// Print Champion
		int max=teamScore[0], idxMax;
		
		cout << "\n\nChampion:\n";
		for (i=0; i<teamNum; i++) {
    		if(teamScore[i]>max) {
    			max = teamScore[i];
				idxMax = i;
			}
		}
		cout << "*" << teamName[idxMax] << " (" << teamCourse[idxMax] << "), " << teamScore[idxMax] << " pts\n";
	
		
		// For loop Above Average Scores
		int idxAboveAve;
		
		cout << "\nTeams with Above Average Scores:\n";
		for (i=0; i<teamNum; i++) {
			if (teamScore[i]>aveTeamScore && i!=idxMax) {
				idxAboveAve = i;
				cout << "*" << teamName[idxAboveAve] << " (" << teamCourse[idxAboveAve] << "), " << teamScore[idxAboveAve] << " pts\n";
			}
		} 
		
		
		do {
			cout << "\nTry Again?(y/n) ";
			cin >> ans; cout << endl;
		} while(!((ans == 'y') || (ans == 'n')));
		
	} while(ans == 'y');
	
	return 0;
}

/* SAMPLE DIALOG:
-------------------------------
CODING CHALLENGE RESULTS

Number of Teams(6-10): 6

ENTER TEAM DETAILS BELOW...

Team 1-------------------------
Team Name(No space): HariCode
Course(IT/CS/IS/CE): CE
Team Score(50..100): 65

Team 2-------------------------
Team Name(No space): HariDevs
Course(IT/CS/IS/CE): CS
Team Score(50..100): 90

Team 3-------------------------
Team Name(No space): JavaNiceDay
Course(IT/CS/IS/CE): IS
Team Score(50..100): 75

Team 4-------------------------
Team Name(No space): ITwizards
Course(IT/CS/IS/CE): IT
Team Score(50..100): 70

Team 5-------------------------
Team Name(No space): DigitalKraze
Course(IT/CS/IS/CE): CS
Team Score(50..100): 85

Team 6-------------------------
Team Name(No space): BinaryCode
Course(IT/CS/IS/CE): IS
Team Score(50..100): 60

----- CONTEST STATISTICS -----
Average Team Score : 74.16

Champion:
* HariDevs (CS), 90 pts

Teams with Above Average Scores:

* JavaNiceDay (IS), 75 pts
* DigitalKraze (CS), 85 pts

Try Again?(y/n) n
-------------------------------*/
