#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float y){
if( y > 90){
    return  'A';
 }
 else if (y > 75 and y <= 90){
    return  'B';
 }
 else if (y > 60 and y <= 75){
    return  'C';
 }
 else if (y > 45 and y <= 60){
    return  'D';
 }
 else {
    return  'F';
 }
}

int main(){
	
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string Name[N];
	float score[N];	
	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
        getline(cin,Name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >>  score[i]; ;
		i++;
	}
	

	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << Name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}