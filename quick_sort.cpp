#include <iostream>
using namespace std;

int A[100], n;

void get_input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
}


void get_output()
{
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

int part(int p, int r)
{
    int temp;
    int x = A[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i += 1;
            temp = A[i]; 
            A[i] = A[j]; 
            A[j] = temp;  
        }
    }

    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    
    return i + 1;
}


void quick_sort(int p, int r)
{
    if (p < r)
    {
        int q  = part(p, r);
        quick_sort(p, q - 1);
        quick_sort(q + 1, r);
    }
}


int main()
{
    get_input();
    quick_sort(0, n - 1);
    get_output();
    return 0;
}


