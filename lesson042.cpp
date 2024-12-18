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
	cout << "----------------\n\n" << endl;


	float number4a{ 1924000023.0f };
	cout << "number4a: " << number4a << endl;
	double number4b{ 1924000023.0f };
	cout << "number4b: " << number4b << endl;
	double number4c{ 1924000023.0 };
	cout << "number4c: " << number4c << endl;
	cout << endl;

	float number4a2( 1924000023.0f );
	cout << "number4a2: " << number4a2 << endl;
	double number4b2( 1924000023.0f );
	cout << "number4b2: " << number4b2 << endl;
	double number4c2( 1924000023.0 );
	cout << "number4c2: " << number4c2 << endl;
	cout << "----------------\n\n" << endl;

	double number5{ 192400023 };
	cout << "number5: " << number5 << endl;
	double number6{ 1.92400023e8 };
	cout << "number6: " << number6 << endl;
	double number7{ 1.924e8 };
	cout << "number7: " << number7 << endl;
	double number8{ 0.00000000003498 };
	cout << "number8: " << number8 << endl;
	double number9{ 3.498e-11 };
	cout << "number9: " << number9 << endl;
	cout << "----------------\n\n" << endl;








	return 0;
}




