// Q: Fibonacci sequence using recursion
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	// First Time Visit
	if (n == 1 || n == 2) {
		return 1;
	}
	int before = fib(n - 1);
	// Second Time Visit
	int ans = before + fib(n - 2);
	// Third Time Visit
	return ans;
}

int main()
{
	cout << fib(8) << endl;
	cerr << "A7mad_Joba" << endl;
	return 0;
}