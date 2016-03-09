/*
Multi-Week Grade Tracker Program
Program Created by: Little M Programming
On: 2/27/2015
Last Edited: 6/16/15
*/



#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void lettergrade(double); //function protype




int main()
{


	int n, assign;
	int * pointsR = nullptr;
	int * pointsT = nullptr;
	double total = 0.0, total2 = 0.0, avg1 = 0.0, avg2 = 0.0, finalP, weeks;
	string userName, course, cont;


	ofstream outputGrades;
	outputGrades.open("CourseGrades.txt"); // opens a text file for saving user information

	cout << "\t\t--------------------------------------------------- \n";
	cout << "\n\t\tWelcome to the Multi-Week Grade Tracker Program! \n\t\tBy Little M Programming\n" << endl; // Program greeting 
	cout << "\t\t--------------------------------------------------- \n";
	cout << "\n\n\n" << endl;


	cout << "Please, enter your name: \n"; // asking for user name
	cin >> userName; // User enters name

	cout << "\n" << endl;

	/*user inputs course name*/
	cout << userName << ", enter the Name of Course, you want the letter grade in: \n";
	cin >> course;
	cout << "\n" << endl;

	outputGrades << course << " course " << endl; // inputs course name into text file 

	/*user inputs the amount of weeks*/
	cout << userName << ", how many weeks would you like, to enter for " << course << " course? ";
	cin >> weeks;

	outputGrades << weeks << " week(s)\n" << endl; // inputs weeks amount into text file 

	cout << "\n";

	for (int count = 0; count < weeks; count++)
	{
		cout << "\n";
		cout << "Week #" << count + 1 << "\n--------- \n";

		outputGrades << "Week #: " << count + 1 << endl;

		cout << "How many assignments would you like to enter? ";
		cin >> assign;

		outputGrades << assign << " assignments \n" << endl;

		cout << "\n";

		pointsR = new (nothrow) int[assign];
		if (pointsR == nullptr)
			cout << "Error: memory could not be allocated";

		pointsT = new (nothrow) int[assign];
		if (pointsT == nullptr)
			cout << "Error: memory could not be allocated";
		else
		{
			for (n = 0; n < assign; n++)
			{
				cout << "Enter the Received score for Assignment #" << n + 1 << ": "; //User enters their received grade
				cin >> pointsR[n];

				cout << "Enter the Total score for Assignment #" << n + 1 << ": "; // User enters the total score of the assignment 
				cin >> pointsT[n];

				cout << "\n";

				/*Calculates the total points*/
				total += pointsR[n];
				total2 += pointsT[n];

				//Tells output file what to saved in text file

				outputGrades << pointsR[n] << " Points recieved entered " << endl;
				outputGrades << pointsT[n] << " Points Total entered \n" << endl;


			}
		}



	} // end of for loop

	 

		cout << fixed << showpoint << setprecision(2) << endl;

		cout << "\n\n" << endl;


		/*shows the total information */
		cout << userName << ", here is your grade for " << course << "\n";
		cout << "------------------------------------ \n";
		cout << total << " points received " << "out of " << total2 << " Total points." << endl;


			/*
		cout << "Total Points received: " << total;
		cout << "\n" << endl;
		cout << "Out of Total points: " << total2 << endl;
		cout << "\n" << endl;
*/
		finalP = total / total2;// the grade average is found by diving points recevied by total points


		cout << "Your Grade Percentage is " << finalP << "%" << endl; // Show the grade percentage
		
		lettergrade(finalP); // pulls the function to tell the user his/her letter grade



		cout << "\n" << endl;


		//Tells output file what to saved in text file
		outputGrades << total << " Points received for " << course << endl;
		outputGrades << total2 << " Total Points for " << course << endl;
		outputGrades << finalP << " Grade Percentage " << endl;
		outputGrades.close(); // stops the program from writing in text file

		
		// clears array memory
		delete[] pointsR;
		delete[] pointsT;



	system("pause");
	return 0;

} // end of Main function

// function that takes the grade percentage 
void lettergrade(double finalP)
{


		if (finalP >= 0.90) // if Grade Percentage is greater than 0.90 points. 
			cout << "Your Grade letter is an A! Congrats!";
		else if (finalP <= 0.90 && finalP >= 0.80)  // if Grade Percentage is less than 90, and greater than 80
			cout << "Your Grade letter is a B. Good work!"; 
		else if (finalP <= 0.80 && finalP >= 0.70)
			cout << "Your Grade letter is a C. Don't be too upset, at least you passed.";
		else if (finalP <= 0.70 && finalP >= 0.60)
			cout << "Your Grade letter is a D. ";
		else
			cout << "I'm Sorry, Your Grade letter is a F! Don't be discourage, you just need to try harder next time. ";



}



