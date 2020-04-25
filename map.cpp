#include<bits/stdc++.h>
#include<iterator>
#include<map> 
using namespace std;
int main(){
     map<int,int> m;
     m.insert(pair<int,int>(1,10));
     m.insert(pair<int,int>(2,20));
     m.insert(pair<int,int>(3,30));
     m.insert(pair<int,int>(4,40));
     m.insert(pair<int,int>(5,50));
     m.insert(pair<int,int>(6,60));

     map<int,int>::iterator itr;//auto could be used here 
     for(itr = m.begin();itr!=m.end();itr++){
          cout << "\t" << itr->first << '\t' << itr->second << '\n';
     }
     cout << endl;
     
     return 0;
}

/*
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have same key values
*/
