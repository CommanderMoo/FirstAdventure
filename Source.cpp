#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "\n\n\t\t *** Welcome to my Adventure *** \n\n";
	cout << "\n You Wake up in a park. You look around and see a large Spider! \n";
	cout << "\n The spider is coming right at you! \n";
	cout << "\n What should you do? Type run or type hide and press enter: ";
	string userChoice;
	getline(cin, userChoice);
	if (userChoice == "Run" || userChoice == "run")
	{
		cout << "\n\n You run as fast as you can, but the spider has 6 more legs than you and catches you!\n";
	}
	else if (userChoice == "Hide" || userChoice == "hide")
	{
		cout << "\n The spider does not see you and runs right on by! whew! \n";
	}
	else
	{
		cout << "\n while you were trying to type, the spider caught you! \n\n";
	}

	return 0;
}
