#include<vector>
//#include"Item.hpp"
//#include"Location.hpp"

using namespace std;

#ifndef PERSON_HPP
#define PERSON_HPP

enum sor { SET, RANDOM };

class Person {

    string              name;
    string              mentalill;

    int                 hp;
    int                 baseDMG;

    bool                isDead;

    //Location            currentLocation;

    //vector<Item>        items;

public:
    void setPersonality();
    void setPhobias(sor);
    void moveToLocation();
    //void addItem(Item);
    //void removeItem(Item);

    bool stillAlive();
    //bool hasItem(Item);
};


#endif
