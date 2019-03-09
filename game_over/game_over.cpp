// game_over.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void miner_puzzle();
int main()
{
	/*int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double enginetemp = 6572.89;
	cout << "\nscore:" << score << endl;
	cout << "distance:" << distance << endl;
	cout << "playAgain:" << playAgain << endl;
	cout << "lives:" << lives << endl;
	cout << "aliens killed:" << aliensKilled << endl;
	cout << "engine temp:" << enginetemp << endl;
	int fuel;
	cout << "\n how much fuel?";
	cin >> fuel;
	cout << "fuel:" << fuel << endl;
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus:" << bonus << endl;
	cout << "game over!" << endl;
	//print ""7+3 = 10"
	cout << "7+3=" << 7 + 3 << endl;
	cout << "we will now average three game scores" << endl;
	int score1;
	int score2;
	int score3;
	cout << "type three scores" << endl;
	cin >> score1;
	cin >> score2;
	cin >> score3;
	int avg_score;
	avg_score = (score1 + score2 + score3) / 3;
	cout << "the average score is:" << avg_score << endl;
	const int ROWS = 3;
	const int COLUMNS = 3;
	char myarray[ROWS][COLUMNS] = {
		{'item', 'item', 'item'},
		{'item', 'item', 'item'},
		{'item', 'item', 'item'}
	};
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j=0; j < COLUMNS; ++j)
		{
			cout << myarray[i][j];
		}
		cout << endl;
	}*/
	miner_puzzle();
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
