#include<iostream>

using namespace std;

void swap(int &a, int &b);

void incersion(int A[]);

int main()
{
	srand(time(NULL));

	int numGen[6];

	for(int i = 0; i < 6; i++)
	{
		numGen[i] = rand()%6+1;

		cout << numGen[i] << endl;
	}

	cout << "Dice sorted: ";

	incersion(numGen);

	for(int i = 0; i < 6; i++)
	{
		cout << numGen[i] << endl;
	}

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
	for(int i = 1; i < 6; i++)
	{
		int j = i;

		while((j > 0) && (A[j-1] < A[j]))
		{
			swap(A[j],A[j-1]);
			j = j - 1;
		}
	}
}
