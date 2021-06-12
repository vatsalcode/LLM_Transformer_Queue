#include <bits/stdc++.h>
using namespace std;

void chkSubseq(string s, string r)
{
	stack<char> st;
	for (int i = 0; i < r.size(); i++) {
		st.push(r[i]);
	}

	for (int i = (int)s.size() - 1; i >= 0; i--) {
		if (st.empty()) {

			cout << "POSITIVE" << endl;
			return;
		}
		if (s[i] == st.top()) {
			st.pop();
		}
	}
	if (st.empty())
		cout << "POSITIVE" << endl;
	else
		cout << "NEGATIVE" << endl;
}

int main()
{
	string s,r;
	cin>>s;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>r;
		chkSubseq(s,r);
	}
	return 0;
}
