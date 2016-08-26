#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec (7, 10);
    stack<int, vector<int> > practice1 (vec);
    practice1.emplace(11);
    practice1.push(98);
    while (!practice1.empty())
   {
       cout << practice1.top() << endl; 
       practice1.pop();
   }
}

//quick note: can only be created through vectors and deques

/*

Stacks: a list in which it is only possible to access the top most value
In order to acess anything within the body, you must delete all values above it (which is popping).
*/