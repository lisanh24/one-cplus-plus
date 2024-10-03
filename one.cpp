//// This program prints the C++ language standard your compiler is currently using
//// Freely redistributable, courtesy of learncpp.com (https://www.learncpp.com/cpp-tutorial/what-language-standard-is-my-compiler-using/)
//
// #include <iostream>
// #include "pch.h"
//
// using namespace std;
//
//
// const int numStandards = 7;
//// The C++26 stdCode is a placeholder since the exact code won't be determined until the standard is finalized
// const long stdCode[numStandards] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L };
// const char* stdName[numStandards] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };
//
// long getCPPStandard()
//{
//     // Visual Studio is non-conforming in support for __cplusplus (unless you set a specific compiler flag, which you probably haven't)
//     // In Visual Studio 2015 or newer we can use _MSVC_LANG instead
//     // See https://devblogs.microsoft.com/cppblog/msvc-now-correctly-reports-__cplusplus/
// #if defined (_MSVC_LANG)
//     return _MSVC_LANG;
// #elif defined (_MSC_VER)
//     // If we're using an older version of Visual Studio, bail out
//     return -1;
// #else
//     // __cplusplus is the intended way to query the language standard code (as defined by the language standards)
//     return __cplusplus;
// #endif
// }
//
// int main()
//{
//     long standard = getCPPStandard();
//
//     if (standard == -1)
//     {
//         std::cout << "Error: Unable to determine your language standard.  Sorry.\n";
//         return 0;
//     }
//
//     for (int i = 0; i < numStandards; ++i)
//     {
//         // If the reported version is one of the finalized standard codes
//         // then we know exactly what version the compiler is running
//         if (standard == stdCode[i])
//         {
//             std::cout << "Your compiler is using " << stdName[i]
//                 << " (language standard code " << standard << "L)\n";
//             break;
//         }
//
//         // If the reported version is between two finalized standard codes,
//         // this must be a preview / experimental support for the next upcoming version.
//         if (standard < stdCode[i])
//         {
//             std::cout << "Your compiler is using a preview/pre-release of " << stdName[i]
//                 << " (language standard code " << standard << "L)\n";
//             break;
//         }
//     }
//
//     return 0;
// }

#include <iostream>
#include "pch.h"
using namespace std;

// int main() {
//	std::cout << "Hello, World" << std::endl; // Everything from here to the end of the line is ignored.
//	/*The is a multi-line comment.
//	* the matching asteriks to the left.
//	* can make this easier to road.
//	*/
//
//	int a, b;
//	a = 10;
//	b = 30;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//	int width{ 100 };
//	int height{ 200 };
//	std::cout << width << std::endl;
//	std::cout << height << std::endl;
//	double w3(4.5);
//	std::cout << w3 << std::endl;
//
//	return 0;
//
// }
// int main() {
//
//	int a = 10, b = 20;
//	cout << a << " <->  " << b << endl;
//	return 0;
//
//
//
//  }

// int main() {
//	[[maybe_unused]] double pi{ 3.14159 };
//	[[maybe_unused]] double garvity{ 9.8 };
//	[[maybe_unused]] double phi{ 1.61893 };
//	cout << pi << endl;
//	cout << phi << endl;
// }

// using the cin method;
// int main() {
//	cout << "enter a number: ";
//	int x{};
//	cin >> x;
//	cout << "the number you entered is " << x << endl;
//	return 0;
//}

// int main() {
//	cout << "enter two number by space" << endl;
//	int x{}, y{};
//	cin >> x >> y;
//	cout << "you have entered " << x << " and " << y << endl;
//	return 0;
// }

// int main() {
//	cout << "Enter a two numbers : ";
//	int x{};
//	cin >> x;
//	int y{};
//	cin >> y;
//
//	cout << "You have entered: " << x << " and " << y << endl;
//	return 0;
// }

// trick the compiler:
// void doNothing(int&) {
//	//nothing
// }
//
// int main() {
//	int x;
//	doNothing(x);
//	return 0;
// }

// implementation behaviour:

// int main() {
//	cout << sizeof(int) << endl;
//	cout << sizeof(double) << endl;
//	cout << sizeof(float) << endl;
//	cout << sizeof(bool) << endl;
//	cout << sizeof(char) << endl;
//	return 0;
// }

////A small program
// int main() {
//	cout << "Enter a number: ";
//	int x{};
//	cin >> x;
//	cout << "Double the number is " << x * 2 << endl;
//	return 0;
// }

// learning about functions:

// void doPrint() {
//	cout << "Doing the print." << endl;
// }
//
// int main() {
//	cout << "Start the function():" << endl;
//	doPrint();
//	cout << "End of the function():" << endl;
//	return 0;
// }

// runnig  a function inside another functions:
// void doB() {
//	cout << "In function (B)";
//}
//
// void doA() {
//	cout << "Staring of (A)" << endl;
//	doB();
//	cout << "Ending of (A)" << endl;
//}
//
// int main() {
//	cout << "Staring main()" << endl;
//	doA();
//	cout << "Ending main()" << endl;
//	return	0;
//
// }

// function for returning the value;
// int getValueFromUser() {
//	cout << "Enter a number: ";
//	int x{};
//	cin >> x;
//	return x;
// }
//
// int main() {
//	int num = getValueFromUser();
//	cout << "The value is " << num << endl;
//	return 0;
// }

// Advance c++ library

// #include <cstdlib>
// int main() {
//	return EXIT_SUCCESS;
// }

// reusing the function

// int getValueFromUser() {
//	cout << "Enter a number: ";
//	int input{};
//	cin >> input;
//	return input;
// }
// int main() {
//	int  x{ getValueFromUser() };
//	int  y{ getValueFromUser() };
//	cout << x << " + " << y << " = " << x + y << endl;
//	return EXIT_SUCCESS;
// }
// #define M_NAME "Lisan Hossain"
// int main() {
//	int add(int a, int b);
//	cout << add(10, 20) << endl;
//	cout << "My name is " << M_NAME << endl;
//	return 0;
// }

// #define PRINT_JOB
//
// int main() {
// #ifdef PRINT_JOB
//	cout << "JOB" << endl;
// #endif // PRINT_JOB
// #ifdef PRINT_BOB
//	cout << "BOB" << endl;
// #endif // PRINT_BOB
//	return 0;
// }

// #define FOO 9
//
// int main() {
// #ifdef FOO
//	cout << FOO << endl;
// #endif
//	return 0;
// }

// #include "Alex.h"
// int main() {
//	cout << "My name is " << MY_NAME << endl;
//	return 0;
//
//
// }
// void doSomething(); // forward declaration for function doSomething()
//
// #define PRINT
//
// int main()
//{
//     doSomething();
//
//     return 0;
// }

// #include "add.h"
//
// int main() {
//	cout << "The sum is " << add(10, 20) << endl;
//	return 0;
//
// }

// A final program
// int getUserInput() {
//	cout << "Enter a integer: ";
//	int input{};
//	cin >> input;
//	return input;
//}
//
// int main() {
//	int value{ getUserInput() };
//	cout << value << endl;
//	return 0;
//}

// int main()
//{
//     int a{ 10 };
//     int b{ 0 };
//     std::cout << a << " / " << b << " = " << a / b << '\n'; // division by 0 is undefined in mathematics
//     return 0;
// }

// #define ENABLE_DEBUG
// int getUserInput() {
//
// #ifndef ENABLE_DEBUG
//	cerr << "getUserInput() called\n";
// #endif // !ENABLE_DEBUG
//	cout << "Enter a number: ";
//	int x{};
//	cin >> x;
//	return x;
//
// }
//
// int main() {
//	cerr << "main() called\n";
//	int x{getUserInput()};
//	cout << "You entered " << x << endl;
//	return 0;
// }

// changing character into string:
// #include <string>
// #include <algorithm>
// int main() {
//	uint32_t i = 1;
//	string s{ "hello" };
//	std::cout << ": " << s << std::endl;
//	transform(s.begin(), s.begin() + 1, s.begin(), toupper);
//	cout << i++ << ": " << s << std::endl;
//	transform(s.begin(), s.begin() + 1, s.begin(), tolower);
//}

// #include <iostream>
// #define ZERO 0
// int main() {
//	using namespace std;
//	cout << "Come up and C++ me some time" << std::endl;
//	cout << "You won't regret it! " << endl;
//	cout << sizeof(INT_MAX) << endl;
//	cout << CHAR_MAX << endl;
//	cout << ZERO << endl;
//	int chest = 12;
//	int waist = 0x42;
//	int inseam = 042;
//	cout << chest << endl;
//	cout << waist << endl;
//	cout << inseam << endl;
//
//	return 0;
// }

// #include <iostream>
// int main() {
//	using namespace std;
//	char ch = 'M';
//	int i = ch;
//	cout << "The ASCII code for " << ch << " is " << i << endl;
//
//	cout << "Add the one to the character code : " << endl;
//	ch = ch + 1;
//	i = ch;
//	cout << "The ASCII code for " << ch << " is " << i << endl;
//
//	// using the cout.put() member function to display a char:
//	cout << "Displaying char ch using cout.put(ch): " << endl;
//	cout.put(ch);
//
//	// using cout.put() to display a char constant
//	cout.put('!');
//
//	cout << endl << "Done" << endl;
//		return 0;
//
// }

// #include <iostream>
// #inlcude <float>
// int main()
//{
//	using namespace std;
//	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
//	float tub = 10.0 / 3.0; // good to about 6 places
//	double mint = 10.0 / 3.0; // good to about 15 places
//	const float million = 1.0e6;
//	cout << "tub = " << tub;
//	cout << ", a million tubs = " << million * tub;
//	cout << ",\nand ten million tubs = ";
//	cout << 10 * million * tub << endl;
//	cout << "mint = " << mint << " and a million mints = ";
//	cout << million * mint << endl;
//	return 0;
// }

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "Lisan Hossain" << endl;
    cout << 10 + 10 << endl;
    cout << INT_MAX << endl;
    cout << CHAR_MAX << endl;

    return 0;
}
