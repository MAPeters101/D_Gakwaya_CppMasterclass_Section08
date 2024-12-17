#include <iostream>

using namespace std;



int main() {
	int value1{ 10 };
	int value2{ -300 };

	cout << "value1: " << value1 << endl;
	cout << "value2: " << value2 << endl;
	cout << "sizeof(value1): " << sizeof(value1) << endl;
	cout << "sizeof(value2): " << sizeof(value2) << endl;

	signed int value1a{ 10 };
	signed int value2a{ -300 };

	cout << "value1a: " << value1a << endl;
	cout << "value2a: " << value2a << endl;
	cout << "sizeof(value1a): " << sizeof(value1a) << endl;
	cout << "sizeof(value2a): " << sizeof(value2a) << endl;

	unsigned int value3{ 10 };
	//unsigned int value4{ -300 };

	cout << "value3: " << value3 << endl;
	cout << "sizeof(value3): " << sizeof(value3) << endl;
	cout << endl << endl;






	return 0;
}


