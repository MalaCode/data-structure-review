#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int arr [5] = {3, 4, 2, 1, 5};
    priority_queue<int> practice1 (arr, arr+5);
    while (!practice1.empty())
    {
        cout << practice1.top() << endl;
        practice1.pop();
    }
}

/*
Priority_queue:
A Queue in which order is imposed on both the elements inside and how the elements are inserted/removed;
Is similair to heap
Heap:
a type of tree in which order is imposed, where the item of highest importance is on the top and is complete
Complete tree:
there is at least a single left branch on each level of the tree
*/