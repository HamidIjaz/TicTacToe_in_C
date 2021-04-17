#include<iostream>
#include "TicTacToe.h"

using namespace std;

int main()
{
	char arr[3][3];
	char num = '-';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = num;
		}
	}
	printBoard(arr);
	cout << endl << "";


	cout << "Player 1 will choose location for 'X'\n&";
	cout << "\n player 2will choose location for O\n";
	int rowNum;
	int colNum;
	int p = 1;
	int counter1 = 1;
	int counter2 = 1;
	for (int i = 1; i <= 9; i++)
	{
		cout << "Player " << p << " 's turn \n";
		cout << "Select the location:-\n";
		cout << "Position: ";
		cin >> num;

		int ind = (num - '0') - 1;
		int rowNum = ind / 3;
		int colNum = ind % 3;
		while (arr[rowNum][colNum] == 'X' || arr[rowNum][colNum] == 'Y')
		{
			cout << "Select AGAIN:-\n";
			cout << "Position: ";
			cin >> num;
			ind = (num - '0') - 1;
			rowNum = ind / 3;
			colNum = ind % 3;
		}
		

		if (p == 1)
		{

			arr[rowNum][colNum] = 'X';

			printBoard(arr);
			if (counter1 >= 3)
			{
				int winner = checkForWinner(arr, 'X');
				if (winner == 1)
				{
					cout << "Player 1 is winner\n";
					system("pause");
					return 0;
				}
				else
				{
					cout << " ";
				}
			}
			counter1++;
		}
		if (p == 2)
		{
			arr[rowNum][colNum] = 'O';
			printBoard(arr);
			if (counter2 >= 3)
			{
				int winner = checkForWinner(arr, 'O');
				if (winner == 1)
				{
					cout << "Player 2 is winner\n";

					system("pause");
					return 0;
				}
				else
				{
					cout << " ";
				}
			}
			counter2++;

		}

		if (p == 2)
		{
			p = 1;
		}
		else
		{
			p = 2;
		}
		if (i == 9)
		{
			cout << "MATCH IS TIE\n";
			system("pause");
			return 0;
		}
	}
}
