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
#include "start.h"
#include "UI.h"
///Defines


//Typedefs
typedef long long ll;
typedef short int si;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;
string world;
si to;
main(){
while(true)
{
launch();
to=main_menu();

if(to==1)
{
  world=change_world_menu();
  if(world=="0x0x0x0x0x0x0x0x0_1_no_worlds_1_0x0x0x0x0x0x0x0x0")
  {
     cout<<"-_-";
     exit(0);
  }
}
if(to==3)
exit(0);
}

return 0;}
