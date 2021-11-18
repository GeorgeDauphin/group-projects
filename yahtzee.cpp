#include<iostream>

using namespace std;

void swap(int &a, int &b);

void incersion(int A[]);

bool trip(int a[]);

bool quad(int a[]);

bool full(int a[]);

bool small(int a[]);

bool large(int a[]);

bool yahtzee(int a[]);

int chance(int a[]);

int add(int a[]);

int main()
{
	srand(time(NULL));

	int roll[5];

	for(int i = 0; i < 5; i++)
	{
		numGen[i] = rand()%6+1;

		cout << numGen[i] << endl;
	}

	cout << "Dice sorted: ";

	incersion(numGen);

	for(int i = 0; i < 5; i++)
	{
		cout << numGen[i] << endl;
	}

  if((roll[0] == roll[2]) || (roll[1] == roll[3]) || (roll[2] == roll[4]) )
  {
    trip()
    cout << "You have rolled a 3 of a Kind." << endl << add() << " points!" << endl;
  }
  else if((roll[0] == roll[3]) || (roll[1] == roll[4]) )
  {
    cout << "You have rolled a 4 of a Kind." << endl << add() << " points!" << endl;
  }
  else if(roll[0] == roll[4])
  {
    cout << "You have rolled a 3 of a Kind." << endl << add() << " points!" << endl;
  }
  else if
  )

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

bool trip(int a, int b, int c, int d, int e)
{

}

bool quad(int a, int b, int c, int d, int e)
{

}

bool full(int a, int b, int c, int d, int e)
{

}

bool small(int a, int b, int c, int d, int e)
{

}

bool large(int a, int b, int c, int d, int e)
{

}

bool yahtzee(int a, int b, int c, int d, int e)
{

}

int chance(int a, int b, int c, int d, int e)
{
  int g;
  a+b+c+d+e = g;

  return g;
}

int add(int a, int b, int c, int d, int e)
{
  int g;
  a+b+c+d+e = g;

  return g;
}
