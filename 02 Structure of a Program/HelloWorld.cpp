	/*
	** "Hello world" is most likely the first program every programmer
	** writes. Despite it being so simple, so many around the world
	** have felt so much joy in being able to manipulate code to display
	** their own message on screen.
	** Enough of the cheesy intro, let's deconstruct this thing.
	*/


#include <iostream>
	// the above line is so so so crucial to writing code.
	// it essentially says: "hey, compiler. please access
	// the file called iostream." in "hello world", we 
	// cannot do anything without including <iostream>
	// because that's where the functions are that allow
	// us to write code.	

using namespace std;
	// this one is  a bit weird.
	// there's this thing in c++ called 'namespaces' that are sort of
	// like the #include thing above, however it's named differently
	// it's sort of confusing. but we'll get into it later.


int main()
	// this is also a very very VERY important aspect of c++ programming.
	// EVERY c++ program will have a function called "main()". every
	// single one. whatever is in here is something that the program will
	// output to the screen or perform. unless you have your code in main(),
	// nothing will happen. ever.
{
	// curly braces!
	// the contents of main() will be enclosed within curly braces.
	// that way, the compiler knows what's part of main and what's not.

	cout << "Hello World!" << endl;
	// this right here is the most groundbreaking thing ever. trust.
	// we'll look at this one part at a time.
	// first off, "cout" is pronounced "cee-out".
	// this sends information "outwards", where the user can see it
	// following << are the messages that the user sees
	// whatever is contained in quotes ("") can be seen by the user and will
	// be printed on the computer's screen
	// can you guess what prints here? (well... you probably know)
	// after the quotes, there's << endl;
	// << signifies that the piece of information before it is done and
	// thus allows us to go to another statement-- in this case, we want
	// to go endl. endl ends the line we're at and goes to the next
	// so when this program runs, you'll see this...:
	//
	// Hello World!
	// |
	//
	// ... Where '|' is the blinking cursor thing where you type!

	return 0;
	// this is exactly what it looks like. this right here returns something:
	// it returns 0.
	// you probably know that 0 means nothing. in this sense, nothing
	// is returned. so you don't even need to write this statement, but hey
	// we're going to learn it anyway here!
}
	// ending curly braces! this signifies the end of the function int main().
	// forgetting to end curly braces is one of the most common mistakes that
	// programmers make. so don't forget!