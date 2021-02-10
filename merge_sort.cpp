#include <bits/stdc++.h> 
#define infinity 999999999
using namespace std; 

int A[100], n; //n -> size of array A

void get_input()
{
    cout << "Enter the size of array: ";
    cin >> n; 
    
    cout << "Enter the elements of the array: ";
    for(int i = 1; i <= n; i++)
        cin >> A[i];  
}


void get_output()
{
    cout << "The array after merge sort: ";
    
    for (int i = 1; i <= n; i++)
        cout << A[i] << " "; 
}


void merge(int p, int q, int r)
{
    int n1 = q  - p + 1; 
    int n2 = r - q; 
    
    int L[n1 + 1]; // initialize left(L) array
    int R[n2 + 1]; // initialize right(R) array
    
    for (int i = 1; i <= n1; i++) // populate L array
        L[i] = A[p + i - 1]; 
        
    for(int j = 1; j <= n2; j++) // populate R array
        R[j] = A[q + j]; 

    int i = 1, j = 1; 
    L[n1 + 1] = infinity; 
    R[n2 + 1] = infinity; 
    
    for (int k = p; k <= r; k++) // populate original array A
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i]; 
            i += 1; 
        }
        
        else
        {
            A[k] = R[j]; 
            j += 1; 
        }
    }
}


void merge_sort(int p, int r)
{
    if (p < r)
    {
        int q = (p + r)/2; 
        merge_sort(p, q); 
        merge_sort(q + 1, r); 
        
        merge(p, q, r); 
    }
}


int main()
{
    get_input(); 
    merge_sort(1,n); 
    get_output(); 
    return 0; 
}
