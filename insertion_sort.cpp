#include <iostream>
using namespace std;

int main()
{
    int n, i, key, ins_pos; // n -> array size, i -> array index,
    // key -> temp variable for value to place in correct position,
    // ins_pos -> position where key is to be inserted

    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int x[n];

    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++)
        cin >> x[i];

    for (i = 1; i < n; i++) // after this for loop, array will be sorted upto position i
    {
        key = x[i];
        ins_pos = i; //initial value

        while (ins_pos > 0 && x[ins_pos - 1] > key) // after this while loop, final value of ins_pos found
        {
            x[ins_pos] = x[ins_pos - 1];
            ins_pos -= 1;
        }
        x[ins_pos] = key;
    }

    cout << "Result of insertion sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << x[i] << endl;
}
