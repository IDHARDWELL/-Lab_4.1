#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (N * (20)) + ((cos(i) * sin(i)) / (1 + (cos(i) * (sin(1)))));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = k;
	do {
		S += (N * (20)) + ((cos(i) * sin(i)) / (1 + (cos(i) * (sin(1)))));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (N * (20)) + ((cos(i) * sin(i)) / (1 + (cos(i) * (sin(1)))));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (N * (20)) + ((cos(i) * sin(i)) / (1 + (cos(i) * (sin(1)))));
	}
	cout << S << endl;
	return 0;
}