/*
	So far, we've been working with basic variables that hold only one piece of information at a time. This is all fine and dandy but what if we wanted to hold more stuff? Sure, we could make a bunch of variables but that's pretty messy and it would be a pain to have to call each one of them separately. Fortunately we have arrays--containers that can hold a bunch of information of the same type.
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "I need more variablesssssss..." << endl;
	// whatever shall we do????
	cout << "wait a minute i forgot that i could use arrays" << endl;

	int arr[5] = {2, 4, 6, 8, 10};
	/*
		WHOA we just created an array!
		the format goes as follows:
		(data type) (name)[size] = {things, separated, by commas, same #, as size};
		in the array called arr, we have 5 ints, as indicated by the name and size.
		but what now? how do we access those numbers?
	*/
	cout << "The first number of the array is " << arr[0] << endl;
	/*
		can you guess what this prints? ...er, well i guess it already tells you that already, but the special thing about it is that we have the number 0 next to the array's name. using this, we can call the /first/ element of the array arr. but why 0?
		arr has a size of 5 but to access each one is a weird kind of process. we have to call the location of each data thingy...
		cell #:			[0] [1] [2] [3] [4]
		data inside:	[2]	[4] [6] [8] [10]
	*/
}