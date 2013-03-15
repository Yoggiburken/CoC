#include<iostream>
#include<iomanip>
using namespace std;
#include"Person.hpp"
int main()
{
    bool run=true;
    while(run)
    {
        char cmd;
        cout<<"Personality Generator"<<endl;
        cout<<setw(3)<<setfill('-')<<left<<"1"<<setw(20)<<right<<"Add Person"<<endl;
        cout<<setw(3)<<left<<"2"<<setw(20)<<right<<"Remove Person"<<right<<endl;
        cout<<setw(3)<<left<<"3"<<setw(20)<<right<<"Edit Person"<<endl;
        cout
        cin>>cmd;
    }    
}
