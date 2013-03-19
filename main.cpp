#include<iostream>
#include<iomanip>
using namespace std;
#include"Person.hpp"
#include<vector>

Person newPerson()
{
    system("clear");
    Person temp;
    string temp_name;
    cout<<"Choose name: ";
    cin>>temp_name;
    temp.setName(temp_name);
    return temp;
}

int removePerson(vector<Person>&persons)
{
    system("clear");
    int ret;
    
    do{
        for(int i=0; i < persons.size(); i++) {
            cout<<setw(3)<<left<<i+1<<setw(20)<<right<<persons[i].getName()<<endl;
        }
        cin>>ret;
    }while(!cin.good());

    return ret;
}

int main()
{
    vector<Person>persons;
    bool run=true;
    while(run)
    {
        int cmd;
        system("clear");
        cout<<"Personality Generator"<<endl;
        cout<<setw(3)<<setfill('-')<<left<<"1"<<setw(20)<<right<<"Add Person"<<endl;
        cout<<setw(3)<<left<<"2"<<setw(20)<<right<<"Remove Person"<<right<<endl;
        cout<<setw(3)<<left<<"3"<<setw(20)<<right<<"Edit Person"<<endl;
        cout<<endl<<setw(3)<<left<<"9"<<setw(20)<<right<<"Start Playing"<<endl;
        cout<<setw(3)<<left<<"0"<<setw(20)<<right<<"Exit"<<endl;
        cin>>cmd;

        if(cmd == 1) {
            persons.push_back(newPerson());
        } else if(cmd == 2) {
            persons.erase(persons.begin()+removePerson(persons));
        } else if(cmd == 3) {
            system("clear");
            for(int i=0; i < persons.size(); i++) {
                cout<<setw(3)<<left<<i+1<<setw(20)<<right<<persons[i].getName()<<endl;
            }
            cin>>cmd;
        } else if(cmd == 0) {
            run = false;
        }
    }
    system("clear");    
}
