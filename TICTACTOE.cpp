#include <iostream>
#include <string>
using namespace std;
void Table(char A, char B, char C, char D, char E, char F, char G, char H, char l);
int X_O();
int main()
{
	int flag = 0, turn = 0, Move_X = 0, Move_O = 0, xwin = 0, owin = 0, mode;
	char A = '1', B = '2', C = '3', D = '4', E = '5', F = '6', G = '7', H = '8', l = '9';

	do
	{

		cout << "\n\t\t\t\t\t<--------WELCOME TO TIC TAC TOE-------->";
		cout << endl
			 << endl;
		cout << "Enter 1 to Play the Game" << endl
			 << "----->";
		cin >> mode;

		flag = 0, turn = 0, Move_X = 0, Move_O = 0;
		system("CLS");
		if (mode == 1)
			turn = X_O();
		A = '1', B = '2', C = '3', D = '4', E = '5', F = '6', G = '7', H = '8', l = '9';
		char again;
		while (1)
		{
			Move_X = 0;
			while (turn == 0)
			{
				if (mode == 1)

					Table(A, B, C, D, E, F, G, H, l);
				cout << "<---Choose Your Move X!--->: ";
				cin >> Move_X;
				system("CLS");
				if (Move_X != 9 && Move_X != 8 && Move_X != 7 && Move_X != 6 && Move_X != 5 && Move_X != 4 && Move_X != 3 && Move_X != 2 && Move_X != 1)
				{
					cout << "Invalid Move_X" << endl;
					continue;
				}
				else if (Move_X == 1 && A != 'X' && A != 'O')
				{
					A = 'X';
					turn++;
				}
				else if (Move_X == 2 && B != 'X' && B != 'O')
				{
					B = 'X';
					turn++;
				}
				else if (Move_X == 3 && C != 'X' && C != 'O')
				{
					C = 'X';
					turn++;
				}
				else if (Move_X == 4 && D != 'X' && D != 'O')
				{
					D = 'X';
					turn++;
				}
				else if (Move_X == 5 && E != 'X' && E != 'O')
				{
					E = 'X';
					turn++;
				}
				else if (Move_X == 6 && F != 'X' && F != 'O')
				{
					F = 'X';
					turn++;
				}
				else if (Move_X == 7 && G != 'X' && G != 'O')
				{
					G = 'X';
					turn++;
				}
				else if (Move_X == 8 && H != 'X' && H != 'O')
				{
					H = 'X';
					turn++;
				}
				else if (Move_X == 9 && l != 'X' && l != 'O')
				{
					l = 'X';
					turn++;
				}
				else
					cout << "**** Box Is already filled ****" << endl;
			}
			if ((A == B && B == C) || (D == E && E == F) || (G == H && H == l) || (A == D && D == G) || (B == E && E == H) || (C == F && F == l) || (A == E && E == l) || (G == E && E == C))
			{
				if (mode == 1)
				{
					system("CLS");
					Table(A, B, C, D, E, F, G, H, l);
					cout << endl
						 << "X is the winner" << endl;
					xwin++;
					break;
				}
			}
			if (A != '1' && B != '2' && C != '3' && D != '4' && E != '5' && F != '6' && G != '7' && H != '8' && l != '9')
			{
				system("CLS");
				Table(A, B, C, D, E, F, G, H, l);
				cout << "<------It's a draw------>" << endl;
				break;
			}

			while (turn == 1)
			{
				if (mode == 1)
				{

					Table(A, B, C, D, E, F, G, H, l);
					cout << "Choose Your Move O!: ";
					cin >> Move_O;
					system("CLS");
					if (Move_O != 9 && Move_O != 8 && Move_O != 7 && Move_O != 6 && Move_O != 5 && Move_O != 4 && Move_O != 3 && Move_O != 2 && Move_O != 1)
					{
						cout << "Invalid Move_X" << endl;
						continue;
					}
					else if (Move_O == 1 && A != 'X' && A != 'O')
					{
						A = 'O';
						turn--;
					}
					else if (Move_O == 2 && B != 'X' && B != 'O')
					{
						B = 'O';
						turn--;
					}
					else if (Move_O == 3 && C != 'X' && C != 'O')
					{
						C = 'O';
						turn--;
					}
					else if (Move_O == 4 && D != 'X' && D != 'O')
					{
						D = 'O';
						turn--;
					}
					else if (Move_O == 5 && E != 'X' && E != 'O')
					{
						E = 'O';
						turn--;
					}
					else if (Move_O == 6 && F != 'X' && F != 'O')
					{
						F = 'O';
						turn--;
					}
					else if (Move_O == 7 && G != 'X' && G != 'O')
					{
						G = 'O';
						turn--;
					}
					else if (Move_O == 8 && H != 'X' && H != 'O')
					{
						H = 'O';
						turn--;
					}
					else if (Move_O == 9 && l != 'X' && l != 'O')
					{
						l = 'O';
						turn--;
					}
					else
						cout << "<----Box is already filled---->" << endl;
				}
			}
			if ((A == B && B == C) || (D == E && E == F) || (G == H && H == l) || (A == D && D == G) || (B == E && E == H) || (C == F && F == l) || (A == E && E == l) || (G == E && E == C))
			{
				if (mode == 1)
				{
					system("CLS");
					Table(A, B, C, D, E, F, G, H, l);
					cout << endl
						 << "O is the winner" << endl;
					xwin++;
					break;
				}
			}
			if (A != '1' && B != '2' && C != '3' && D != '4' && E != '5' && F != '6' && G != '7' && H != '8' && l != '9')
			{
				system("CLS");
				Table(A, B, C, D, E, F, G, H, l);
				cout << "<------It's a draw------>" << endl;
				break;
			}
		}
		cout << "The Game has ended" << endl;

		do
		{
			cout << "Enter P to play again or Q to quit";
			cin >> again;
		} while (again != 'p' && again != 'P' && again != 'Q' && again != 'q');
		if (again == 'Q' || again == 'q')
			break;
		system("CLS");

	} while (true);
}

void Table(char A, char B, char C, char D, char E, char F, char G, char H, char l)
{
	cout << " ________ ________ ________\n|        |        |        |\n|   " << A << "    |   " << B << "    |   " << C << "    |\n|________|________|________|";
	cout << "\n|        |        |        |\n|   " << D << "    |   " << E << "    |   " << F << "    |\n|________|________|________|";
	cout << "\n|        |        |        |\n|   " << G << "    |   " << H << "    |   " << l << "    |\n|________|________|________|\n";
}

int X_O()
{
	char symbol;
	do
	{
		cout << "       Who goes first? (X or O)---->: ";
		cin >> symbol;
		if (symbol == 'X' || symbol == 'x')
			return 0;
		else if (symbol == 'O' || symbol == 'o')
			return 1;
	} while (symbol != 'X' || symbol != 'x' || symbol != 'O' || symbol != 'o');
}
