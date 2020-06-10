#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Fill(int m[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m[i][j] = rand();
		}
	}
       return m[10][10];
}
	
int main()
{
	
	srand(time(0));
	int Matrixa[10][10];
	Fill(Matrixa);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Matrixa[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
	int n,k;
	for (int i = 0; i <= int(n - 1); i++)
		for (int j = i + 1; j < n - i; j++)
		{
			k = Matrixa[j][n - i - 1];
			Matrixa[j][n - i - 1] = Matrixa[i][j];
			Matrixa[i][j] = Matrixa[n - j - 1][i];
			Matrixa[n - j - 1][i] = Matrixa[n - 1 - i][n - 1 - j];
			Matrixa[n - 1 - i][n - 1 - j] = k;
		}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Matrixa[i][j] << "     ";
			cout << "\n";
		}
		return 0;
	}
}

