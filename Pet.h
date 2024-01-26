#ifndef PET_H
#define PET_H

#include <iostream>
#include <fstream>
using namespace std;

class Pet{
  protected:
    int level;
    int satiation;
    int happiness;
    int bladder;
    string name;
    int type;
  public:
    Pet(string, int);
    Pet(int _type, string _name, int _level, int _satiation, int _happiness, int _bladder): type (_type), name(_name), level(_level), satiation(_satiation), happiness(_happiness), bladder(_bladder)
    {}
    void print();
};



Pet::Pet(string _name, int _type)
{
  level = 1;
  satiation = 100;
  happiness = 100;
  bladder = 100;
  name = _name;
  type = _type;
}



void Pet::print()
{
  cout << endl << name << ": "<< endl;
  cout << "Level: " << level << endl;
  cout << "Satiation: " << satiation << endl;
  cout << "Happiness: " << happiness << endl;
  cout << "Bladder: " << bladder << endl;
}

#endif
