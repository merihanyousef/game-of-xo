#include<iostream>
#include<string>
using namespace std;

char arr[3][3] = { ' 1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'x';
void print(){
	string ko;
	getline(cin, ko);

	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << " " << arr[i][j] << " |";
		}
		cout << endl;
	}
}int x;
void play()
{
	char pos;
	cout << " enter your position player :" << player << endl;
	cin >> x;
	cout << " press enter to continue" << endl;
	string f;
	getline(cin, f);
	switch (x)
	{
	case 1:
		pos = '1';
		break;
	case 2:
		pos = '2';
		break;
	case 3:
		pos = '3';
		break;
	case 4:
		pos = '4';
		break;
	case 5:
		pos = '5';
		break;
	case 6:
		pos = '6';
		break;
	case 7:
		pos = '7';
		break;
	case 8:
		pos = '8';
		break;
	case 9:
		pos = '9';
		break;
	}int count = 0;

	bool ok = false;
	if (x >= 1 && x <= 9)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (arr[i][j] == pos)
				{
					arr[i][j] = player;
					ok = true;
				}
			}
		}

		if (ok != true)
		{
			cout << "This cell is not empty, please choose empty cell" << " " << player << endl;
			return; // return to not switch to the other player
		}

		if (player == 'x')
			player = 'o';
		else
			player = 'x';
	}

	else if (x < 0)
	{
		cout << "not valid" << endl;
	}

	else {
		cout << "invalid number enter numbers between 1and 9" << endl;
	}

}
char winner() {
	if (arr[0][0] == 'x' && arr[0][1] == 'x' && arr[0][2] == 'x' || arr[0][0] == 'x' && arr[1][1] == 'x' && arr[2][2] == 'x' ||
		arr[0][0] == 'x' && arr[1][0] == 'x' && arr[2][0] == 'x' || arr[0][2] == 'x' && arr[1][2] == 'x' && arr[2][2] == 'x' ||
		arr[0][2] == 'x' && arr[1][1] == 'x' && arr[2][0] == 'x' || arr[2][0] == 'x' && arr[2][1] == 'x' && arr[2][2] == 'x' ||
		arr[1][0] == 'x' && arr[1][1] == 'x' && arr[1][2] == 'x' || arr[0][1] == 'x' && arr[1][1] == 'x' && arr[2][1] == 'x')
		return 'x';
	else if (arr[0][0] == 'o' && arr[0][1] == 'o' && arr[0][2] == 'o' || arr[0][0] == 'o' && arr[1][1] == 'o' && arr[2][2] == 'o' ||
		arr[0][0] == 'o' && arr[1][0] == 'o' && arr[2][0] == 'o' || arr[0][2] == 'o' && arr[1][2] == 'o' && arr[2][2] == 'o' ||
		arr[0][2] == 'o' && arr[1][1] == 'o' && arr[2][0] == 'o' || arr[2][0] == 'o' && arr[2][1] == 'o' && arr[2][2] == 'o' ||
		arr[1][0] == 'o' && arr[1][1] == 'o' && arr[1][2] == 'o' || arr[0][1] == 'o' && arr[1][1] == 'o' && arr[2][1] == 'o')
	{
		return 'o';
	}

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] != 'x'&&arr[i][j] != 'o')
			{
				count++;
			}
		}
	} if (count == 0)
	{
		return 'p';
	}


	return 'f';

}
char pos;
void main() {
	cout << "             Tic Tac Toe  Game          " << endl;
	cout << endl;
	cout << "Made by :" << endl;
	cout << "****Conquers***" << endl;
	cout << endl;
	cout << endl;
	cout << "   PRESS ENTER TO START THE GAME    " << endl;
	cout << endl;
	cout << "enjoyyyy" << ";)" << endl;

	while (winner() == 'f')
	{
		print();
		play();
	}


	print();
	if (winner() == 'p')
	{
		cout << " there is no winner " << endl;
	}
	else

	{
		cout << "  the winner is  " << winner() << endl;
	}
	system("pause");
}