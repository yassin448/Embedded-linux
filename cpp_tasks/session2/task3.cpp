#include <array> 
#include <iostream> 
using namespace std;

int deleteElement(int arr[], int n, int x) 
{ 
   
     int i;
    for ( i = 0; i < n; i++) 
        if (arr[i] == x) 
            break; 
  
    
    if ( i < n) { 
       
        n = n - 1; 
        for (int j = i; j < n; j++) 
            arr[j] = arr[j + 1]; 
    } 
  
    return n; 
} 

int main() 
{ 
    int arr[6] = { 11, 15, 6, 8, 9, 10 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x ; 
    cout << "Enter the element to be deleted: "; 
    cin >> x;
  
    cout << "full array is \n"; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
  
   
    n = deleteElement(arr, n, x); 
  
    cout << "\n After Removal of " << x << " from array\n"; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << endl; 
  
}
