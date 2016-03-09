/*
QUIZZER PROGRAM by Little M Programming
DATE CREATED: 5/18/2015
LAST EDITED: 5/18/2015

*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{

	string ques1, ans1, ques2, ans2, guess, ques3, ans3, ques4, ans4, ques5, ans5, ques6, ans6, ques7, ans7, ques8, ans8, ques9, ans9, ques10, ans10;



	ifstream inFile; //inFile is the file name for the program
	inFile.open("info.txt");

	//check for error
	if (inFile.fail())
	{
		cerr << "Error: Can't open file. The text file may be missing.\n\n A text file named info, should be in the same directory as this program. If you can't find the text file, report this error at littlemprogramming.com" << endl;
		exit(1); //closes program
	}


	//Pulls each line from the text file
	getline(inFile, ques1);
	getline(inFile, ans1);

	getline(inFile, ques2);
	getline(inFile, ans2);

	getline(inFile, ques3);
	getline(inFile, ans3);

	getline(inFile, ques4);
	getline(inFile, ans4);

	getline(inFile, ques5);
	getline(inFile, ans5);

	getline(inFile, ques6);
	getline(inFile, ans6);

	getline(inFile, ques7);
	getline(inFile, ans7);

	getline(inFile, ques8);
	getline(inFile, ans8);

	getline(inFile, ques9);
	getline(inFile, ans9);

	getline(inFile, ques10);
	getline(inFile, ans10);



	cout << "\t\t--------------------------------------------------- \n";
	cout << "\n\t\tWelcome to the Quizzer Program! \n\t\tBy Litte M Programming\n" << endl; // Program greeting 
	cout << "\t\t--------------------------------------------------- \n";
	cout << "\n\n\n" << endl;





	cout << "Guess the answers to the questions.\n" << endl;

	cout << ques2<< endl;
	cin >> guess;
	if (guess != ans2)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans2 << endl;

	}
	else {

		cout << "You're Correct! Good Job!";

	}

	cout << "\n" << endl;


	cout << ques5 << endl;
	cin >> guess;
	if (guess != ans5)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans5 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;


	cout << ques1 << endl;
	cin >> guess;
	if (guess != ans1)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans1 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;

	cout << ques7 << endl;
	cin >> guess;
	if (guess != ans7)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans7 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;

	cout << ques4 << endl;
	cin >> guess;
	if (guess != ans4)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans4 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;

	cout << ques6 << endl;
	cin >> guess;
	if (guess != ans6)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans6 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;

	cout << ques3 << endl;
	cin >> guess;
	if (guess != ans3)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans3 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;

	cout << ques8 << endl;
	cin >> guess;
	if (guess != ans8)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans8 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;


	cout << ques10 << endl;
	cin >> guess;
	if (guess != ans10)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans10 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;

	cout << ques9 << endl;
	cin >> guess;
	if (guess != ans9)
	{
		cout << "\nSorry, the guess you enter is incorrect. the answer is: " << ans9 << endl;
	}
	else {

		cout << "You're Correct! Good Job!";

	}
	cout << "\n" << endl;








	inFile.close(); 


	return 0;









}