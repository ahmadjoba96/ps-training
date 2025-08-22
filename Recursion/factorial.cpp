// Q: Factorial using recursion
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	if (n == 2)
		return 2;

	int ans = n * fact(n - 1);
	return ans;
}

int main()
{
	cout << fact(5) << endl;
	cerr << "A7mad_Joba" << endl;
	return 0;
}