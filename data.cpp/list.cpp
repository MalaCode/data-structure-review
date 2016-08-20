#include <iostream>
#include <list>
using namespace std;


void printList(list<int> example)
{
     for (list<int>::iterator i=example.begin(); i != example.end(); i++)
    {
        cout << *i << endl;
    }
} 

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    list<int> practice1;
    //intialize empty list
    std::list<int> practice2 (arr, arr + sizeof(arr) / sizeof(int) );
    //copies the array into a list
    practice2.push_back(8);
    //push backed the value
    printList(practice2);
    // prints the List using function
    cout << endl;
    practice2.push_back(0);
    practice2.pop_front();
    // practice2.remove(2);
    list<int>::iterator j = practice2.begin();
    //sets j = the begin of list (is dynamically set)
    // advance(j,4);
        // move the iterator up the second parameter amount of times 
    j++;
    // pushes the iterator up by one
    practice2.erase(j);
    // delete value at index j and dynimcally fixes list
    printList(practice2);
    // List
    // a Linked List
    //  Pro:
    //      very quick in insertion and deletion
    //  Con:
    //      cannot grab things by index, must traverse the List in order to grab something
    return 0;
}

