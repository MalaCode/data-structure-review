#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

int main()
{
    list<int> l1 (5,5);
    queue<int, list<int> > practice1 (l1);
    practice1.push(9);
    queue<int, list<int> > practice2;
    cout << "BACK FUNCTION " << practice1.back() << endl;
    while (!practice1.empty())
    {
        cout << practice1.front() << endl;
        practice1.pop();
    }
 
    // ONLY C++ 11   
    // cout << "SWAP FUNCTION ";
    // cout << "1st queue size() " << practice1.size();
    // cout << "2nd queue size() " << practice2.size();
    // cout << "SWAP";
    // practice1.swap(practice2);
    // cout << "1st queue size() " << practice1.size();
    // cout << "2nd queue size() " << practice2.size();
    return 0;
}