#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int x[n];
    
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j + 1];
                x[j + 1] = x[j];
                x[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << x[i] <<" ";
    }
    
    cout<<endl;
}
