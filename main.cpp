#include<iostream>
#include<iomanip>
using namespace std;
#include"Person.hpp"
int main()
{
//    vector<Person>persons;
    bool run=true;
    while(run)
    {
        char cmd;
        cout<<"Personality Generator"<<endl;
        cout<<setw(6)<<setfill('-')<<left<<"1"<<"Add Person"<<endl;
        cout<<setw(6)<<"2"<<"Remove Person"<<endl;
        cout<<setw(6)<<"3"<<"Edit Person"<<endl;
        cin>>cmd;
        if(cmd==1) {
            //Person temp;
            //persons.push_back(temp);
        }
    }    
}
