#include<bits/stdc++.h>
#include <climits>
#include <cmath>
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
        cout<<"Number"<<"\t"<<"Deviation"<<"(in %)"<<endl;
    for(int i = 1;i<INT_MAX;i++){

        double vedic_answer = vedic_maths(i);
        double square_root = sqrt(i);

        double deviation = abs(vedic_answer - square_root)/vedic_answer;
        deviation*=100;

        if(deviation>2){
            cout<<i<<"\t"<<deviation<<"%"<<endl;
        }



    }

}
