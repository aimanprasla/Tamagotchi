#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <fstream>
#include "Pet.h"
using namespace std;

class Dog : public Pet{
  private:
    int speed;
  public:
    Dog(string name, int type): Pet(name, type), speed(1)
    {}
    Dog(int type, string name, int level, int satiation, int happiness, int bladder, int _speed): Pet(type, name, level,         satiation, happiness, bladder), speed(_speed)
    {}
    void changeBladder();
    void changeSatiation();
    void sprint();
    void catchball();
    void chase();
    void print();
    void save();
    void passtime();
    void win();
    void feed() {
      satiation = 100;
      cout << endl << "Your dog is now full" << endl;
    }
    void bathroom() {
      bladder = 100;
      cout << endl << "Your dog is now relieved" << endl;
    }

};



void Dog::changeSatiation() 
{
  satiation--;
  if(satiation == 0)
  {
    if(satiation == 0)
    {
      cout << endl << "Unfortunately your dog has gone to the after life due to your negligence of poor feeding" << endl;
      cout << "You may still play with this save file upon reload, but your stats will be reset" << endl;
      cout << "But never forget, you let your precious dog pass away" << endl;
      cout << endl << "Below are your dog's stats upon death" << endl;
      this->print();
      level = 1;
      satiation = 100;
      bladder = 100;
      happiness = 100;
      speed = 1;
      this->save();
      exit(0);
    }
  }
}


void Dog::changeBladder() 
{
  if(bladder <= 0)
  {
    cout << endl << "Your dog, let go of his urges and dirtied up your home" << endl;
    cout << "Remember dogs have bladders too" << endl << endl;
    bladder = 100;
  }
  bladder--;
}



void Dog::win()
{
  if(level >= 100 && speed >= 100)
  {  
    cout << endl << "Congratulations you have achieved a major feat and beat the game!" << endl;
    cout << "Your dog's level and special stat are greater than/equal to 100" << endl;
    cout << "You are qualified to raise a pet" << endl;
    cout << "Your save file will now be reset and a final picture of your dog will be shown" << endl;
    cout << "           .--.             .---. " << endl;
    cout << "          /:.  |.         .| ..  |._.---." << endl;
    cout << "        /:::-.  \.-----;` .-:::.     .::\ "<< endl;
    cout << "        /:: |  `\/  _ _  \    `\:    ::::| "<< endl;
    cout << "    __./    |   /  (o|o)  \     `'.   ':/ "<< endl;
    cout << "   /    .:. /   |   ___   |        \---/ "<< endl;
    cout << "  |    ::::    /:  (._.) .:\ "<< endl;
    cout << "  \    .=     |:         :::| "<< endl;
    cout << "   `  `       \     .-.    :/ "<< endl;
    cout << "               ---`|I|`---| "<< endl;
    cout << "                   |-| "<< endl;
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    speed = 1;
    this->save();
    exit(0);
  }
  else if(level >= 100 && speed < 100)
  {
    cout << endl << "Congratulations you have beat the game" << endl;
    cout << "Your dog's level is greater than/equal to 100" << endl;
    cout << "You are qualified to raise a pet" << endl;
    cout << "Your save file will now be reset" << endl;
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    speed = 1;
    this->save();
    exit(0);
  }
}



void Dog::sprint()
{
  int randomSpd = rand() % 2;
  int randomLvl = rand() % 2;
  if(randomSpd == 1)
    speed += 1;
  if(randomLvl == 1)
  {
    level += 1;
  }
  if(happiness < 100)
  {
    happiness = happiness + (10 + rand() % (100 - happiness)); 
    if(happiness > 100)
      happiness = 100;
  }
  int randomsprint = speed + rand() % 26;
  cout << endl << "Your dog sprinted for " << randomsprint << " second(s)" << endl;
}



void Dog::catchball()
{
  int randomSpd = rand() % 6;
  int randomLvl = rand() % 6;
  if(randomSpd == 1)
    speed += 1 + rand() % 3;
  if(randomLvl == 1)
  {
    level += 1 + rand() % 3;
  }
  if(happiness < 100)
  {
    happiness = happiness + (10 + rand() % (100 - happiness)); 
    if(happiness > 100)
      happiness = 100;
  }
  int randomcatch = 0;
  if(speed < 5)
  {
    randomcatch = rand() - 6;
    if(randomcatch == 1)
      cout << endl << "Your dog caught the ball" << endl;
    else  
      cout << endl << "Your dog missed the ball" << endl;
  }
  if(speed < 15 && speed >= 5)
  {
    randomcatch = rand() - 4;
    if(randomcatch == 1)
      cout << endl << "Your dog caught the ball" << endl;
    else  
      cout << endl << "Your dog missed the ball" << endl;
  }
  if(speed >= 15)
  {
    randomcatch = rand() - 2;
    if(randomcatch == 1)
      cout << endl << "Your dog caught the ball" << endl;
    else  
      cout << endl << "Your dog missed the ball" << endl;
  }
}



void Dog::chase()
{
  int randomSpd = rand() % 11;
  int randomLvl = rand() % 11;
  if(randomSpd == 1)
    speed += 1 + rand() % 5;
  if(randomLvl == 1)
  {
    level += 1 + rand() % 5;
  }
  if(happiness < 100)
  {
    happiness = happiness + (10 + rand() % (100 - happiness)); 
    if(happiness > 100)
      happiness = 100;
  }
  int randomchase = speed + rand() % 31;
  cout << endl << "Your dog chased a target for " << randomchase << " second(s)" << endl;
}



void Dog::print()
{
  Pet::print();
  cout << "Speed: " << speed << endl << endl;
}



void Dog::save()
{
  ofstream fout(name);
  fout << type << " " << name << " " << level << " " << satiation << " " << happiness << " " << bladder << " " << speed;
  fout.close();
}



void Dog::passtime()
{
  if(satiation == 0)
   {
    cout << endl << "Unfortunately your dog has gone to the after life due to your negligence of poor feeding" << endl;
    cout << "You may still play with this save file upon reload, but your stats will be reset" << endl;
    cout << "But never forget, you let your precious dog pass away" << endl;
    cout << endl << "Below are your dog's stats upon death" << endl;
    this->print();
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    speed = 1;
    this->save();
    exit(0);
  }
  satiation = satiation - (rand() % satiation);
  happiness = happiness - (rand() % happiness);
  if(bladder == 0)
  {
    cout << endl << "Your dog, let go of his urges and dirtied up your home while you were away" << endl;
    cout << "Remember dogs have bladders too" << endl << endl;
    bladder = 100;
  }
  bladder = bladder - (rand() % bladder + 1);
  if(bladder < 20)
    cout << endl << "Your dog really needs the bathroom" << endl;
  if(satiation < 20)
    cout << endl << "Your dog really needs food" << endl;
  if(happiness < 20)
    cout << endl << "Your dog really needs some attention" << endl;
  cout << endl << "Your dog missed you while you were away" << endl;
  cout << "/^-----^\ " << endl;
  cout << "V  o o  V" << endl;
  cout << " |  Y  |" << endl;
  cout << "  \ Q /" << endl;
  cout << "  / - | " << endl;
  cout << "  |    | " << endl;
  cout << "  |     |     )" << endl;
  cout << "  || (___|====" << endl << endl;
}

#endif