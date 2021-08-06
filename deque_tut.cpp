#include <iostream>
using namespace std;
#include <deque>
int main(){

deque <int> d;
d.push_back(1);
d.push_back(2);

d.push_front(0);
d.push_front(-1);

for(int i=0;i<d.size();i++){
    cout<<i<<"th elemt of this deque is "<<d[i]<<endl;
}
cout<<"3rd element of this dequeue is (by Direct access)"<<d[3]<<endl;

cout<<"------------------------------------------------------------"<<endl;
d.pop_front();
d.pop_back();
for(int i=0;i<d.size();i++){
    cout<<i<<"th elemt of this deque is "<<d[i]<<endl;
}

cout<<"using at keyword "<<d.at(1)<<endl;


cout<<d.empty()<<endl;
std::cout << d.size() << std::endl;
// cout<<"This is the erase operation on the 
cout<<"max size of the deque is :"<<d.max_size()<<endl;
cout<<"max size of the deque is :"<<d.max_size()<<endl;


}