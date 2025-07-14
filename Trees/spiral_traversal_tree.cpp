#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1},{2,3},{4,5,6,7},{'\0',8,'\0',9,'\0',10,'\0',11}};
    cout<<"The input tree"<<endl;
    for(auto x:matrix){
        for(int i = 0;i<x.size();i++){
            cout<<x[i]<<"\t";
        }
        cout<<endl;
    }



}
