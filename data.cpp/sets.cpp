#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int arr [5] = {1, 2, 3, 4, 5};
    set<int> practice1 (arr, arr + 2);
    set<int> practice2 (practice1.begin(), practice1.end());
    practice1.emplace(98);
    set<char> practice3 = {'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e'};
    //not allowed in C++ 98, must use a constructor 
    for (set<int>::iterator i = practice1.begin(); i != practice1.end(); i++)
    {
        cout << *i << endl;
    }
}

/*
Set: Basically a list that only has unique values, will automatically clean up the values within itself when created
Pros: 
    Can be handeled to contain unique information
Con:
    Same as List
*/
    