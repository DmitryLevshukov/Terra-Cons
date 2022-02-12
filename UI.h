#ifndef UI_H_INCLUDED
#define UI_H_INCLUDED
#include<iostream>
#include<vector>
#include<cstdlib>
#include<thread>
#include<ctime>
#include<fstream>
#include<windows.h>
#include <conio.h>
#include "generator.h"
#include "Control.h"
using namespace std;
string l = ">>>";
string r = "<<<";


si main_menu()
{


    si pos = 1;
    while(true)
    {
        system("cls");
        if(pos == 1)
            cout << l;
        cout << "Play";
        if(pos == 1)
            cout << r;
        cout << endl;
        if(pos == 2)
            cout << l;
        cout << "Settings";
        if(pos == 2)
            cout << r;
        cout << endl;
        if(pos == 3)
            cout << l;
        cout << "Exit";
        if(pos == 3)
            cout << r;
        cout << endl;
      si a=UI_control(3,pos);
      if( a==-89)
    return pos;
    else
   pos=a;
    }

}



string create_world_menu()
{
    system("cls");
    cout << ":::Create world:::" << endl;
    cout << "Name: ";
    string name;
    cin >> name;
    ll seed;
    cout << "Seed(0 - random):";
    cin >> seed;
    ll pos = 1;
    while(true)
    {
        system("cls");
        cout << ":::Create world:::" << endl;
        cout << "Name: " << name << endl;
        cout << "Seed(0 - random):" << seed << endl;
        if(pos == 1)
            cout << l << "Continue" << r << endl;
        else
            cout << "Continue" << endl;
        if(pos == 2)
        {
            cout << l << "Cancel" << r << endl;
        }
        else
        {
            cout << "Cancel" << endl;
        }
        si a = UI_control(2,pos);
if(a==-89)
   break;
   else
      pos=a;
    }
    if(pos == 2)
    {

    }
    else
    {
       exit(0);
        gen_world(name,seed);
        return name;
    }
}


string change_world_menu()
{
    vector<string>worlds;
    ifstream get_worlds("C:\\Games\\Terra Cons\\worlds.txt");
    string s, a;
    while(get_worlds >> a)
    {
        if(a == "^&^")
            worlds.push_back(s), s = "";
        else
            s += a;
    }
    ll pos = 1;
    while(true)
    {
        system("cls");
        cout << "Your worlds:" << endl;
        for(int i = 0; i < (ll) worlds.size(); i++)
        {
            cout << i << ". " << worlds[i] << endl;

        }
        cout << endl << endl << endl << endl << endl;
        cout << "If you want to create world, then put c" << endl;
        si c = getch();
        if(c == 99)
        {
            return create_world_menu();

        }
        if(c == 80)
            pos++;
        if(c == 72)
            pos--;
        if(c == 13)
        {
            if(pos - 1 >= 0 && worlds.size() > pos)
                return worlds[pos - 1];
            return "0x0x0x0x0x0x0x0x0_1_no_worlds_1_0x0x0x0x0x0x0x0x0";
        }

        if(pos < 1)
            pos = 3;
        if(pos > 3)
            pos = 1;
    }
}



#endif // UI_H_INCLUDED
