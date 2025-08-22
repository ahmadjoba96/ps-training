// Q: Generate binary strings of length 5 with no consecutive 1's
#include <bits/stdc++.h>
using namespace std;

void genBin(string s)
{

	if (s.size() == 5)
	{

		cout << s << endl;
		return;
	}
	if (s.empty() || s.back() == '0')
	{
		genBin(s + "0");
		genBin(s + "1");
	}
	else
		genBin(s + "0");
}

int main()
{
	genBin("");
	cerr << "A7mad_Joba" << endl;
	return 0;
}
