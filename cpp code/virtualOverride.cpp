#include<iostream>
using namespace std;

class Instrument {
  public:
    virtual void play(){
        cout << "Playing instrument...\n";
    }
};

class Guitar : public Instrument {
    public:
        void play(){
            cout << "Playing guitar...\n";
        }
};

class Piano : public Instrument {
    public:
        void play(){
            cout << "Playing Piano...\n";
        }
};

int main()
{
    Instrument* instrument;  

    Guitar guitar;
    Piano piano;

    instrument = &guitar;
    instrument->play();

    instrument = &piano;
    instrument->play();

    return 0;
}