#include<iostream>
#include<ctime>
#include"Person.hpp"

using namespace std;

void Person::setName(string temp)
{
    name=temp;
}

string Person::getName()
{
    return name;
}

/*

void Person::setPersonality()
{
    sor choice;
    cout<<"SET or RANDOM phobia?"<<endl;
    //cin>>choice;
    setPhobia(choice);
}

void Person::setPhobia(sor choice)
{
    if(true) {
        cout<<"LOL"<<endl;
    } else(true) {
        srand(time(NULL));
        int random;
        random =1;// rand()%;
        if(random == 1){ 
            mentalill += "PHOBIA:";
            random = rand()%8;

            if(random == 0){ 
                mentalill += " Germophobia";
            } else if(random == 1){ 
                mentalill += " Claustrophobia";
            } else if(random == 2){ 
                mentalill += " Hylophobia";
            } else if(random == 3){ 
                mentalill += " Hydrophobia";
            } else if(random == 4){ 
                mentalill += " Homophobia";
            } else if(random == 5){ 
                mentalill += " Achluophobia";
            } else if(random == 6){ 
                mentalill += " Autophobia";
            } else if(random == 7){ 
                mentalill += " Acrophobia";
            } else if(random == 8){ 
                cout<<"lol"<<endl;
            }   
        }   
    }
}
*/
