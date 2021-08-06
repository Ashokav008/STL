#include<iostream>
using namespace std;
#include <stack>

// void displayStak(stack<int>stk1){
//    while(!stk1.empty()){
//        cout<<stk1.top()<<endl;
//        stk1.pop();
//    }
// }

int main(){
    stack<string>  s;
    s.push("This");
    s.push("Okk");
    s.push("Thanks");

s.pop();

// cout<<s.top()<<endl;
cout<<s.size();

cout<<endl<<s.empty();//0 for false and 1 for true..
}