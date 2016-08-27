#include <iostream>

using namespace std;

int main()
{
    int z = 0;
    int arr [7] = {3, 44, 38, 5, 47, 15, 36};
    int marker = 0;
    for (int i = 0; i < 7; i++)
    {
        marker = arr[i];
        z = i;
        for (int x = i ; x >= 0; x--)
        {
            if (marker < arr[x])
            {
                arr[z] = arr[x];
                arr[x] = marker;
                z--;
            }
        }
    }



    for (int j = 0; j < 7; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}