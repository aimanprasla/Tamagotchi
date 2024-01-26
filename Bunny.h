#ifndef BUNNY_H
#define BUNNY_H
#include <iostream>
#include <fstream>
#include "Pet.h"
using namespace std;

class Bunny : public Pet{
  private:
    int jump;
  public:
    Bunny(string name, int type): Pet(name, type), jump(1)
    {}
    Bunny(int type, string name, int level, int satiation, int happiness, int bladder, int _jump): Pet(type, name, level, satiation, happiness, bladder), jump(_jump)
    {}
    void changeBladder();
    void changeSatiation();
    void hurdle();
    void leap();
    void longjump();
    void print();
    void save();
    void passtime();
    void win();
    void feed() {
      satiation = 100;
      cout << endl << "Your bunny is now full" << endl;
    }
    void bathroom() {
      bladder = 100;
      cout << endl << "Your bunny is now relieved" << endl;
    }

};



void Bunny::changeSatiation() 
{
  satiation--;
  if(satiation == 0)
  {
    if(satiation == 0)
    {
      cout << endl << "Unfortunately your bunny has gone to the after life due to your negligence of poor feeding" << endl;
      cout << "You may still play with this save file upon reload, but your stats will be reset" << endl;
      cout << "But never forget, you let your precious bunny pass away" << endl;
      cout << endl << "Below are your bunny's stats upon death" << endl;
      this->print();
      level = 1;
      satiation = 100;
      bladder = 100;
      happiness = 100;
      jump = 1;
      this->save();
      exit(0);
    }
  }
}



void Bunny::changeBladder() 
{
  if(bladder <= 0)
  {
    cout << endl << "Your bunny, let go of his urges and dirtied up your home" << endl;
    cout << "Remember bunnies have bladders too" << endl << endl;
    bladder = 100;
  }
  bladder--;
}



void Bunny::win()
{
  if(level >= 100 && jump >= 100)
  {  
    cout << endl << "Congratulations you have achieved a major feat and beat the game!" << endl;
    cout << "Your bunny's level and special stat are greater than/equal to 100" << endl;
    cout << "You are qualified to raise a pet" << endl;
    cout << "Your save file will now be reset and a final picture of your bunny will be shown" << endl;
    cout << "        :I. .." << endl;
    cout << "        :III/ I. " << endl;
    cout << "              : III  II" << endl;
    cout << "              :  III .II" << endl;
    cout << "              : .III III" << endl;
    cout << "              : III III" << endl;
    cout << "              : III  II" << endl;
    cout << "              : `I/__L_" << endl;
    cout << "            ./        ~~-." << endl;
    cout << "           .   -~~-       `." << endl;
    cout << "           :    .==.         :" << endl;
    cout << "           |    `..b      ___:" << endl;
    cout << "            |           __.`\__/__:" << endl;
    cout << "            `.       ----   _i_--:" << endl;
    cout << "            / `-........:`----" << endl;
    cout << "         /    ,MMMMMMM." << endl;
    cout << "        :     .MMMMMMMMm." << endl;
    cout << "       :      mMMMMMMMMMm:" << endl;
    cout << "      /:       MMMMMMMMMMM:" << endl;
    cout << "    / :       MMMMMMMMMMM:" << endl;
    cout << "  /           `MMMMMMMMM:" << endl;
    cout << " :      \       MMMMMMM :" << endl;
    cout << ":       `:      MMMMMMM: :" << endl;
    cout << ":         `:     `MMMMM:   :" << endl;
    cout << ":      mMMMm      MMMM' :    :" << endl;
    cout << ":     mMMMMMMm    mMMm  :    :" << endl;
    cout << " \    `MMMMMMm    mMMm  :   /" << endl;
    cout << "/~~~   MMMMMMm    mJVm  : /___" << endl;
    cout << ":| |   /`JMMMMm . .m96m  \      |" << endl;
    cout << "~~~~~~~        \_:_|   L_/~~~~~~|" << endl;
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    jump = 1;
    this->save();
    exit(0);
  }
  else if(level >= 100 && jump < 100)
  {
    cout << endl << "Congratulations you have beat the game" << endl;
    cout << "Your bunny's level is greater than/equal to 100" << endl;
    cout << "You are qualified to raise a pet" << endl;
    cout << "Your save file will now be reset" << endl;
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    jump = 1;
    this->save();
    exit(0);
  }
}



void Bunny::hurdle()
{
  int randomJmp = rand() % 2;
  int randomLvl = rand() % 2;
  if(randomJmp == 1)
    jump += 1;
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
  int randomtime = jump + (rand() % 50);
  cout << endl << "Your bunny did the hurdles for " << randomtime << " second(s)" <<  endl;
}



void Bunny::leap()
{
  int randomJmp = rand() % 6;
  int randomLvl = rand() % 6;
  if(randomJmp == 1)
    jump += 1 + rand() % 3;
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
  int randomleap = (jump + 2) + (rand() % 21);
  cout << endl << "Your bunny jumped " << randomleap << " feet into the air" <<  endl;
}



void Bunny::longjump()
{
  int randomJmp = rand() % 11;
  int randomLvl = rand() % 11;
  if(randomJmp == 1)
    jump += 1 + rand() % 5;
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
  int randomlongjump = (jump + 2) + (rand() % 11);
  cout << endl << "Your bunny jumped " << randomlongjump << " feet into the sand pit" << endl;
}



void Bunny::print()
{
  Pet::print();
  cout << "Jump: " << jump << endl << endl;
}



void Bunny::save()
{
  ofstream fout(name);
  fout << type << " " << name << " " << level << " " << satiation << " " << happiness << " " << bladder << " " << jump;
  fout.close();
}



void Bunny::passtime()
{
  if(satiation == 0)
   {
    cout << endl << "Unfortunately your bunny has gone to the after life due to your negligence of poor feeding" << endl;
    cout << "You may still play with this save file upon reload, but your stats will be reset" << endl;
    cout << "But never forget, you let your precious bunny pass away" << endl;
    cout << endl << "Below are your bunny's stats upon death" << endl;
    this->print();
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    jump = 1;
    this->save();
    exit(0);
  }
  satiation = satiation - (rand() % satiation);
  happiness = happiness - (rand() % happiness);
  if(bladder == 0)
  {
    cout << endl << "Your bunny, let go of his urges and dirtied up your home while you were away" << endl;
    cout << "Remember bunnies have bladders too" << endl << endl;
    bladder = 100;
  }
  bladder = bladder - (rand() % bladder + 1);
  if(bladder < 20)
    cout << endl << "Your cat really needs the bathroom" << endl;
  if(satiation < 20)
    cout << endl << "Your cat really needs food" << endl;
  if(happiness < 20)
    cout << endl << "Your cat really needs some attention" << endl;
  cout << endl << "Your bunny missed you while you were away" << endl;
  cout << "            .--,_" << endl;
  cout << "         / ,/ /" << endl;
  cout << "       / // /" << endl;
  cout << "      / // /" << endl;
  cout << "     ..  . (" << endl;
  cout << "    /       \.----._" << endl;
  cout << "   / a     .    .    `-." << endl;
  cout << "  (       .             `." << endl;
  cout << "   `-.-                .  :" << endl;
  cout << "       `..  .  .  .-.    . :" << endl;
  cout << "        : .     ..          :" << endl;
  cout << "       `.   ' :     .   .  :" << endl;
  cout << "        ,        . .     .  .:" << endl;
  cout << "       , .._..   ..   .  __.,`." << endl;
}
#endif