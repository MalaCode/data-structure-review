#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int arr [7] = {3, 44, 38, 5, 47, 15, 36};
    bool flag = false;
    do
    {
        flag = true;
        for (int i = 0; i < 6; i++)
        {
            if (arr[i] > arr[i+1])
            {
                x = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = x;
                flag = false;
            }
        }
        
    }
    while(!flag);
    for (int j = 0; j < 7; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}