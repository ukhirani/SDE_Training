#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    bool flag =  (s[8]=='A') ? true : false;
    int hours = 0;
    string answer;
    string remaining = "";
    for(int i = 0;i<2;i++){
        hours+=(int)pow(10,1-i)*((char)s[i] - (char)'0');
    }
    for(int i = 2;i<s.size()-2;i++){
        remaining+=s[i];
    }
    if(hours==12 && flag==true){
        return ("00" + remaining);
    }else if(hours==12 && flag==false){
        return ("12" + remaining);
    }else if(flag == true){

        hours+=0;


    }else if(flag == false){

        hours+=12;

    }

    char char1,char2;

    char1 = char((int)'0' + hours/10);
    char2 = char((int)'0' + hours%10);

    answer+=char1;
    answer+=char2;
    answer+=remaining;



    return answer;



}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
