#include <iostream>
#include <string>

using namespace std;


//declare functions here
void addText(string& output, string input);


//declare variables here
string inputString;									//local scope variable declaration

int main()
{
	void addText(string& output, string input);		//invoke the function

	cout << "Bailey" << endl;						//print ou the local variable
	addText(inputString, " ");
	cout << inputString;							//print out the passed variable

	return 0;
}

void addText(string& output, string input)
{
	output = "Hello! ";								//passed scope variable declaration
}