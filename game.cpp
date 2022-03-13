#include<iostream>
#include<cstdlib>
using namespace std;
const char rock= 'r';
const char paper= 'p';
const char sccissor='s';
 char getcomputeroption()
{
	int rand(void);
	int num=rand() % 3 + 1;
	if(num==1) return 'r';
	if(num==2) return 'p';
	if(num==3) return 's';
}
char getuseroption()
{
	char ch;
	cout<<"......Rock,Paper and Sccissor Game is begin......."<<endl;
	cout<<"rules of the game.....you have to choose only one option in th following........."<<endl;
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	cout<<"(r) for Rock"<<"-----"<<"(p) for Paper"<<"--------"<<"(s) for sccissor"<<"------"<<endl;
	cin >> ch;
	while(ch!='r' && ch!='p' && ch!= 's')
	{
	cout<<"oopsss!.....Your entered option is wrong............please choose only the given option only......"<<endl;
	cin>>ch;
    }
    return ch;
}
void showselectedoptions(char option)
{
	if(option=='r') cout<<"ROCK"<<endl;
	if(option=='p') cout<<"PAPER"<<endl;
	if(option=='s') cout<<"SCCISSOR"<<endl;
}
void choosewinner( char uchoice, char cchoice)
{
	if( uchoice==rock && cchoice==paper){
		cout<<"COMPUTER WINS.....because rock wraps paper"<<endl;
		cout<<"......................................"<<endl;
		cout<<"it's okay....try again"<<endl;
	}
	else if(uchoice==paper && cchoice==sccissor)
	{
		cout<<"COMPUTER WINS.....because sccissor cut paper"<<endl;
		cout<<".........................................."<<endl;
		cout<<"it's okay to lose sometimes...."<<endl;
	}
	else if (uchoice==sccissor && cchoice==rock){
		cout<<"COMPUTER WINS......because rock smaesh sccissor"<<endl;
		cout<<"................................................."<<endl;
		cout<<"take one more try...hope you will win this time"<<endl;
	}
	else if( uchoice==rock && cchoice==sccissor){
		cout<<"YOU WINS.......because rock smaeshes sccissor easily"<<endl;
		cout<<"..................................................."<<endl;
		cout<<"hurreyyyyy....."<<endl;
	}
	else if(uchoice==paper && cchoice==rock){
		cout<<"YOU WINS.....because paper wraps rock"<<endl;
		cout<<"............................................"<<endl;
		cout<<"congraulations buddy....."<<endl;
	}
	else if(uchoice==sccissor && cchoice==paper)
	{
		cout<<"YOU WINS.......because sccissr cut paper easily"<<endl;
		cout<<"....................................................."<<endl;
		cout<<"wow...really nice"<<endl;
	}
	else{
		cout<<"====================================="<<endl;
		cout<<"ahhh TIE.....try again and win"<<endl;
	}
	
}
int main()
{
	char uchoice;
	char cchoice;
	uchoice = getuseroption();
	cout<<"your choice is:"<<endl;
	showselectedoptions(uchoice);
	
	cout<<"computer choice is:"<<endl;
	cchoice= getcomputeroption();
	showselectedoptions(cchoice);
	choosewinner (uchoice , cchoice);
	return 0;
}
  
