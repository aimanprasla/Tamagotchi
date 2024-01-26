#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <fstream>
#include "Pet.h"
using namespace std;

class Cat : public Pet{
  private:
    int strength;
  public:
    Cat(string name, int type): Pet(name, type), strength(1)
    {}
    Cat(int type, string name, int level, int satiation, int happiness, int bladder, int _strength): Pet(type, name, level, satiation, happiness, bladder), strength(_strength)
    {}
    void changeBladder();
    void changeSatiation();
    void swat();
    void scratch();
    void tailwhip();
    void print();
    void save();
    void passtime();
    void win();
    void feed() {
      satiation = 100;
      cout << endl << "Your cat is now full" << endl;
    }
    void bathroom() {
      bladder = 100;
      cout << endl << "Your cat is now relieved" << endl;
    }

};


void Cat::changeBladder() 
{
  if(bladder <= 0)
  {
    cout << endl << "Your cat, let go of his urges and dirtied up your home" << endl;
    cout << "Remember cats have bladders too" << endl << endl;
    bladder = 100;
  }
  bladder--;
}



void Cat::changeSatiation() 
{
  satiation--;
  if(satiation == 0)
  {
    if(satiation == 0)
    {
      cout << endl << "Unfortunately your cat has gone to the after life due to your negligence of poor feeding" << endl;
      cout << "You may still play with this save file upon reload, but your stats will be reset" << endl;
      cout << "But never forget, you let your precious cat pass away" << endl;
      cout << endl << "Below are your cat's stats upon death" << endl;
      this->print();
      level = 1;
      satiation = 100;
      bladder = 100;
      happiness = 100;
      strength = 1;
      this->save();
      exit(0);
    }
  }
}



void Cat::win()
{
  if(level >= 100 && strength >= 100)
  {  
    cout << endl << "Congratulations you have achieved a major feat and beat the game!" << endl;
    cout << "Your cat's level and special stat are greater than/equal to 100" << endl;
    cout << "You are qualified to raise a pet" << endl;
    cout << "Your save file will now be reset and a final picture of your cat will be shown" << endl;
    cout << "         _                        " << endl;
    cout << "   \`*-.                    " << endl;
    cout << "    )  _`-.                 " << endl;
    cout << "   .  : `. .                " << endl;
    cout << "   : _   '  \               " << endl;
    cout << "   ; *` _.   `*-._          " << endl;
    cout << "   `-.-'          `-.       " << endl;
    cout << "    ;       `       `.     " << endl;
    cout << "     :.       .        \    " << endl;
    cout << "     . \  .   :   .-'   .   " << endl;
    cout << "     '  `+.;  ;  '      :   " << endl;
    cout << "     :  '  |    ;       ;-. " << endl;
    cout << "     ; '   : :`-:     _.`* ;" << endl;
    cout << "  .*' /  .*' ; .*`- +'  `*' " << endl;
    cout << "  `*-*   `*-*  `*-*'" << endl;
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    strength = 1;
    this->save();
    exit(0);
  }
  else if(level >= 100 && strength < 100)
  {
    cout << endl << "Congratulations you have beat the game" << endl;
    cout << "Your cat's level is greater than/equal to 100" << endl;
    cout << "You are qualified to raise a pet" << endl;
    cout << "Your save file will now be reset" << endl;
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    strength = 1;
    this->save();
    exit(0);
  }
}



void Cat::swat()
{
  int randomStr = rand() % 2;
  int randomLvl = rand() % 2;
  if(randomStr == 1)
    strength += 1;
  if(randomLvl == 1)
  {
    level += 1;
  }
  if(happiness < 100)
  {
    happiness = happiness + rand() % (100 - happiness); 
    if(happiness > 100)
      happiness = 100;
  }
  int randomswat = strength + (rand() % 50);
  cout << endl << "Your cat swatted at your curtains for " << randomswat << " second(s)" <<  endl;
}



void Cat::scratch()
{
  int randomStr = rand() % 6;
  int randomLvl = rand() % 6;
  if(randomStr == 1)
    strength += 1 + rand() % 3;
  if(randomLvl == 1)
  {
    level += 1 + rand() % 3;
  }
  if(happiness < 100)
  {
    happiness = happiness + rand() % (100 - happiness); 
    if(happiness > 100)
      happiness = 100;
  }
  int randomscratch = strength + (rand() % 50);
  cout << endl << "Your cat scratched your pillows for " << randomscratch << " second(s)" <<  endl;
}



void Cat::tailwhip()
{
  int randomStr = rand() % 11;
  int randomLvl = rand() % 11;
  if(randomStr == 1)
    strength += 1 + rand() % 5;
  if(randomLvl == 1)
  {
    level += 1 + rand() % 5;
  }
  if(happiness < 100)
  {
    happiness = happiness + rand() % (100 - happiness); 
    if(happiness > 100)
      happiness = 100;
  }
  int randomwhip = strength + (rand() % 50);
  cout << endl << "Your cat whipped the neighbor's cat " << randomwhip << " time(s)" <<  endl;
}



void Cat::print()
{
  Pet::print();
  cout << "Strength: " << strength << endl << endl;
}



void Cat::save()
{
  ofstream fout(name);
  fout << type << " " << name << " " << level << " " << satiation << " " << happiness << " " << bladder << " " << strength;
  fout.close();
}



void Cat::passtime()
{
  if(satiation == 0)
   {
    cout << endl << "Unfortunately your cat has gone to the after life due to your negligence of poor feeding" << endl;
    cout << "You may still play with this save file upon reload, but your stats will be reset" << endl;
    cout << "But never forget, you let your precious cat pass away" << endl;
    cout << endl << "Below are your cat's stats upon death" << endl;
    this->print();
    level = 1;
    satiation = 100;
    bladder = 100;
    happiness = 100;
    strength = 1;
    this->save();
    exit(0);
  }
  satiation = satiation - (rand() % satiation);
  happiness = happiness - (rand() % happiness);
  if(bladder == 0)
  {
    cout << endl << "Your cat, let go of his urges and dirtied up your home while you were away" << endl;
    cout << "Remember cats have bladders too" << endl << endl;
    bladder = 100;
  }
  bladder = bladder - (rand() % bladder + 1);
  if(bladder < 20)
    cout << endl << "Your cat really needs the bathroom" << endl;
  if(satiation < 20)
    cout << endl << "Your cat really needs food" << endl;
  if(happiness < 20)
    cout << endl << "Your cat really needs some attention" << endl;
  cout << endl << "Your cat missed you while you were away" << endl;
  cout << "             ／＞　 フ" << endl;
  cout << "             | 　_　_| " << endl;
  cout << "           ／` ミ＿xノ " << endl;
  cout << "         /　　　　 |" << endl;
  cout << "        /　 ヽ　　 ﾉ" << endl;
  cout << "        │　　|　|　|" << endl;
  cout << "    ／￣|　　" << endl;
  cout << "    |　|　|" << endl;
  cout << "    (￣ヽ＿_ヽ_)__)" << endl;
  cout << "    ＼二)" << endl << endl;


}
#endif