#include <iostream>
using std::cout, std::endl;

extern "C"
{
	signed long hello();
}

int main()
{
	cout << "My name is Michael Moylan. Welcome to my driver program!" << endl;
	cout << "I will now call the hello module..." < endl;
	
	signed long helloResult = hello();
	
	cout << "The driver is now back in control." << endl;
	cout << "The driver received the following value: " << helloResult << endl;
	cout << "Goodbye." << endl;
	
	return 0;
}		
