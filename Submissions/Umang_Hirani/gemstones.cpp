#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gemstones' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY arr as parameter.
 */

int getnum(char c){
    // cout<<((int)c - (int)'a')<<endl;
    return (int)c - (int)'a';

}

int gemstones(vector<string> arr) {
    map<char,int> hello;
    int val;
    int yolo = 0;
    for(string x:arr){
        for(int i = 0;i<x.size();i++){
            val = getnum(x[i]);
            hello[yolo]= hello[yolo] | (1<<val);
            cout<<"woohoo"<<hello[yolo]<<endl;

        }

        yolo++;

        cout<<"--------------"<<endl;
    }

    int answer = INT_MAX;
    // cout<<"answer = "<<answer;

    //  while(n){
    //     count++;
    //     n = n&(n-1);
    // }
    // cout<<"the effing count"<<count<<endl;
    for(auto [first,second]:hello){
        cout<<"second "<<second<<endl;
        answer&=second;
        cout<<"answer "<<answer<<endl;
    }
    int n = answer;
    int count = 0;
    // cout<<answer;
    while(n){
        count++;
        n = n&(n-1);
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
