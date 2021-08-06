#include <iostream>
#include <iterator>
#include <map>
#include <type_traits>
using namespace std;
int main(){
    map<int,string>myMap;

myMap[1]="First";
myMap[2]="second";
myMap[3]="Third";
myMap[14]="Fourth";
myMap.insert({3,"Five_No_Man"});
for(int i=0;i<myMap.size();i++){
    cout<<myMap[i]<<endl;
}
cout<<"----------"<<myMap.size()<<"-------"<<endl;
std::cout << myMap.find(14) << std::endl;



}