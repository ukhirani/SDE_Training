// Let us implement unordered maps, shall we ??

#include<bits/stdc++.h>
using namespace std;

int main(){
  unordered_map<string,int> hello;

//inserting in an unordered map

  hello.insert({"hello",3});
  hello.insert({"helo",3});
  hello.insert({"helasdfasdlo",3});
  hello.insert({"heasdfalo",3});
  hello.insert({"heasdfllo",3});
  hello.insert({"hefasdfasdllo",3});
  hello.insert({"helasdfasdlo",3});



  unordered_map<string,int>::iterator iter;
  for(iter = hello.begin();iter != hello.end();iter++){
    cout<<iter->first<<"\t"<<iter->second<<endl;




  }

}