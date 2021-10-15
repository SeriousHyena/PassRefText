#include <iostream>
#include <string>

using namespace std;


//declare functions here
void addText(string& output, string input);


//declare variables here
string inputString = "Peanut!";						//local scope variable declaration
string foo;

int main()
{
	void addText(string& output, string input);		//invoke the function

	cout << "The local scope (reference variable) is: "<< inputString << endl;

	addText(foo, inputString);
	cout << "The first word: " << foo << "is a passed variable. " << "The second word: " << inputString
		<< " is a reference (local) variable." << endl;;							//print out the passed variable

	return 0;
}

void addText(string& output, string input)
{
	output = "Hello! ";								//passed scope variable declaration
}