#include <iostream>
using namespace std;

int main()
{
	int replyNum = 0;
	int count;

	cout << "Felix Cassidy is reply #0 \nWhat reply # are you? ";
	cin >> replyNum;

	cout << "\nCopy and paste this: \nwho actually comments on the fact";
	for (count = 2; count < replyNum; count++)
	{
		cout << " that someone actually comments on the fact";
	}
	cout << " that someone likes their own comments\n";

	system("pause");
}