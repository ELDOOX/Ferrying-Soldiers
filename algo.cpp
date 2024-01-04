#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
void print(vector<int>& S, int B[], int T, int Num)
{
	cout << endl << "left side: ";
	cout << "                                                                                                      right side: " << endl;
	for (int i = 0; i < Num; i++)
	{
		if (S[i] == -1)
		{
			cout << "[" << "soldier" << i + 1 << "]";
		}
	}
	for (int i = 0; i < 2; i++)
	{
		if (B[i] == -1)
		{
			cout << "[" << "boy" << i + 1 << "]";
		}
	}
	if (T == -1)
	{
		cout << " \__/";
	}
	cout << "                                                                                                   ";
	if (T == 1)
	{
		cout << " \ __/";
	}
	for (int i = 0; i < 2; i++)
	{
		if (B[i] == 1)
		{
			cout << "[" << "boy" << i + 1 << "]";
		}
	}
	for (int i = 0; i < Num; i++)
	{
		if (S[i] == 1)
		{
			cout << "[" << "soldier" << i + 1 << "]";
		}
	}
	cout << endl;
}
void FerryingSoldiers(vector<int>& S, int B[], int T, int Num)
{
	for (int i = 0; i < Num; i++)
	{
		B[0] *= -1;
		B[1] *= -1;
		T *= -1;
		cout << "The 2 boys cross by the boat from the left side to the right side" << endl;
		print(S, B, T, Num);
		B[0] *= -1;
		T *= -1;
		cout << "The First boy return by the boat from the right side to the left side" << endl;
		print(S, B, T, Num);
		S[i] *= -1;
		T *= -1;
		cout << "The soldier number " << i + 1 << " cross by the boat from the left side to the right side" << endl;
		print(S, B, T, Num);
		B[1] *= -1;
		T *= -1;
		cout << "The second boy return by the boat from the right side to the left side" << endl;
		print(S, B, T, Num);
	}
}
void main()
{
	int numSoldiers;
	cout << "please, enter the number of the soldiers: ";
	cin >> numSoldiers;
	int Boys[] = { -1,-1 };
	int Boat = -1;
	vector <int> Soldiers;
	Soldiers.resize(numSoldiers);
	for (int i = 0; i < numSoldiers; i++)
	{
		Soldiers[i] = -1;
	}
	FerryingSoldiers(Soldiers, Boys, Boat, numSoldiers);
	cout << "Congratulations, All the soldiers crossed the river" << endl;
}