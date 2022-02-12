#ifndef CONTROL_H_INCLUDED
#define CONTROL_H_INCLUDED
///Libs
#include<iostream>
#include<cstdlib>
#include<thread>
#include<ctime>
#include<fstream>
#include<windows.h>
#include <conio.h>
///Typedefs
typedef long long ll;
typedef short int si;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;

si UI_control(si r, si pos)
{
   si c=0;

    c = getch();
if(c==13)
   return -89;
        if(c == 80)
            pos++;
        if(c == 72)
            pos--;
        if(pos < 1)
            pos = r;
        if(pos > r)
            pos = 1;

   return pos;
}
#endif // CONTROL_H_INCLUDED
