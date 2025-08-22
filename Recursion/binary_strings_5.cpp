//Q: Generate all binary strings (composed of 0s and 1s) of length 5.
#include <bits/stdc++.h>
using namespace std;

void genBin(string s)
{
	if (s.size() == 5)
	{
		cout << s << endl;
		return;
	}
	genBin(s + "0");
	genBin(s + "1");
}

int main()
{
	genBin("");
	cerr << "A7mad_Joba" << endl;
	return 0;
}