#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

unordered_map<string,int> m;

//insertion
//1
pair<string,int> p = make_pair("jatin",3);
m.insert(p);

//2
pair<string,int> pair2("jate",2);
m.insert(pair2);

//3
m["mera"] = 1;
m["mera"] = 2;//updating value

//search
cout<<m["mera"]<<endl;
cout<<m.at("jatin")<<endl;

cout<<m["unknown"]<<endl;//gives 0 (it makes new entry for unknown)

//size
cout<<m.size()<<endl;

//erase
m.erase("jate");
cout<<m.size()<<endl;

//iterate over by the loop
// for(auto i:m){
//     cout<<i.first<<" "<<i.second<<endl;
// }

//iterator
unordered_map<string,int> :: iterator it = m.begin();
//unordered map me order alag aata h generally according to the values of keys
while(it != m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
    //in unoredered map           in map  //based on bst
    //unknown 0                   jatin 3 
    //mera 2                      mera 2   //acording to their insertion
    //jatin 3                     unknown 0
}

}
