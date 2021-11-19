#include<iostream>

using namespace std;

void swap(int &a, int &b);

void incersion(int A[]);

bool check(int A[]);

bool quad(int A[]);

bool full(int A[]);

bool small(int A[]);

bool large(int A[]);

bool yahtzee(int A[]);

int chance(int A[]);

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
			cout << roll[i] << endl;
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
			cout << pp2 "points!" << endl;
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
			cout << pp2 "points!" << endl;
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
		cout << "Are you ready to play the next round? (y/n)"
		cin >> con;
		while(con != y)
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

void incersion(int A[])
{
	for(int i = 1; i < 5; i++)
	{
		int j = i;

		while((j > 0) && (A[j-1] < A[j]))
		{
			swap(A[j],A[j-1]);
			j = j - 1;
		}
	}
}

bool trip(A[])
{
	if(A[0]==A[2] || A[1] == A[3] || A[2] == A[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool quad(A[])
{
	if(A[0]==A[3] || A[1] == A[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool full(A[])
{
	if(A[0]==A[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool small(A[])
{
	if(A[0]==A[0+3] || A[1] == A[1+3] || A[2] == A[2+3])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool large(A[])
{
	if(A[0]==A[3] || A[1] == A[4])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool yahtzee(A[])
{
	if(A[0]==A[4])
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
	return A[0]+A[1]+A[2]+A[3]+A[4];
}
