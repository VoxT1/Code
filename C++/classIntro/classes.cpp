#include <iostream>
#include <list>
using namespace std;

/* A class has been created, with an object of the class defined in main() */

// class definitions
class Celestial { // base class
private: // only available in-class
    string Domain;
    int WingSpan;
    list<string> ReallyCoolShinyThings;

protected: // only available in-class and in derived class
    string Name;
    int Respect;

public: // available anywhere
    // the constructor creates an object with given parameters
    Celestial(string name, string domain, int wingspan){
        Name = name;
        Domain = domain;
        Respect = 0;
        WingSpan = wingspan;
    }

    // the class method provides a way to access and change information from outside the private sector
    void GetInfo(){ 
        cout << "Name: " << Name << endl;
        cout << "Domain: " << Domain << endl;
        cout << "Wingspan: " << WingSpan << " meters"<< endl;
        cout << "Respect: " << Respect << endl;
        cout << "Shinies: " << endl;
        for(string shinyThing: ReallyCoolShinyThings){
            cout << shinyThing << endl;
        }
    }
    void OfferShiny(){
        Respect++;
    }
    void StealShiny(){
        if(Respect > 0){
            Respect--;
        }
    }
    void AddShiny(string item){
        ReallyCoolShinyThings.push_back(item);
    }
};

class Angel:public Celestial { // derived class
public:
    // constructors
    Angel(string name, string domain, int wingspan):Celestial(name, domain, wingspan){

    }
    
    // class methods
    void Hosting(){
        cout << Name << " is hosting a large ceremony, advised by a Celestial..." << endl;
        Respect++;
    }
};


// main function
int main(){
    
    Celestial saturn("Saturn","Time",150);
    saturn.AddShiny("Hourglass Scepter");
    saturn.AddShiny("Some really neat old books and scrolls");
    saturn.AddShiny("Clocks");
    saturn.OfferShiny();
    saturn.GetInfo();
    
    cout << endl;

    Angel talmares("Talmares","Skies",0);
    talmares.AddShiny("Crown");
    talmares.Hosting();
    talmares.GetInfo();

    cout << endl;

    Angel heleffa("Heleffa","Peace",0);
    heleffa.OfferShiny();
    heleffa.OfferShiny();
    heleffa.Hosting();
    heleffa.GetInfo();

}