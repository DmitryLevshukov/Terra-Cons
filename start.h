#ifndef START_H_INCLUDED
#define START_H_INCLUDED
///Libraries
#include<iostream>
#include<cstdlib>
#include<thread>
#include<ctime>
#include<fstream>
#include<windows.h>
#include <conio.h>
///Files
#include "couts.h"

///Defines


//Typedefs
typedef long long ll;
typedef short int si;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;

bool IncludesExit = false;
ll BeforeIA, AfterIA;

///LOGS
ifstream ReadLog("C:\\Games\\Terra Cons\\Logs.log");
ofstream InLog("C:\\Games\\Terra Cons\\Logs.log");


bool Check_Logs()
{
    if(ReadLog)
    {
        return true;
    }
    return false;
}

void IncludeAll()
{
    if(!Check_Logs())
    {
        system("cls");
        cout << "Oooops... Game crashed"  << endl;
        cout << "You may read about this problem if you open warns.exe in folder with this game";
        exit(1);
    }
    AfterIA = clock();
    InLog << "[" << AfterIA - BeforeIA << "] Check completed" << endl;

    IncludesExit = true;
}
thread on(IncludeAll);

void launch()
{
    string w = "Welocome to Terra Cons";
    si chars = 22;
    BeforeIA = clock();
    on.detach();

    while(!IncludesExit)
    {
        v(w);
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Loading";
        Sleep(50);
        cout << '.';
        Sleep(50);
        cout << '.';
        Sleep(50);
        cout << '.';
        Sleep(50);
        system("cls");
    }

}




#endif // START_H_INCLUDED
