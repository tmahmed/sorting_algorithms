#include <iostream>
using namespace std;


int A[100], B[100], n; 

void get_input()
{
    cout << "n = "; 
    cin >> n; 
    
    cout << "starting array: "; 
    for (int i = 0; i < n; i++)
    {
        cin >> A[i]; 
    }
}

void get_output()
{
    cout << "sorted array: "; 
    for(int i = 0; i < n; i++)
    {
        cout << B[i] << " "; 
    }
}

void counting_sort(int k)
{
    int C[k + 1]; 
    
    for (int i = 0; i <= k; i++)
    {
        C[i] = 0; 
    }
    
    for (int j = 0; j < n; j++)
    {
        C[A[j]] = C[A[j]] + 1; 
    }
    
    for (int i = 1; i <= k; i++)
    {
        C[i] = C[i] + C[i - 1]; 
    }
    
    for (int j = n - 1; j >= 0 ; j--)
    {
        B[C[A[j]] - 1] = A[j]; 
        C[A[j]] = C[A[j]] - 1; 
    }
}

int main()
{
    get_input(); 
    
    int k; 
    cout << "k = "; 
    cin >> k; 
    
    counting_sort(k); 
    get_output(); 
    
    return 0;
}




