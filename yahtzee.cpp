#include<iostream>

using namespace std;

void swap(int &a, int &b);

void incersion(int dice[]);

bool trip(int dice[]);

bool quad(int dice[]);

bool full(int dice[]);

bool small(int dice[]);

bool large(int dice[]);

bool yahtzee(int dice[]);

int chance(int dice[]);

int main()
{
	string player1;
	string player2;
	int pp1 = 0;
	int pp2 = 0;
	char con;

	cout << "Enter in the first player's name: " << endl;
	cin >> player1;

	cout << " Enter in the secind player's name: " << endl;
	cin >> player2;

	for(int i = 0; i > 13; i++)
	{
		cout << "Now it's " << player1 << "'s turn." << endl;

		srand(time(NULL));

		int roll1[5];

		for(int i = 0; i < 5; i++)
		{
			roll1[i] = rand()%6+1;

			cout << roll1[i] << endl;
		}

		cout << "Dice sorted: ";

		incersion(roll1);

		for(int i = 0; i < 5; i++)
		{
			cout << roll1[i] << endl;
		}

	  if(trip(roll1) == true)
	  {
	    cout << "You have rolled a 3 of a Kind." << endl;
			chance(roll1) == pp1;
			cout << pp1 << "points!" << endl;
	  }
	  else if(quad(roll1) == true)
	  {
	    cout << "You have rolled a 4 of a Kind." << endl;
			chance(roll1) == pp1;
			cout << pp1 << "points!" << endl;
	  }
	  else if(small(roll1) == true)
	  {
	    cout << "You have rolled a small straight" << endl;
			pp1 = 30+pp1;
			cout << pp1 << "points!" << endl;
	  }
	  else if(large(roll1) == true)
	  {
			cout << "You have rolled a large straight" << endl;
			pp1 = 40+ pp1;
			cout << pp1 << "points!" << endl;
		}
		else if(full(roll1) == true)
		{
			cout << "You have rolled a full house" << endl;
			pp1 = pp1+25;
			cout << pp1 << "points!" << endl;
		}
		else if(yahtzee(roll1)== true)
		{
			cout << "You have rolled a YAHTZEE!!!!!" << endl;
			pp1 = pp1+50;
			cout << pp1 << "points!" << endl;
		}
		else
		{
			cout << "You have rolled nothing." << endl;
			chance(roll1) == pp1;
			cout << pp1 << "points!" << endl;
		}

		cout << "Now it's " << player2 << "'s turn." << endl;

		int roll2[5];

		for(int i = 0; i < 5; i++)
		{
			roll2[i] = rand()%6+1;

			cout << roll2[i] << endl;
		}

		cout << "Dice sorted: ";

		incersion(roll2);

		for(int i = 0; i < 5; i++)
		{
			cout << roll2[i] << endl;
		}

	  if(trip(roll2) == true)
	  {
	    cout << "You have rolled a 3 of a Kind." << endl;
			chance(roll2[]) == pp2;
			cout << pp2 << "points!" << endl;
	  }
	  else if(quad(roll2) == true)
	  {
	    cout << "You have rolled a 4 of a Kind." << endl;
			chance(roll2) == pp2;
			cout << pp2 << "points!" << endl;
	  }
	  else if(small(roll2) == true)
	  {
	    cout << "You have rolled a small straight" << endl;
			pp2 = 30+pp2;
			cout << pp2 << "points!" << endl;
	  }
	  else if(large(roll2) == true)
	  {
			cout << "You have rolled a large straight" << endl;
			pp2 = 40+ pp2;
			cout << pp2 << "points!" << endl;
		}
		else if(full(roll2) == true)
		{
			cout << "You have rolled a full house" << endl;
			pp2 = pp2+25;
			cout << pp2 << "points!" << endl;
		}
		else if(yahtzee(roll2)== true)
		{
			cout << "You have rolled a YAHTZEE!!!!!" << endl;
			pp2 = pp2+50;
			cout << pp2 << "points!" << endl;
		}
		else
		{
			cout << "You have rolled nothing." << endl;
			chance(roll2) == pp2;
			cout << pp2 << "points!" << endl;
		}
		cout << "Are you ready to play the next round? (y/n)";
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

void incersion(int dice[])
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

bool trip(dice[])
{
	if(dice[0]==dice[2] || dice[1] == dice[3] || dice[2] == dice[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool quad(dice[])
{
	if(dice[0]==dice[3] || dice[1] == dice[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool full(dice[])
{
	if(dice[0]==dice[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool small(dice[])
{
	if(dice[0]==dice[0+3] || dice[1] == dice[1+3] || dice[2] == dice[2+3])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool large(dice[])
{
	if(dice[0]==dice[3] || dice[1] == dice[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool yahtzee(dice[])
{
	if(dice[0]==dice[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

int chance(A[])
{
	return dice[0]+dice[1]+dice[2]+dice[3]+dice[4];
}
