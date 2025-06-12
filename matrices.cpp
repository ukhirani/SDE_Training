#include "bits/stdc++.h"
#include <vector>
using namespace std;
int main(
){
    int m,n;
    cout<<"enter the number of rows followed by number of columns : "<<endl;
    cin >> m >> n;
    vector<vector<int>> matrix(m);

    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            int element ;
            cout<<"Enter the "<<j<<"th element of the "<<i<<"th row : ";
            cin>>element;
            matrix[i].push_back(element);
        }
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){

            cout<<matrix[i][j]<<"\t";

        }
        cout<<endl;
    }
}
