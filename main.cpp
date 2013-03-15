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
        cout<<"1"<<setw(6)<<"Add Person"<<endl;
        cout<<"2"<<setw(6)<<"Remove Person"<<endl;
        cout<<"3"<<setw(6)<<"Edit Person"<<endl;
        cin>>cmd;
        if(cmd==1) {
            //Person temp;
            //persons.push_back(temp);
        }
    }    
}
