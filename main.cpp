#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <filesystem>
#include "Dog.h"
#include "Cat.h"
#include "Bunny.h"

using namespace std;

class InvalidChoice {};
class InvalidFileName{};
int main() 
{
  cout << "WELCOME TO THE DAILY EXISTENCE OF PETS" << endl;
  int choice = 10;
  while(choice != 0)
    {
      cout << endl << "What would you like to do (pick a number)" << endl;
      cout << "| 0 - Exit" << endl;
      cout << "| 1 - Create a pet" << endl;
      cout << "| 2 - Load a pet" << endl;
      try
        {
          cin >> choice;
          if(choice != 0 && choice != 1 && choice != 2)
            throw InvalidChoice();
        }
      catch(InvalidChoice ex)
        {
          cout << endl << "Invalid choice, please choose 0, 1 or 2" << endl;
        }
      cout << endl;
      //The next if statements see whether the user wants to make a pet or load one
      if(choice == 0)
        exit(0);
      if(choice == 1)
        {
          //User chooses to make a pet and asked the name they want to set and the type of pet they want
          int petchoice;
          string name;
          cout << "| What name do you want to set for the pet (only characters, no numbers)" << endl;
          cin >> name;
          cout << endl << "What type of pet would you like to create (choose a number)" << endl;
          cout << "| If a number not listed is chosen you will be returned to the main menu" << endl;
          cout << "| 0 - Exit" << endl;
          cout << "| 1 - Dog - Easy to amuse, gets hungry often, needs the bathroom occasionally" << endl;
          cout << "| 2 - Cat - Hard to amuse, rarely gets hungry, needs the bathroom occasionally" << endl;
          cout << "| 3 - Bunny - Fair to amuse, gets hungry often, needs the bathroom occasionally" << endl;
          try
          {
            cin >> petchoice;
            if(choice != 0 && choice != 1 && choice != 2 && choice != 3)
              throw InvalidChoice();
          }
          catch(InvalidChoice ex)
          {}
          if(petchoice == 0)
            exit(0);
          if(petchoice == 1)
          {
            //If user chooses dog this if statement is triggered and they can play with the dog
            Dog pet(name, 1);
            int action = 10;
            cout << endl << "Congrats on adopting your new dog!" << endl;
            cout << "     |\_/|                  " << endl;
            cout << "     | @ @   Woof! " << endl;
            cout << "     |   <>              _  " << endl;
            cout << "     |  _/\------____ ((| |))" << endl;
            cout << "     |               `--' |   " << endl;
            cout << " ____|_       ___|   |___.' " << endl;
            cout << "/_/_____/____/_______| " << endl;
            while(action != 7)
              {
                cout << endl << "| What would you like to do next? (pick a number)" << endl;
                cout << "| *** 3-5 have a chance to increase the happiness, level, and special stat ***" << endl;
                cout << "| 1 - Feed your dog" << endl;
                cout << "| 2 - Help your dog use the bathroom" << endl;
                cout << "| 3 - Take your dog out for a quick sprint" << endl;
                cout << "| 4 - Take your dog and send them to chase something" << endl;
                cout << "| 5 - Take your dog out to play catch" << endl;
                cout << "| 6 - See the needs and stats of your dog" << endl;
                cout << "| 7 - Save and exit" << endl;
                cout << "| If a number is entered that is not in the list above, you will be asked to choose again" << endl;
                try
                {
                  cin >> action;
                  if(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 &&   choice != 6 && choice != 7)
                    throw InvalidChoice();
                }
                catch(InvalidChoice ex)
                  {}
                if(action == 1)
                  pet.feed();
                if(action == 2)
                  pet.bathroom();
                if(action == 3)
                  pet.sprint();
                if(action == 4)
                  pet.chase();
                if(action == 5)
                  pet.catchball();
                if(action == 6)
                  pet.print();
                if(action == 7)
                {
                  pet.save();
                  exit(0);
                }
                pet.changeBladder();
                pet.changeSatiation();
                cout << endl;
              }
          }
          if(petchoice == 2)
          {
            //If user chooses cat this if statement is triggered and they can play with the cat
            Cat pet(name, 2);
            int action = 10;
            cout << endl << "Congrats on adopting your new cat!" << endl;
            cout << "    /\___/\ " << endl;
            cout << "   /       \ " << endl;
            cout << "  l  u   u  l" << endl;
            cout << "--l----*----l--" << endl;
            cout << "   \   w   /     - Meow!" << endl;
            cout << "     ======" << endl;
            cout << "   /       \ __" << endl;
            cout << "   l        l\ \ " << endl;
            cout << "   l        l/ / " << endl;
            cout << "  l  l l   l /" << endl;
            cout << "   \ ml lm /_/" << endl;
            while(action != 7)
              {
                cout << endl << "| What would you like to do next? (pick a number)" << endl;
                cout << "| *** 3-5 have a chance to increase the happiness, level, and special stat ***" << endl;
                cout << "| 1 - Feed your cat" << endl;
                cout << "| 2 - Help your cat use the bathroom" << endl;
                cout << "| 3 - Command your cat to swat" << endl;
                cout << "| 4 - Command your cat to scratch" << endl;
                cout << "| 5 - Command your cat to tailwhip" << endl;
                cout << "| 6 - See the needs and stats of your cat" << endl;
                cout << "| 7 - Save and exit" << endl;
                cout << "| If a number is entered that is not in the list above, you will be asked to choose again" << endl;
                try
                {
                  cin >> action;
                  if(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7)
                    throw InvalidChoice();
                }
                catch(InvalidChoice ex)
                  {}
                if(action == 1)
                  pet.feed();
                if(action == 2)
                  pet.bathroom();
                if(action == 3)
                  pet.swat();
                if(action == 4)
                  pet.scratch();
                if(action == 5)
                  pet.tailwhip();
                if(action == 6)
                  pet.print();
                if(action == 7)
                {
                  pet.save();
                  exit(0);
                }
                pet.changeBladder();
                pet.changeSatiation();
                cout << endl;
              }
          }
          if(petchoice == 3)
          {
            //If user chooses bunny this if statement is triggered and they can play with the bunny
            Bunny pet(name, 3);
            int action = 10;
            cout << endl << "Congrats on adopting your new bunny!" << endl;
            cout << "                      .-. " << endl;
            cout << "                     /  |" << endl;
            cout << "                    /  /" << endl;
            cout << "                   / ,/" << endl;
            cout << "       .-------.--- /" << endl;
            cout << "      |._ __.-/ o. o\ " << endl;
            cout << "       | |   (    Y  )" << endl;
            cout << "              )     /" << endl;
            cout << "             /     (" << endl;
            cout << "            /       Y" << endl;
            cout << "        .-/         |" << endl;
            cout << "       /  _     \    \ " << endl;
            cout << "      /    `.  . ) /  )" << endl;
            cout << "     Y       )( / /(,/" << endl;
            cout << "    ,|      /     )" << endl;
            cout << "   ( |     /     /" << endl;
            cout << "     \_  (__   (__     " << endl; 
            cout << "       \-._,)--._,)" << endl;
            while(action != 7)
              {
                cout << endl << "| What would you like to do next? (pick a number)" << endl;
                cout << "| *** 3-5 have a chance to increase the happiness, level, and special stat ***" << endl;
                cout << "| 1 - Feed your bunny" << endl;
                cout << "| 2 - Help your bunny use the bathroom" << endl;
                cout << "| 3 - Command your bunny to leap" << endl;
                cout << "| 4 - Command your bunny to longjump" << endl;
                cout << "| 5 - Take your bunny outside to do some hurdles" << endl;
                cout << "| 6 - See the needs and stats of your bunny" << endl;
                cout << "| 7 - Save and exit" << endl;
                cout << "| If a number is entered that is not in the list above, you will be asked to choose again" << endl;
                try
                {
                  cin >> action;
                  if(choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7)
                    throw InvalidChoice();
                }
                catch(InvalidChoice ex)
                  {}
                if(action == 1)
                  pet.feed();
                if(action == 2)
                  pet.bathroom();
                if(action == 3)
                  pet.leap();
                if(action == 4)
                  pet.longjump();
                if(action == 5)
                  pet.hurdle();
                if(action == 6)
                  pet.print();
                if(action == 7)
                {
                  pet.save();
                  exit(0);
                }
                pet.changeBladder();
                pet.changeSatiation();
                cout << endl;
              }
          }
          
        }
      if(choice == 2)
        {
          //If user chooses to load a pet this if statement is triggered
          string name;
          int type;
          int level;
          int satiation;
          int happiness;
          int bladder;
          int special;
          int typecheck;
          cout << "What is the name of your pet (case sensitive)" << endl;
          cin >> name;
          cout << endl << "Is your pet a (pick a number):" << endl; 
          cout << "| 1 - Dog" << endl;
          cout << "| 2 - Cat" << endl;
          cout << "| 3 - Bunny" << endl;
          cin >> type;
          if(type == 1)
          {
            //If user opens a dog file this if statement is triggered and they can play with the dog
            ifstream fin(name);
            try
            {
              if(!fin.is_open())
                throw InvalidFileName();
              fin >> typecheck;
              if(type != typecheck)
                throw InvalidFileName();
              fin >> name;
              fin >> level;
              fin >> satiation;
              fin >> happiness;
              fin >> bladder;
              fin >> special;
              fin.close();
              Dog pet(type, name, level, satiation, happiness, bladder, special);
              int action = 10;
              pet.passtime();
              while(action != 7)
                {
                  cout << endl << "| What would you like to do next? (pick a number)" << endl;
                  cout << "| *** 3-5 have a chance to increase the happiness, level, and special stat ***" << endl;
                  cout << "| 1 - Feed your dog" << endl;
                  cout << "| 2 - Help your dog use the bathroom" << endl;
                  cout << "| 3 - Take your dog out for a quick sprint" << endl;
                  cout << "| 4 - Take your dog and send them to chase something" << endl;
                  cout << "| 5 - Take your dog out to play catch" << endl;
                  cout << "| 6 - See the needs and stats of your dog" << endl;
                  cout << "| 7 - Save and exit" << endl;
                  cout << "| If a number is entered that is not in the list above, you will be asked to choose again" << endl;
                  try
                  {  
                    cin >> action;
                  }
                  catch(InvalidChoice ex)
                    {}
                  if(action == 1)
                    pet.feed();
                  if(action == 2)
                    pet.bathroom();
                  if(action == 3)
                    pet.sprint();
                  if(action == 4)
                    pet.chase();
                  if(action == 5)
                    pet.catchball();
                  if(action == 6)
                    pet.print();
                  if(action == 7)
                  {
                    pet.save();
                    exit(0);
                  }
                  pet.changeBladder();
                  pet.changeSatiation();
                  pet.win();
                  cout << endl;
                }
            }
            catch(InvalidFileName ex)
              {
                cout << "Could not find the pet, returning to the main menu" << endl << endl;
              }
          }
          if(type == 2)
          {
            //If user opens a cat file this if statement is triggered and they can play with the cat
            ifstream fin(name);
            try
            {
              if(!fin.is_open())
                throw InvalidFileName();
              fin >> typecheck;
              if(type != typecheck)
                throw InvalidFileName();
              fin >> name;
              fin >> level;
              fin >> satiation;
              fin >> happiness;
              fin >> bladder;
              fin >> special;
              fin.close();
              Cat pet(type, name, level, satiation, happiness, bladder, special);
              int action = 10;
              pet.passtime();
              while(action != 7)
                {
                  cout << endl << "| What would you like to do next? (pick a number)" << endl;
                  cout << "| *** 3-5 have a chance to increase the happiness, level, and special stat ***" << endl;
                  cout << "| 1 - Feed your cat" << endl;
                  cout << "| 2 - Help your cat use the bathroom" << endl;
                  cout << "| 3 - Command your cat to swat" << endl;
                  cout << "| 4 - Command your cat to scratch" << endl;
                  cout << "| 5 - Command your cat to tailwhip" << endl;
                  cout << "| 6 - See the needs and stats of your cat" << endl;
                  cout << "| 7 - Save and exit" << endl;
                  cout << "| If a number is entered that is not in the list above, you will be asked to choose again" << endl;
                  try
                  {  
                    cin >> action;
                  }
                  catch(InvalidChoice ex)
                    {}
                  if(action == 1)
                    pet.feed();
                  if(action == 2)
                    pet.bathroom();
                  if(action == 3)
                    pet.swat();
                  if(action == 4)
                    pet.scratch();
                  if(action == 5)
                    pet.tailwhip();
                  if(action == 6)
                    pet.print();
                  if(action == 7)
                  {
                    pet.save();
                    exit(0);
                  }
                  pet.changeBladder();
                  pet.changeSatiation();
                  pet.win();
                  cout << endl;
                }
            }
            catch(InvalidFileName ex)
              {
                cout << "Could not find the pet, returning to the main menu" << endl << endl;
              }
          }
          if(type == 3)
          {
            //If user opens a bunny file this if statement is triggered and they can play with the bunny
            ifstream fin(name);
            try
            {
              if(!fin.is_open())
                throw InvalidFileName();
              fin >> typecheck;
              if(type != typecheck)
                throw InvalidFileName();
              fin >> name;
              fin >> level;
              fin >> satiation;
              fin >> happiness;
              fin >> bladder;
              fin >> special;
              fin.close();
              Bunny pet(type, name, level, satiation, happiness, bladder, special);
              int action = 10;
              pet.passtime();
              while(action != 7)
                {
                  cout << endl << "| What would you like to do next? (pick a number)" << endl;
                  cout << "| *** 3-5 have a chance to increase the happiness, level, and special stat ***" << endl;
                  cout << "| 1 - Feed your bunny" << endl;
                  cout << "| 2 - Help your bunny use the bathroom" << endl;
                  cout << "| 3 - Command your bunny to leap" << endl;
                  cout << "| 4 - Command your bunny to longjump" << endl;
                  cout << "| 5 - Take your bunny outside to do some hurdles" << endl;
                  cout << "| 6 - See the needs and stats of your bunny" << endl;
                  cout << "| 7 - Save and exit" << endl;
                  cout << "| If a number is entered that is not in the list above, you will be asked to choose again" << endl;
                  try
                  {  
                    cin >> action;
                  }
                  catch(InvalidChoice ex)
                    {}
                  if(action == 1)
                    pet.feed();
                  if(action == 2)
                    pet.bathroom();
                  if(action == 3)
                    pet.leap();
                  if(action == 4)
                    pet.longjump();
                  if(action == 5)
                    pet.hurdle();
                  if(action == 6)
                    pet.print();
                  if(action == 7)
                  {
                    pet.save();
                    exit(0);
                  }
                  pet.changeBladder();
                  pet.changeSatiation();
                  pet.win();
                  cout << endl;
              }
            }
            catch(InvalidFileName ex)
              {
                cout << "Could not find the pet, returning to the main menu" << endl << endl;
              }
          }
        }
    }
}