// Q: Fibonacci sequence using recursion
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	int ans = fib(n - 1) + fib(n - 2);
	return ans;
}

int main()
{
	cout << fib(8) << endl;
	cerr << "A7mad_Joba" << endl;
	return 0;
}