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


	short short_var{ -32768 };
	short int short_int{ 455 };
	signed short signed_short{ 122 };
	signed short int signed_short_int { -456 };
	unsigned short int unsigned_short_int{ 456 };

	int int_var{ 55 };
	signed signed_var{ 66 };
	signed int signed_int{ 77 };
	unsigned int unsigned_int{ 77 };

	long long_var{ 88 };
	long int long_int{ 33 };
	signed long signed_long{ 44 };
	signed long int signed_long_int{ 44 };
	unsigned long int unsigned_long_int{ 44 };

	long long long_long{ 888 };
	long long int long_long_int { 999 };
	signed long long signed_long_long{ 444 };
	signed long long int signed_long_long_int{ 1234 };
	unsigned long long int unsigned_long_long_int{ 1234 };

	cout << "Short variable: " << short_var << ", size: " << sizeof(short) << " bytes" << endl;
	cout << "Short int: " << short_int << ", size: " << sizeof(short int) << " bytes" << endl;
	cout << "Signed short: " << signed_short << ", size: " << sizeof(signed short) << " bytes" << endl;
	cout << "Signed short int: " << signed_short_int << ", size: " << sizeof(signed short int) << " bytes" << endl;
	cout << "Unsigned short int: " << unsigned_short_int << ", size: " << sizeof(unsigned short int) << " bytes" << endl;
	cout << "--------------------------\n" << endl;

	cout << "Int variable: " << int_var << ", size: " << sizeof(int) << " bytes" << endl;
	cout << "Signed variable: " << signed_var << ", size: " << sizeof(signed) << " bytes" << endl;
	cout << "Signed int: " << signed_int << ", size: " << sizeof(signed int) << " bytes" << endl;
	cout << "unsigned int: " << unsigned_int << ", size: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "--------------------------\n" << endl;



	return 0;
}


