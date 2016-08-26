#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    list<int> value1;
    map<string, list<int> > practice1;
    //default constructor
    // practice1["one"] = ;
    // practice1["two"] = 2;
    // practice1["three"] = 3;
    // practice1["four"] = 4;
    // practice1["five"] = 5;
    // practice1["five"] = 6;
    practice1["one"].push_back(1);
    practice1["two"].push_back(2);
    //practice1.insert(pair<string,int> ("five", 7));
    for (map<string,list<int> >::iterator i = practice1.begin(); i != practice1.end(); i++)
    {
        cout << i->first << " ";
        for (list<int>::iterator j = i->second.begin(); j != i->second.end(); j++)
        {
            cout << *j;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

/*
Maps are a key value pair where the key is unique, the value does not have to be
Keys, under the hood, are arrays that you can access without iterating through the whole array of keys
Keys and Value can be any type, whether implemented by classes or by library. 
Keys are be default ordered, and you can write a compare method to change the way that the keys are ordered
Compared to a list, maps are better used when there are unique values, 

*/