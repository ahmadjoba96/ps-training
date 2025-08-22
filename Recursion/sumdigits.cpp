// Q: Sum of digits using recursion
#include <bits/stdc++.h>
using namespace std;

int sumdigits(int n)
{
	if (n < 10)
	{
		return n;
	}
	int last = n % 10;
	return last + sumdigits(n / 10);
}

int main()
{
	cout << sumdigits(1234) << endl;
	cerr << "A7mad_Joba" << endl;
	return 0;
}