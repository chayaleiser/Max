#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b, T c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if(b > c && b > a) 
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main() {
	int i = 5, j = 6, k = 7;
	double l = 10.2, m = 5.7, n = 9.5;
	cout<< GetMax(i, j, k)<< endl;
	cout<< GetMax(l, m, n)<< endl;
	return 0;
}