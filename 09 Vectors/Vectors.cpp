#include <iostream>
#include <vector>
	
	/*
	** vectors are similar to arrays in that both hold a number
	** of objects with the same type. however, unlike the arrays
	** we have seen, vectors are initialized differently. in
	** addition, vectors have their own library-- we must use
	** std::vector.
	** 
	** TODO: FIND BETTER DEFINITION OF VECTORS
	*/

using namespace std;

int main()
{
	vector<int> veci;
	// above is an example of a vector. veci is a vector holding
	// a list of objects of type int.
	vector<string> vecs;
	vector<double> vecd;
	// similarly, we can create vectors of other data types such
	// as strings or doubles.

	vector<vector<string> > file;
	// the above is a vector named file that holds objects of types
	// string vectors.

	// now that we know what vectors can hold, let's actually assign
	// values to these vectors.

	vector<int> vec1 {1, 3, 5, 7, 9};
	// above, we give the values of 1, 3, 5, 7, and 9 to the vector
	// vec1. this is equivalent to saying:
	// vector<int> vec1;
	// vec1 = {1, 3, 5, 7 ,9};

	// here is another way to assign values to a vector:
	vector<int> vec2 (10, 1);
	// notice how vec2 has parentheses and vec1 has curly braces.
	// instead of assigning just the values 10 and 1 to vec2,
	// the parentheses and commas tell vec2 to store 10
	// objects of the value 1.
	// this means that vec2 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
}