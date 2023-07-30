#include<iostream>
 
using namespace std;

class Hero {
    // int value; // gives size 4
    // empty then returns 1 

    // properties
    public :
    int health;
    static int timeToComplete;


    public :
    string nickname;
    char level;

    // getter function
    int getHealth(){
        return health;
    };

    //setter function
    void setterHealth(int h){
        health=h;

    }
    

    // default constructor
    Hero(){
        cout << "constructor Called !" << endl;
    }

    // parameterzed constructor
    Hero(int health,char level , string nickname){
        this->health = health;
        this->level = level;
        this->nickname = nickname;

    };

    void print(){
        cout << "Health is : " << health << endl;
        cout << "level is : " << level<< endl;
        cout << "Nickname is : " << nickname << endl;

    }

    static int random(){
        return timeToComplete;
    }

};


// initialize static member
int Hero::timeToComplete=490;
// datatype classname :: datamember_name = value;


int main(){
    // Hero ramesh;
    // cout << sizeof(h1)<< endl;

    // settin values;
    // ramesh.health =70;
    // ramesh.level='A';
    // ramesh.nickname= "shaktiman";
    // cout << "Name : " << ramesh.nickname << endl;
    // cout << "Health : " << ramesh.health << endl;
    // cout << "Name : " << ramesh.level << endl;




    // using getter and setter
    // cout << ramesh.getHealth() << endl;

    // ramesh.setterHealth(90);

    // cout << ramesh.getHealth() << endl;

    // constructor

     //Hero a;


    // parameterized constructor and this keyword

    // Hero b(10,'a',"rajubhai");
    // b.print();
    


    // copy constructor
    // Hero S(80,'A',"Babu Bhai");
    // S.print();
    // cout << endl;

    // Hero R(S);
    // R.print();
    // cout << endl;

    // static keyword
    // cout << Hero::timeToComplete << endl;


    // static functions
    // cout << Hero::random() << endl;
    



    return 0;
};