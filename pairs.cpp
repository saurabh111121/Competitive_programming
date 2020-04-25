/*Creating Sets of Pairs
Example: Making pairs of all even numbers present in an array.

Input: 2 3 1 6 5 8 10 9
Output: (2, 6) (2, 8) (2, 10) (6, 8) (6, 10) (8, 10)

Input: 4 4 6 4
Output: (4, 4) (4, 6)

Input: 24 24 24 24
Output: (24, 24)

Input: 7, 100, 53, 81
Output: No valid pair
*/

#include<bits/stdc++.h> 
using namespace std;

int main(){
     vector<int> v{ 2, 3, 1, 6, 8, 8, 10, 2};     
     set<pair<int,int>> s;
     for(int i=0;i<v.size();i++){
          for(int j=i+1;j<v.size();j++){
               if(v[i]%2==0 && v[j]%2==0){
                    pair<int,int> x = make_pair(v[i],v[j]);
                    s.insert(x);
               }
          }
     }
     bool found = false;
     for(auto const &x : s){
          found = true;
          cout << "(" << x.first << ", " << x.second << ")" << " ";

     }
     if(not found){
          cout << "No valid pair\n";
     }

     return 0;
} 


/*
Sets of pairs in C++
Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it. The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element.

Pair is a simple container defined in <utility> header consisting of two data elements or objects.

The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
Pair is used to combine together two values which may be different in type. Pair provides a way to store two heterogeneous objects as a single unit.
Pair can be assigned, copied and compared. The array of objects allocated in a map or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
The pairs in a set are stored in sorted order, sorted by the key i.e. the first value of the pair.
Sets of Pairs help in performing the following operations:

Add a pair, but do not allow duplicates.
Remove pairs.
Get count of distinct pairs.
Check whether a pair is present in a set or not.
The syntax for creating sets of pairs is:

set<pair<datatype1, datatype2>>set_name;


*/
