#include<bits/stdc++.h>
using namespace std;

stack<char> st;

string ns;

char insert_at_bottom(char x)
{

	if (st.size() == 0)
		st.push(x);

	else
	{


		char a = st.top();
		st.pop();
		insert_at_bottom(x);

		st.push(a);
	}
}

char reverse()
{
	if (st.size() > 0)
	{

		char x = st.top();
		st.pop();
		reverse();

		insert_at_bottom(x);
	}
}

int main()
{

	st.push('a');
	st.push('b');
	st.push('c');
	st.push('d');

	cout << "Original Stack" << endl;

	cout << "a" << " " << "b" << " "
	     << "c" << " " << "d"
	     << endl;

	reverse();
	cout << "Reversed Stack"
	     << endl;

	while (!st.empty())
	{
		char p = st.top();
		st.pop();
		ns += p;
	}

	cout << ns[3] << " " << ns[2] << " "
	     << ns[1] << " " << ns[0] << endl;
	return 0;
}

