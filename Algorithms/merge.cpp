#include <iostream>
#include <vector>
 
using namespace std;

void merge (vector<int> &vec, int begin, int mid, int end)
{
    int i = 0;
    int x = 0;
    int z = 0;
    int counter = mid - begin + 1;
    vector<int> temp1;
    vector<int> temp2;
    for (i = 0; i < counter; i++)
    {
        temp1.at(i) = vec.at(begin + i);
    }
    for (x = 0; x < end-mid; x++)
    {
        temp2.at(i) = vec.at(mid + 1 + x);

    }
    while (i < counter && x < end-mid)
    {
        if (temp1[i] < temp2[x])
        {
            vec.at(z) = temp1.at(i);
            i++;
        }
        else
        {
            vec.at(z) = temp2.at(x);
        }
        z++;
    }
}

void mergesort(vector<int> &vec, int begin, int end)
{
    if (begin < end)
    {
        int mid = (end+1)/2;
        mergesort(vec, begin, mid);
        mergesort(vec, mid + 1, end);
        merge (vec, begin, mid, end);
    }
    
}

int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(44);
    vec.push_back(38);
    vec.push_back(5);
    vec.push_back(47);    
    vec.push_back(15);
    vec.push_back(36);
    mergesort(vec,0,7);


    for (int j = 0; j < 7; j++)
    {
        cout << vec.at(j) << endl;
    }
    return 0;
}