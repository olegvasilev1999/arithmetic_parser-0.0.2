# arithmetic_parser-0.0.2

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string s;
	double a, b;
	char oper;

	getline(cin, s);
	istringstream stream(s);
	stream >> a;

	while (stream >> oper)
	{
		switch (oper)
		{
		case '+':
			stream >> b;
			a = a + b;
			break;

		case '-':
			stream >> b;
			a = a - b;
			break;

		case '*':
			stream >> b;
			a = a * b;
			break;

		case '/':
			stream >> b;
			a = a / b;
			break;
		}
	}

	cout << a;

	cin.get();
	return 0;

}
