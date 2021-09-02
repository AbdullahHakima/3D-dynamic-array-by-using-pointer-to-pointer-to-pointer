#include<iostream>
using namespace std;
int main()
{
	int a = 3, y = 3, z = 2;
	int*** arr = new int** [a];
	for (int i = 0; i < a; i++)
	{
		arr[i] = new int* [y];
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = new int[z];
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++)
			{
				arr[i][j][k] = i + j + k;
			}
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++)
			{
				cout << arr[i][j][k] << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < y; j++)
		{
			delete[]arr[i][j];
		}
		delete[]arr[i];
	}
	delete[]arr;
	arr = NULL;
}