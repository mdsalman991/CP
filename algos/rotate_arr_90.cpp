// rotate by 90 
#include<bits/stdc++.h>
using namespace std;




int main(){
    int n = 3;
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    // transpose the matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
               if(j>i) swap(arr[i][j],arr[j][i]);
        }
    }
    
    // swap columns    
    for(int j=0;j<n/2;j++){
        for(int i=0;i<n;i++){
            swap(arr[i][j],arr[i][n-1-j]);
        }
    }
    cout << "arr" <<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }
    
    return 0;
}