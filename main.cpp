// Written by Brandon Holland
// 2-Player Game of Tic-Tac-Toe

#include <iostream>

using namespace std;

char game[9] = {'1','2','3','4','5','6','7','8','9'};
bool complete = true;

void draw_board()
{
	cout << "                   "<< game[0] <<" | " << game[1] <<" | " << game[2] <<" " <<  endl;
	cout << "                  ---|---|--- " << endl;
	cout << "                   "<< game[3] <<" | " << game[4] <<" | " << game[5] <<" " <<  endl;
	cout << "                  ---|---|--- " << endl;
	cout << "                   "<< game[6] <<" | " << game[7] <<" | " << game[8] <<" " <<  endl;
	cout << endl;
}

void player_one(int sel)
{
	if(sel == 1 && game[0] != 'O')
	{
		game[0] = 'X';
	}
	if(sel == 2 && game[1] != 'O')
	{
		game[1] = 'X';
	}
	if(sel == 3 && game[2] != 'O')
	{
		game[2] = 'X';
	}
	if(sel == 4 && game[3] != 'O')
	{
		game[3] = 'X';
	}
	if(sel == 5 && game[4] != 'O')
	{
		game[4] = 'X';
	}
	if(sel == 6 && game[5] != 'O')
	{
		game[5] = 'X';
	}
	if(sel == 7 && game[6] != 'O')
	{
		game[6] = 'X';
	}
	if(sel == 8 && game[7] != 'O')
	{
		game[7] = 'X';
	}
	if(sel == 9 && game[8] != 'O')
	{
		game[8] = 'X';
	}
}

void player_two(int sel)
{
	if(sel == 1 && game[0] != 'X')
	{
		game[0] = 'O';
	}
	if(sel == 2 && game[1] != 'X')
	{
		game[1] = 'O';
	}
	if(sel == 3 && game[2] != 'X')
	{
		game[2] = 'O';
	}
	if(sel == 4 && game[3] != 'X')
	{
		game[3] = 'O';
	}
	if(sel == 5 && game[4] != 'X')
	{
		game[4] = 'O';
	}
	if(sel == 6 && game[5] != 'X')
	{
		game[5] = 'O';
	}
	if(sel == 7 && game[6] != 'X')
	{
		game[6] = 'O';
	}
	if(sel == 8 && game[7] != 'X')
	{
		game[7] = 'O';
	}
	if(sel == 9 && game[8] != 'X')
	{
		game[8] = 'O';
	}
}

void test_win()
{
	if(game[0] == 'X' && game[1] == 'X' && game[2] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[3] == 'X' && game[4] == 'X' && game[5] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[6] == 'X' && game[7] == 'X' && game[8] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[0] == 'X' && game[3] == 'X' && game[6] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[1] == 'X' && game[4] == 'X' && game[7] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[2] == 'X' && game[5] == 'X' && game[8] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[0] == 'X' && game[4] == 'X' && game[8] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[2] == 'X' && game[4] == 'X' && game[6] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[0] == 'O' && game[1] == 'O' && game[2] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[3] == 'O' && game[4] == 'O' && game[5] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[6] == 'O' && game[7] == 'O' && game[8] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[0] == 'O' && game[3] == 'O' && game[6] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[1] == 'O' && game[4] == 'O' && game[7] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[2] == 'O' && game[5] == 'O' && game[8] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[0] == 'O' && game[4] == 'O' && game[8] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
	if(game[2] == 'O' && game[4] == 'O' && game[6] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
	}
}

int main()
{
	cout << endl;
	cout << endl;
	cout << "                   TIC-TAC-TOE" << endl;
	cout << endl;
	cout << "          WRITTEN BY: BRANDON HOLLAND" << endl;

	cout << endl;
	cout << endl;

	cout << "               Player 1: You are X" << endl;
	cout << "               Player 2: You are O" << endl;
	cout << endl;

	draw_board();

	int one;

	cout << "Player 1, Choose a Square!" << endl;
	cin >> one;

	player_one(one);

	draw_board();

	cout << "Player 2, Choose a Square!" << endl;
	cin >> one;

	player_two(one);

	draw_board();

	cout << "Player 1, Choose a Square!" << endl;
	cin >> one;

	player_one(one);

	draw_board();

	cout << "Player 2, Choose a Square!" << endl;
	cin >> one;

	player_two(one);

	draw_board();

	cout << "Player 1, Choose a Square!" << endl;
	cin >> one;

	player_one(one);

	draw_board();

	test_win();

	if(complete)
	{
		cout << "Player 2, Choose a Square!" << endl;
		cin >> one;

		player_two(one);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Square!" << endl;
		cin >> one;

		player_one(one);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Square!" << endl;
		cin >> one;

		player_two(one);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Square!" << endl;
		cin >> one;

		player_one(one);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "IT'S A TIE!" << endl;
	}

	return 0;
}