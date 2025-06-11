#include<bits/stdc++.h>
#include <cmath>
#include <functional>
using namespace std;

double vedic_maths(int x){
    int closest_sqrt = (int)sqrt(x);
    double diff = x - closest_sqrt*closest_sqrt;
    diff/=2;
    double add = diff/closest_sqrt;
    return closest_sqrt + add;
}
int main ()
{
    vector<pair<double,int>> hello;

        cout<<"Number"<<"\t"<<"Deviation"<<"(in %)"<<endl;
        int count = 0;
        for(int i = 1;i<1e5;i++){
        double vedic_answer = vedic_maths(i);
        double square_root = sqrt(i);
        double deviation = abs(vedic_answer - square_root)/vedic_answer;
        deviation*=100;
        if(deviation>5){
            // cout<<i<<"\t"<<deviation<<"%"<<endl;
            // count++;
            hello.push_back(make_pair(deviation,i));
        }
    }
    sort(hello.begin(),hello.end(),greater<pair<double,int>>());

    for(auto hi:hello){
        cout<<hi.second<<"\t"<<hi.first<<endl;
    }
    // cout<<"count : "<<count<<endl;
}
