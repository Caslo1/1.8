#include <iostream>

using namespace std;

int main()
{
	int FirstValue { 8 };
	int SecondValue{ 11 };

	cout << SecondValue << endl;
	FirstValue = FirstValue ^ SecondValue;
	SecondValue = FirstValue ^ SecondValue;
	cout << FirstValue << endl;
	cout << SecondValue << endl;
	FirstValue = FirstValue ^ SecondValue;
	cout << FirstValue << endl;

	return 0;
}