// Rock Paper Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This is the first game that I have ever created in C++! --Kenneth Burchfiel, March 18, 2020
#include <iostream>
#include "../../std_lib_facilities.h" // Source: http://www.stroustrup.com/Programming/std_lib_facilities.h (without this file, the code below will not run correctly.)

int main()
{
	int playermove = 0;
	int movecount = 0;
	int playerpoints = 0;
	int aipoints = 0;
	vector<int>aimoves = { 3,1,3,2,3,3,1,2,2,3,1,2,1,3,2,1,1,3,3,3,3,1,2,3,1,1,2,2,3,1,1,3,2,3,1 };
	cout << "Let's play Rock Paper Scissors, my dude! Press 1 for Rock, 2 for Paper, and 3 for Scissors, followed by Enter. You can play for up to 35 turns.\n";
	while (cin >> playermove && movecount < 35)
	{
		switch (playermove) {
		case 1:
			if (aimoves[movecount] == 3)
			{
				cout << "Great job! You won this round!\n";
				playerpoints++;
			}
			else if (aimoves[movecount] == 2)
			{
				cout << "Sorry, you lost this round.\n";
				aipoints++;
			}
			else if (aimoves[movecount] == 1)
			{
				cout << "It's a tie!\n";
			}
			break;
		case 2:
			if (aimoves[movecount] == 1)
			{
				cout << "Great job! You won this round!\n";
				playerpoints++;
			}
			else if (aimoves[movecount] == 3)
			{
				cout << "Sorry, you lost this round.\n";
				aipoints++;
			}
			else if (aimoves[movecount] == 2)
			{
				cout << "It's a tie!\n";
			}
			break;
		case 3:
			if (aimoves[movecount] == 2)
			{
				cout << "Great job! You won this round!\n";
				playerpoints++;
			}
			else if (aimoves[movecount] == 1)
			{
				cout << "Sorry, you lost this round.\n";
				aipoints++;
			}
			else if (aimoves[movecount] == 3)
			{
				cout << "It's a tie!\n";
			}
			break;
		default: cout << "Sorry, that input wasn't recognized. Please try again.\n";
			continue;
			break;
		}
		movecount++;
		cout << "Your current points: " << playerpoints << "\n";
		cout << "CPU's points: " << aipoints << "\n";
		cout << "Rounds so far: " << movecount << "\n";
		if (movecount == 35)
		{
			if (playerpoints > aipoints)
				cout << "That's the end of the game! You win! :)";
			else if (aipoints > playerpoints)
				cout << "That's the end of the game! You lose :(";
		}

	}
}


