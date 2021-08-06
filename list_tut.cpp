#include <iostream>
#include <list>
using namespace std;
void showList(list <int> l)
{   list<int> ::iterator itr;
for(itr=l.begin();itr!=l.end();++itr)    
cout<<"-----"<<*itr<<"------"<<endl;
}
int main(){
list <int>l;
l.push_back(104);
l.push_back(103);
l.push_back(102);
l.push_back(101);
showList(l);
l.push_front(105);
showList(l);
cout<<"After poping back front "<<endl;
l.pop_back();
showList(l);
cout<<"after poping front"<<endl;
l.pop_front();
showList(l);

cout<<"size fo this list is"<<l.size()<<endl;
cout<<"max_size fo this list is"<<l.max_size()<<endl;

// copy one list into other list
list<int>l2(l);
showList(l2);


}