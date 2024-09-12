#include<bits/stdc++.h>
using namespace std;
int main(){

    string s1="abc";
    string s2="what";
    s1.insert(1,s2);
    cout<<s1<<endl;

    string s3="basu";
    string s4="hihih";
    s4.append(s3);
    cout<<s4<<endl;

cout <<"Using append with 3 paramter\n";
s4.append(s3,2,3);
cout<<s4<<endl;

    string s5("HEllo");
    string s6("World");
    string s7("Yes");
    string s8("Programming");
    s5.insert(1,s6);
    cout<<"\n Using insert function";
    cout<<endl;
    cout<<s5<<endl;
    s6.replace(1,3,s7);
    cout<<"\n Using replace function\n";
    cout<<s6<<endl;
    s8.erase(1,4);
    cout<<"\nUsing erase function\n";
    cout<<s8<<endl;
    s8.clear();
    cout<<"Output after clear\n"<<s8.length();

}

#include<iostream>
using namespace std;
int main(){
    string s1="acme";
    string s2="zbcrome";
    cout<<s1.compare(s2)<<endl;
    cout<<s1.compare(2,2,s2,5,2)<<endl;
    cout<<s1.compare(2,2,s2);
    return 0;
}