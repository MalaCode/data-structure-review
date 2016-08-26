#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <deque>
using namespace std;

int main()
{
    vector<int> vec (5,11);
    list<int> l1 (5,98);
    stack<int, vector<int> > stk (vec);
    queue<int, list<int> > que (l1);
    //cannot make a deque using a stack or queue, and can only use listin c++11 
    deque <int> practice1 (5,98);
    deque <int> practice2(practice1.begin(), practice1.end());
    deque <int> practice3(practice2);
    int arr [5] = {11, 11, 11, 11, 11,};
    deque <int> practice4 (arr, arr + sizeof(arr)/sizeof(int));
    
    //Can add to both sides of the structure, unlike queue and stack
    practice1.push_front(11);
    practice1.push_back(11);
    practice4.push_front(98);
    practice4.push_back(98);
    for (deque<int>::iterator i = practice1.begin(); i != practice1.end(); i++)
    {
        cout << "Practice 1: " << *i << endl;
    }
    for (deque<int>::iterator i = practice4.begin(); i != practice4.end(); i++)
    {
        cout << "Practice 4: " << *i << endl;
    }
    //deque can access specific elements
    cout << 
    return 0;
}