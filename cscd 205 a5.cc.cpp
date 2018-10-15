//program to collect 5 student data 
#include <iostream>  
#include <string>
#include <fstream>

using namespace std;

struct Student{
	string idNumber;//variable to hold id numbers  
	string Name;	//variable to hold name
	int Age;		//variable to hold age
	string Gender;	//variable to hold gender
	double Score;	//variable to hold score
	char Grade;		//variable to hold grade
	
};


char Graderank(double score){
	char Grade;

	
	if(score >=80 && score <100){
		Grade = 'A';
	}else if (score >=70 && score <80){
		Grade = 'B';
	}else if (score >=60 && score <70){
		Grade = 'C';
	}else if (score >=50 && score < 60){
		Grade = 'D';
	}else if (score >=40 && score < 50){
		Grade = 'E';
	}else {
		Grade = 'F';
	}
	
	return Grade;
}

int main(){

	Student student[5];
	int studentScore;
	double averageScore;
	for(int i=0; i<5; i++){
		cout << "Enter Student " << i << "'s Name:";
		cin >> student[i].Name;
		cout << "Enter Student " << i << "'s Id: ";
		cin >> student[i].idNumber;
		cout << "Enter Student " << i << "'s Age: ";
		cin >> student[i].Age;
		cout << "Enter Student " << i << "'s Gender: ";
		cin >> student[i].Gender;
		cout << "Enter Student " << i << "'s Score: ";
		cin >> student[i].Score;
		student[i].Grade = Graderank(student[i].Score);
	}
	
	
	
	
	
	
	fstream fin;
	fin.open("result.txt");

	fin << "  IdNumber\tName\tAge\tGender\tScore\t\Grade" << endl;
	for(int i=0; i<5; i++){
		fin << i << " " << student[i].idNumber <<"\t\t"<<student[i].Name << "\t" << student[i].Age << "\t" << student[i].Gender<< "\t" << student[i].Score << "\t" << student[i].Grade << endl;
	}
	

	return 0;
	
	}
