#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec1 (10,1);

    for(auto c: vec1)
        cout << c<< " ";
    cout << "End print of vec1 (10,1)" << endl;

    vec1.resize(5);
    for(auto d:vec1)
        cout << d << " ";
    cout << "End print of vec1 at size 5" << endl;

    cout << "add 8 to vec1: ";
    vec1.push_back(8);
    for(auto dd: vec1)
        cout << dd << " ";
    cout << '\n';

    // resize changes size to 5, however
    // it does not delete the values that
    // exceed the size

    vector<int> vec2 (5,1);

    cout << "vec2 (5,1) = ";
    for(auto e: vec2)
        cout << e << " ";
    cout << "End print of vec2" << endl;

    cout << "insert 7 at beginning and in the third place: ";
    vec2.insert(vec2.begin(), 7);
    vec2.insert(vec2.begin()+4, 7);
    for(auto f: vec2)
        cout << f << " ";
    cout << "\n now remove second 7: ";

    vec2.erase(vec2.begin()+4);
    for(auto g: vec2)
        cout << g;
    cout <<"\n \n";

    // THIS IS THE subscript operator []
    // use it to call individual values
    // it does not work if there are no values in
    // the [n] place
    // therefore you cannot add elements using the
    // subscript operator

    vector<int> whoop;
    int enter;
    while(cin >> enter)
    {
        whoop.push_back(enter);
        cout << "current size of vector: " << whoop.size() << endl;
        for(auto poop : whoop)
            cout << poop << " ";
        cout << "\n";
    }

   }
