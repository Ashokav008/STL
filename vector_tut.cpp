#include<iostream>

#include <ostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);

    v.size();
    cout<<"capacity of this vector"<<v.capacity()<<endl;
    v.push_back(120);
    v.push_back(110);
    cout<<"capacity of this vector"<<v.capacity()<<endl;
    cout<<"size of this vector"<<v.size()<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    std::cout <<"this is front"<< v.front()<< std::endl;
    std::cout <<"this is back" << v.back()<<std::endl;

v.push_back(322);
cout<<"size of the vector is now->>"<<v.size()<<endl;
for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
cout<<"This is the middle element of this vector"<<v[1]<<endl;
v.clear();
for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    cout<<"size after clerr->"<<v.size()<<"capcacity of vector is now"<<v.capacity()<<endl;


// copy one vector to other vector


cout<<"copied vector is :"<<endl;
vector<int>last(v);
for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    cout<<"max sixe of the vecotr(max elemwnt it van handle)"<<v.max_size()<<endl;

}