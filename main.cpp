#include<iostream>
#include<iomanip>
using namespace std;
#include"Person.hpp"
#include<vector>
int main()
{
    vector<Person>persons;
    bool run=true;
    while(run)
    {
        char cmd;
        cout<<"Personality Generator"<<endl;
        cout<<setw(3)<<setfill('-')<<left<<"1"<<setw(20)<<right<<"Add Person"<<endl;
        cout<<setw(3)<<left<<"2"<<setw(20)<<right<<"Remove Person"<<right<<endl;
        cout<<setw(3)<<left<<"3"<<setw(20)<<right<<"Edit Person"<<endl;
        cout<<endl<<setw(3)<<left<<"9"<<setw(20)<<right<<"Start Playing"<<endl;
        cout<<setw(3)<<left<<"0"<<setw(20)<<right<<"Exit"<<endl;
        cin>>cmd;
    }    
}
