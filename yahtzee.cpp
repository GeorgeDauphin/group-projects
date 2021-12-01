#include <iostream>

using namespace std;

void swap(int &a, int &b);

void insertion(int dice[]);

bool trip(int dice1[]);

bool quad(int dice2[]);

bool full(int dice3[]);

bool small(int dice4[]);

bool large(int dice5[]);

bool yahtzee(int dice6[]);

int chance(int dice7[]);

int main()
{
	string player1;
	string player2;
	int pp1 = 0;
	int pp2 = 0;
	char con;

	cout << "Enter in the first player's name: ";
	cin >> player1;

	cout << "Enter in the second player's name: ";
	cin >> player2;

	for(int i = 0; i < 13; i++)
	{
		cout << endl << "Now it's " << player1 << "'s turn." << endl;

		srand(time(NULL));

		int roll1[5];

		for(int i = 0; i < 5; i++)
		{
			roll1[i] = rand()%6+1;

			cout << roll1[i] << ", ";
		}

		cout << endl << "Dice sorted: ";

		insertion(roll1);

		for(int i = 0; i < 5; i++)
		{
			cout << roll1[i] << ", ";
		}

		cout << endl;

		if(yahtzee(roll1)== true)
		{
			cout << "You have rolled a YAHTZEE!!!!!" << endl;
			pp1 = pp1+50;
			cout << "50 points!" << endl;
		}
		else if(quad(roll1) == true)
		{
	    	cout << "You have rolled a 4 of a kind" << endl;
			cout << chance(roll1) << " points!" << endl;
			pp1 = pp1 + chance(roll1);
	  	}
		else if(trip(roll1) ==true)
		{
	    	cout << "You have rolled a 3 of a kind" << endl;
			cout << chance(roll1) << " points!" << endl;
			pp1 = pp1 + chance(roll1);
		}
	  	else if(large(roll1) == true)
	 	{
			cout << "You have rolled a large straight" << endl;
			pp1 = 40 + pp1;
			cout << "40 points!" << endl;
		}
	  	else if(small(roll1) == true)
	  	{
	    	cout << "You have rolled a small straight" << endl;
			pp1 = 30+pp1;
			cout << pp1 << " points!" << endl;
	  	}
		else if(full(roll1) == true)
		{
			cout << "You have rolled a full house" << endl;
			pp1 = pp1+25;
			cout << "25 points!" << endl;
		}
		else
		{
			cout << "You have rolled noting" << endl;
			cout << chance(roll1) << " points!" << endl;
			pp1 = pp1 + chance(roll1);
		}

		cout << endl << "Now it's " << player2 << "'s turn." << endl;

		int roll2[5];

		for(int i = 0; i < 5; i++)
		{
			roll2[i] = rand()%6+1;

			cout << roll2[i] << ", ";
		}

		cout << endl << "Dice sorted: ";

		insertion(roll2);

		for(int i = 0; i < 5; i++)
		{
			cout << roll2[i] << ", ";
		}

		cout << endl;

		if(yahtzee(roll2)== true)
		{
			cout << "You have rolled a YAHTZEE!!!!!" << endl;
			pp2 = pp2 + 50;
			cout << "50 points!" << endl;
		}
	  	else if(quad(roll2) == true)
	  	{
	    	cout << "You have rolled a 4 of a Kind." << endl;
			cout << chance(roll2) << " points!" << endl;
			pp2 = pp2 + chance(roll2);
	  	}
	  	else if(full(roll2) == true)
		{
			cout << "You have rolled a full house" << endl;
			pp2 = pp2+25;
			cout << "25 points!" << endl;
		}
	  	else if(trip(roll2) == true)
	  	{
	    	cout << "You have rolled a 3 of a Kind." << endl;
			cout << chance(roll2) << " points!" << endl;
			pp2 = pp2 + chance(roll2);
	  	}
	  	else if(large(roll2) == true)
	  	{
			cout << "You have rolled a large straight" << endl;
			pp2 = 40 + pp2;
			cout << "40 points!" << endl;
		}
	  	else if(small(roll2) == true)
	  	{
	    	cout << "You have rolled a small straight" << endl;
			pp2 = 30+pp2;
			cout << "30 points!" << endl;
	  	}
		else
		{
			cout << "You have rolled nothing" << endl;
			cout << chance(roll2) << " points!" << endl;
			pp2 = pp2 + chance(roll2);
		}

		cout << endl << player1 << " has " << pp1 << " points." << endl;
		cout << player2 << " has " << pp2 << " points." << endl << endl;
		cout << "Are you ready to play the next round? (y/n): ";
		cin >> con;
		while(con != 'y')
		{
			cout << "how about now: ";
			cin >> con;
		}
	}
	cout << "Thanks for playing" << endl;
	return 0;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void insertion(int dice[])
{
	for(int i = 1; i < 5; i++)
	{
		int j = i;

		while((j > 0) && (dice[j-1] < dice[j]))
		{
			swap(dice[j],dice[j-1]);
			j = j - 1;
		}
	}
}

bool trip(int dice1[])
{
	if((dice1[0]==dice1[2]) || (dice1[1] == dice1[3]) || (dice1[2] == dice1[4]))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool quad(int dice2[])
{
	if(dice2[0]==dice2[3] || dice2[1] == dice2[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool full(int dice3[])
{
	if((dice3[0]==dice3[2] && dice3[3]==dice3[4]) || (dice3[0]==dice3[1] && dice3[2]==dice3[4]))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool small(int dice4[])
{
	if()
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool large(int dice5[])
{
	if(dice5[0] == dice5[1]+1 && dice5[1] == dice5[2]+1 && dice5[2] == dice5[3]+1 && dice5[3] == dice5[4]+1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool yahtzee(int dice6[])
{
	if(dice6[0]==dice6[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

int chance(int dice7[])
{
	int tot = 0;
	for (int i = 0; i < 5; i++)
	{
		tot = tot + dice7[i];
	}
	return tot;
}
