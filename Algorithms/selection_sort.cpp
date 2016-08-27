#include <iostream>

using namespace std;

int main()
{
    int min = 0;
    bool flag = false;
    int arr [7] = {3, 44, 38, 5, 47, 15, 36};
    for (int i = 0; i < 6; i++)
    {
        min = arr[i];
        for (int x = i + 1; x < 7; x++)
        {
            if (arr[x] < min)
            {
                arr[i] = arr[x];
                arr[x] = min;
                min = arr[i];
            }
        }
    }
    for (int j = 0; j < 7; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
}