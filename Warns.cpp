//Libraries
#include<iostream>
#include<Windows.h>
#include<thread>
//Typedefs
typedef long long ll;


using namespace std;


ll code;

main(){

cout<<"- Game crashed?\n";
Sleep(200);
cout<<"- It's really sad (\n";
Sleep(200);
cout<<"- But I think I know how to help you!\n";
Sleep(200);
while(true){
cout<<"Write code of your problem:";
cin>>code;
system("cls");
cout<<"Code of your problem:"<<code<<'\n';
if(code == 1)
{
cout<<"Problem:Game not found folder.\nSolve:Make new folder on C:\\Games\\Terra Cons\\ \n";
system("pause");
system("cls");
continue;
}
cout<<"Code of Problem not found(";
system("pause");
system("cls");
}
return 0;}
