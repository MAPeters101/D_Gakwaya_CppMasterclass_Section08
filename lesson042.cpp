#include <iostream>
#include <iomanip>

using namespace std;



int main() {
	float number1{ 1.12345678901234567890f };
	double number2{ 1.12345678901234567890 };
	long double number3{ 1.12345678901234567890L };

	cout << "number1: " << number1 << " sizeof float: " << sizeof(float) << endl;
	cout << "number2: " << number2 << " sizeof double: " << sizeof(double) << endl;
	cout << "number3: " << number3 << " sizeof long double: " << sizeof(long double) << endl;

	cout << std::setprecision(20);
	cout << "number1 is: " << number1 << endl;
	cout << "number2 is: " << number2 << endl;
	cout << "number3 is: " << number3 << endl;



	return 0;
}




