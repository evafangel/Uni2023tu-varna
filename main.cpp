#include <iostream>
using namespace std;

int main()
{
    int n;
    int min_range;
    int max_range;

    cout << "Enter the min range: ";
    cin >> min_range;

    cout << "Enter the max range: ";
    cin >> max_range;

    cout << "Enter the amount of numbers: ";

    while (true)
    {
        cin >> n;

        if (n < min_range or n > max_range)
        {
            cout << "Invalid number. Try again: ";
        }
        else break;
    }

    int max = 0;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The max number is " << max;

}