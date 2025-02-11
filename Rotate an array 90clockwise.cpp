#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n][n];
    
    // Input the elements of the 3x3 matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    // Print a separator line
    cout << "\n";
    cout << "___________________________________";
    cout << "\n";
    
    int ans[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[j][n-1-i] = a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
