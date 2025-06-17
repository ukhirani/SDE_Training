// Let us implement unordered maps, shall we ??

#include<bits/stdc++.h>
using namespace std;

int main(){
  map<string,int> hello;

//inserting in an unordered map

  hello.insert({"hello",3});
  hello.insert({"helo",3});
  hello.insert({"helasdfasdlo",3});


  // Way 1 of accessing the map
  cout<<endl<<"Way 1"<<endl;
  map<string,int>::iterator iter;
  for(iter = hello.begin();iter != hello.end();iter++){
    cout<<iter->first<<"\t"<<iter->second<<endl;
  }

  //Way 2 of accessing the map
  cout<<endl<<"Way 2"<<endl;
  for(auto yello:hello){
    cout<<yello.first<<"\t"<<yello.second<<endl;
  }

  //Way 3 of accessing the map
  cout<<endl<<"Way 3"<<endl;

  for(auto [First,Second]:hello){
    cout<<First<<"\t"<<Second<<endl;
  }

