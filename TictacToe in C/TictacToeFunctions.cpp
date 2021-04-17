#include<iostream>
#include"TicTacToe.h"
using namespace std;

int checkForWinner(char arr[][3], char ch)
{
	//*********
	int counterR = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == ch)
			{
				counterR = counterR + 1;
			}
		}
		if (counterR == 3)
		{
			return 1;
		}
		counterR = 0;
	}

	//*********
	int counterC = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[j][i] == ch)
			{
				counterC = counterC + 1;
			}
		}
		if (counterC == 3)
		{
			return 1;
		}
		counterC = 0;
	}
	//********
	int counterD = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
			{
				if (arr[i][j] == ch)
				{
					counterD++;
				}
			}
		}

	}
	if (counterD == 3)
	{
		return 1;
	}

	//*******
	int i = 0;
	int counterRD = 0;
	for (int j = 2; j >= 0; j--)
	{
		if (arr[i][j] == ch)
		{
			counterRD++;
		}
		i++;
	}
	if (counterRD == 3)
	{
		return 1;
	}

}	//******

void printBoard(char arr[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}