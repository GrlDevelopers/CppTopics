/*
	flow control is exactly how it sounds-- it controls the flow of a program. think of it in the way that a dam controls the flow of a river or traffic lights control the traffic of a city.

	in c++, we use the terms if and else for basic flow control. they're straight forward in what they do, but to use these keywords we need to know their syntax. here are some other keywords we'll need:

	if, else
	==			equals
	||			or
	&&			and
	>			greater than
	<			less than
	>= 			greater than or equal to
	<= 			less than or equal to
	()			parentheses. you'll need these
*/

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "enter a number: " << endl;
	cin >> x;
	if(x%2 == 0) // this translates to "if x is an even number..."
		cout << x << " is an even number!" << endl;
	else // else, if x is not an even number...
		cout << x << " is an odd number!" << endl;
	
	/*
		from this, we can see the basic structure of an if/else statements:
		if (condition)
		{
			code
		}
		else
		{
			code
		}
		as you may have noticed, the code before this comment does not have curly braces. in this case, if the code for an if/else statement is only one line, you don't need the curly braces. otherwise, if the statement is more than one line, you need curly braces.
		let's do another example.
	*/

	int y;
	bool even;
	cout << "enter another number: " << endl;
	cin >> y;

	if(y%2 == 0) // if y is even...
	{
		cout << y << " is even." << endl; // say that the number is even
		even = true; // make the boolean even true
	}
	else
		cout << y << " is odd." << endl; // else say that the number is odd

	if(even == true) // if the boolean even is true
		cout << "half of " << y << " is " << y/2 << endl; // print y/2
}