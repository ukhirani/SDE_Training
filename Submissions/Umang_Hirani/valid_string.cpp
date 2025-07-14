#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
unordered_map<char, int> hello;
map<int, int> woohoo;
    for(int i = 0;i<s.size();i++){
        hello[s[i]]++;
    }
    int pass = 0;
    int flag = true;
    int curr_element;
    int maxx = INT_MIN;
    int minn = INT_MAX;

    int hello_count = 0;
    for(auto [first,second]:hello){
        woohoo[second]++;
        // hello_count++;
    }
    int store = 0;
    int count = 0;

    for(auto [freq,num]:woohoo){
        count++;
        cout<<freq<<" "<<num<<endl;
        if(count==3){
            return "NO";
            break;
        }


        if(flag){
            flag=false;
            store = freq;
            hello_count = num;
        }else{

            if(abs(freq-store)==1){
                if(num>1 && hello_count>1){
                    return "NO";
                }
            }else{
                if(store==1 && hello_count==1){
                    return "YES";
                }
                return "NO";
            }
        }
    }

    return "YES";











}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
