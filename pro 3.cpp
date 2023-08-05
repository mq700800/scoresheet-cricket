//*********************`````````````````````*********************
//*********************  FINAL PROJECT C++  *********************
//******************```````````````````````````******************
//****************** 	 Cricket Score Sheet   ******************
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
using namespace std;
void input();
void show();
int intro();
int checkn(char []);
int check(char []);
struct team{
	// for team info
	char tm1[30],tm2[30];
	int toss,el;
	char ump[3][30];
	char overs[5];
	char tmttl1[5],tmttl2[5];
	char tmovers1[5],tmovers2[5];
	char ttlex1[5],ttlex2[5];
	//for team   1
	char name1[11][30];
	// team  1 bating
	char op1[11][5],sin1[11][5],dou1[11][5],dot1[11][5],fours1[11][5],sixes1[11][5],tsbat1[11][5],avg1[11][5];
	int out1[11];
	char outby1[11][20];
	int optbat1[11];
	// team   1 balling
	char ob1[11][5],madins1[11][5],wickets1[11][5],bsin1[11][5],bdou1[11][5],bdot1[11][5],bfours1[11][5],bsixes1[11][5],ex1[11][5],tsball1[11][5],bavg1[11][5];
	int optball1[11];
	// for team  2
	char name2[11][30];
	// team  2 bating
	char op2[11][5],sin2[11][5],dou2[11][5],dot2[11][5],fours2[11][5],sixes2[11][5],tsbat2[11][5],avg2[11][5];
	int out2[11];
	char outby2[11][20];
	int optbat2[11];
	// team   2 balling
	char ob2[11][5],madins2[11][5],wickets2[11][5],bsin2[11][5],bdou2[11][5],bdot2[11][5],bfours2[11][5],bsixes2[11][5],ex2[11][5],tsball2[11][5],bavg2[11][5];
	int optball2[11];
};
int main()
{
	for(int h=1;h<2;h++){
		system("cls");
		switch (intro()){
			case 1:{
				input();
				break;
			}
			case 2:{
				show();
				break;
			}
		}
		h--;
	}
}
void input(){
	team t;
	char toss,m,q,out;
	int u;
	for(int ttmm=1;ttmm<2;ttmm++){
	cout<<endl<<endl<<"\t\t\tEnter First Team:	";
	cin>>t.tm1;
	if(check(t.tm1)==0)	ttmm--;
	}
	for(int ttmm=1;ttmm<2;ttmm++){
	cout<<endl<<"\t\t\tEnter Second Team:	";
	cin>>t.tm2;
	if(check(t.tm2)==0)	ttmm--;
}
	for(int ttmm=1;ttmm<2;ttmm++){
	cout<<endl<<endl<<"\t\t\tEnter first umpire name:	";
	cin>>t.ump[0];
	if(check(t.ump[0])==0)	ttmm--;
}
	for(int ttmm=1;ttmm<2;ttmm++){
	
	cout<<endl<<endl<<"\t\t\tEnter second umpire name:	";
	cin>>t.ump[1];
	if(check(t.ump[1])==0)	ttmm--;
}
	for(int ttmm=1;ttmm<2;ttmm++){
	cout<<endl<<endl<<"\t\t\tEnter third umpire name:	";
	cin>>t.ump[2];
	if(check(t.ump[2])==0)	ttmm--;
}
	cout<<endl<<endl<<"\t\tWhich one of the following team won the toss:\n\t\t1.\t"<<t.tm1<<"\n\t\t2.\t"<<t.tm2<<endl;
	for(int w=1;w<2;w++){
		toss=getch();
		if(toss=='1'){
			t.toss=1;
			cout<<"\t\tCongratulations Team 1\t\t"<<t.tm1<<"\tWon the Toss."<<endl;
			cout<<"\t\t1.\tIf \t"<<t.tm1<<"\t Elected to bat first press 1."<<endl;
			cout<<"\t\t2.\tIf \t"<<t.tm1<<"\t Elected to ball first press 2.\t";
			for(int j=1;j<2;j++){
				m=getch();
				if(m=='1'){
					t.el=1;
					}
				else if(m=='2'){
					t.el=2;
				}
				else{
					cout<<"INVALID INPUT."<<endl;
					j--;
				}
			}
		}
		else if (toss=='2')	{
			t.toss=2;
			cout<<"\t\tCongratulations Team 2\t\t"<<t.tm2<<"\tWon the Toss."<<endl;
			cout<<"\t\t1.\tIf \t"<<t.tm2<<"\t Elected to bat first press 1."<<endl;
			cout<<"\t\t2.\tIf \t"<<t.tm2<<"\t Elected to ball first press 2.\t";
			for(int j=1;j<2;j++){
				m=getch();
				if(m=='1'){
					t.el=1;
					}
				else if(m=='2'){
					t.el=2;
					}
				else{
					cout<<"INVALID INPUT."<<endl;
					j--;
				}
			}
			}
		else{
			cout<<"Invalid Input."<<endl;
			w--;
		}
	}
	for(int ttmm=1;ttmm<2;ttmm++){
	cout<<endl<<endl<<"\t\tOvers:	";
	cin>>t.overs;
	if (checkn(t.overs)==0)	ttmm--;
	
}
	char opt;
	for(int w=0;w<11;w++){
		system("cls");
		cout<<endl<<endl<<"\t\t\t TEAM 1    "<<endl<<endl;
		u=0;
		for(int ttmm=1;ttmm<2;ttmm++){
		cout<<"Enter name of the player  "<<w+1<<"  of team 1.\t";
		cin>>t.name1[w];
		if(check(t.name1[w])==0)	ttmm--;
	}
		cout<<endl<<endl<<endl<<"If\t"<<t.name1[w]<<"\t is a batsman press 1."<<endl<<"or"<<endl;
		cout<<"If\t"<<t.name1[w]<<"\t is a bowler press 2."<<endl;
		for(int i=1;i<2;i++){
			opt=getch();
			for(int j=1;j<2;j++){
			if(opt=='1'){
				t.optbat1[w]=1;
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Overs Played:	";
				cin>>t.op1[w];
				if (checkn(t.op1[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Singles:	";
				cin>>t.sin1[w];
				if (checkn(t.sin1[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Doubles:	";
				cin>>t.dou1[w];
				if (checkn(t.dou1[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Dot Balls:	";
				cin>>t.dot1[w];
				if (checkn(t.dot1[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Fours:		";
				cin>>t.fours1[w];
				if (checkn(t.fours1[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Sixes:		";
				cin>>t.sixes1[w];
				if (checkn(t.sixes1[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Total score by:\t"<<t.name1[w]<<"\t";
				cin>>t.tsbat1[w];
				if (checkn(t.tsbat1[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Average:\t"<<t.name1[w]<<"\t";
				cin>>t.avg1[w];
				if (checkn(t.avg1[w])==0)	ttmm--;
				}
				cout<<endl<<endl<<"If\t"<<t.name1[w]<<"\t is out press 1."<<endl;
				cout<<"If\t"<<t.name1[w]<<"\t is not out press any key to continue."<<endl;
				out=getch();
				if(out=='1'){
					t.out1[w]=1;
					cout<<t.name1[w]<<"    is out by the bowler:		";
					for(int ttmm=1;ttmm<2;ttmm++){
					cin>>t.outby1[w];
					if(check(t.outby1[w])==0)	ttmm--;
				}
				if(u==0){
				u++;
				cout<<endl<<endl<<"If\t"<<t.name1[w]<<"\tis also a bowler press 1."<<endl;
				cout<<"If you want to enter next player press any key."<<endl;
				q=getch();
				if(q=='1'){
					opt='2';
					j--;
				}
			}
			}
			}
			else if(opt=='2'){
			t.optball1[w]=1;
			for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Overs Bowled:	";
				cin>>t.ob1[w];
				if (checkn(t.ob1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Maidens:		";
			cin>>t.madins1[w];
			if (checkn(t.madins1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Wickets Taken:	";
			cin>>t.wickets1[w];
			if (checkn(t.wickets1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Singles:	";
			cin>>t.bsin1[w];
			if (checkn(t.bsin1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Doubles:	";
			cin>>t.bdou1[w];
			if (checkn(t.bdou1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Dot Balls:	";
			cin>>t.bdot1[w];
			if (checkn(t.bdot1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Fours:		";
			cin>>t.bfours1[w];
			if (checkn(t.bfours1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Sixes:		";
			cin>>t.bsixes1[w];
			if (checkn(t.bsixes1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Extra Runs:	";
			cin>>t.ex1[w];
			if (checkn(t.ex1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Total:		";
			cin>>t.tsball1[w];
			if (checkn(t.tsball1[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Average:		";
			cin>>t.bavg1[w];
			if (checkn(t.bavg1[w])==0)	ttmm--;
			}
			if(u==0){
				u++;
				cout<<endl<<endl<<"If\t"<<t.name1[w]<<"\tis also a batsman press 1."<<endl;
				cout<<"If you want to enter next player press any key."<<endl;
				q=getch();
				if(q=='1'){
					opt='1';
					j--;
				}
			}
			}
			else{
				cout<<"INVALID INPUT."<<endl;
				i--;
			}
		}
	}
}
	for(int ttmm=1;ttmm<2;ttmm++){
		cout<<"Total score by team \t"<<t.tm1<<"\t";
		cin>>t.tmttl1;
		if (checkn(t.tmttl1)==0)	ttmm--;
		}
	for(int ttmm=1;ttmm<2;ttmm++){
		cout<<"Total Extra by team\t"<<t.tm1<<"\t";
		cin>>t.ttlex1;
		if (checkn(t.ttlex1)==0)	ttmm--;
		}
	for(int ttmm=1;ttmm<2;ttmm++){
	cout<<endl<<endl<<"Overs played by team  "<<t.tm1<<":\t"<<endl;
	cin>>t.tmovers1;
	if (checkn(t.tmovers1)==0)	ttmm--;
	}
	for(int w=0;w<11;w++){
		system("cls");
		cout<<endl<<endl<<"\t\t\t TEAM 2    "<<endl<<endl;
		u=0;
		for(int ttmm=1;ttmm<2;ttmm++){
		cout<<"Enter name of  player\t"<<w+1<<"\tof team 2.\t";
		cin>>t.name2[w];
		if(check(t.name2[w])==0)	ttmm--;
	}
		cout<<endl<<endl<<endl<<"If\t"<<t.name2[w]<<"\tis a batsman press 1."<<endl<<"or"<<endl;
		cout<<"If\t"<<t.name2[w]<<"\tis a bowler press 2."<<endl;
		for(int i=1;i<2;i++){
			opt=getch();
			for(int j=1;j<2;j++){
			if(opt=='1'){
				t.optbat2[w]=1;
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Overs Played:	";
				cin>>t.op2[w];
				if (checkn(t.op2[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Singles:	";
				cin>>t.sin2[w];
				if (checkn(t.sin2[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Doubles:	";
				cin>>t.dou2[w];
				if (checkn(t.dou2[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Dot Balls:	";
				cin>>t.dot2[w];
				if (checkn(t.dot2[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Fours:		";
				cin>>t.fours2[w];
				if (checkn(t.fours2[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Sixes:		";
				cin>>t.sixes2[w];
				if (checkn(t.sixes2[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Total score by:\t"<<t.name2[w]<<"\t";
				cin>>t.tsbat2[w];
				if (checkn(t.tsbat2[w])==0)	ttmm--;
				}
				for(int ttmm=1;ttmm<2;ttmm++){
				cout<<"Average:\t"<<t.name2[w]<<"\t";
				cin>>t.avg2[w];
				if (checkn(t.avg2[w])==0)	ttmm--;
				}
				cout<<endl<<endl<<"If  "<<t.name2[w]<<"  is out press 1."<<endl;
				cout<<"If  "<<t.name2[w]<<"  is not out press any key to continue."<<endl;
				out=getch();
				if(out=='1'){
					t.out2[w]=1;
					cout<<t.name2[w]<<"    is out by the bowler:		";
					for(int ttmm=1;ttmm<2;ttmm++){
					cin>>t.outby2[w];
					if(check(t.outby2[w])==0)	ttmm--;
				}
					}
				if(u==0){
				u++;
				cout<<endl<<endl<<"If\t"<<t.name2[w]<<"\tis also a bowler press 1."<<endl;
				cout<<"If you want to enter next player press any key."<<endl;
				q=getch();
				if(q=='1'){
					opt='2';
					j--;
				}
			}
			}
			else if(opt=='2'){
			t.optball2[w]=1;
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Overs Bowled:	";
			cin>>t.ob2[w];
			if (checkn(t.ob2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Maidens:		";
			cin>>t.madins2[w];
			if (checkn(t.madins2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Wickets Taken:	";
			cin>>t.wickets2[w];
			if (checkn(t.wickets2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Singles:	";
			cin>>t.bsin2[w];
			if (checkn(t.bsin2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Doubles:	";
			cin>>t.bdou2[w];
			if (checkn(t.bdou2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Dot Balls:	";
			cin>>t.bdot2[w];
			if (checkn(t.bdot2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Fours:		";
			cin>>t.bfours2[w];
			if (checkn(t.bfours2[w])==0)	ttmm--;
			}for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Sixes:		";
			cin>>t.bsixes2[w];
			if (checkn(t.bsixes2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Extra Runs:	";
			cin>>t.ex2[w];
			if (checkn(t.ex2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Total:		";
			cin>>t.tsball2[w];
			if (checkn(t.tsball2[w])==0)	ttmm--;
			}
			for(int ttmm=1;ttmm<2;ttmm++){
			cout<<"Average:		";
			cin>>t.bavg2[w];
			if (checkn(t.bavg2[w])==0)	ttmm--;
			}
			if(u==0){
				u++;
				cout<<endl<<endl<<"If\t"<<t.name2[w]<<"\tis also a batsman press 1."<<endl;
				cout<<"If you want to enter next player press any key."<<endl;
				q=getch();
				if(q=='1'){
					opt='1';
					j--;
				}
			}
			}
			else{
				cout<<"INVALID INPUT."<<endl;
				i--;
			}
		}
		}
	}
	for(int ttmm=1;ttmm<2;ttmm++){
		cout<<"Total score by team \t"<<t.tm2<<"\t";
		cin>>t.tmttl2;
		if (checkn(t.tmttl2)==0)	ttmm--;
		}
	for(int ttmm=1;ttmm<2;ttmm++){
		cout<<"Total Extra by team\t"<<t.tm2<<"\t";
		cin>>t.ttlex2;
		if (checkn(t.ttlex2)==0)	ttmm--;
		}
	for(int ttmm=1;ttmm<2;ttmm++){
	cout<<endl<<endl<<"Overs played by team\t"<<t.tm2<<":\t"<<endl;
	cin>>t.tmovers2;
	if (checkn(t.tmovers2)==0)	ttmm--;
	}
	ofstream sinf("cricket.dat",ios::out|ios::binary|ios::app);
	sinf.write((char*)&t,sizeof(t));
	sinf.close();
	cout<<endl<<endl<<"\t\t\tYour match has been stored succesfully! "<<endl;
	cout<<"Press any key to continue.";	
	getch();
}
void show(){
	char opt2,opt5;
	int y,z;
	team t[20];
	ifstream bat("cricket.dat",ios::binary);
	bat.read((char*)&t,sizeof(t));
	for(int k=1;k<2;k++){
	system("cls");
	cout<<endl<<endl<<"\t\t********************************"<<endl;
	cout<<"\t\t         Enter match number"<<endl;
	cout<<"\t\t********************************"<<endl<<endl<<endl;
	for(int r=0;r<10;r++){
		cout<<">"<<"\t"<<r+1<<".\t"<<t[r].tm1<<"\tV/S\t"<<t[r].tm2<<endl;
	}
	cout<<endl<<"\t\t1.\t Enter match number to display its score board:";
	cout<<endl<<"\t\t2.\t If you want to get back to main page enter 0.\t";
	cin>>y;
	if(y==0){
		break;
	}
	y--;
	for(int c=1;c<2;c++){
	system("cls");
	cout<<endl<<endl<<"\t\t***********************************************"<<endl;
	cout<<"\t\t\t"<<t[y].tm1<<"   V/S   "<<t[y].tm2<<endl;
	cout<<"\t\t***********************************************"<<endl<<endl;
	cout<<"\t\tUmpires:"<<endl;
	cout<<"\t\t\t"<<t[y].ump[0]<<endl;
	cout<<"\t\t\t"<<t[y].ump[1]<<endl;
	cout<<"\t\t\t"<<t[y].ump[2]<<endl;
	if(t[y].toss==1){
		cout<<"\t\t"<<t[y].tm1<<"   Won the toss  and elected to  ";
	}
	else if(t[y].toss==2){
		cout<<"\t\t"<<t[y].tm2<<"   Won the toss  and elected to  ";
	}
	if(t[y].el==1){
		cout<<" BAT  first."<<endl<<endl;
	}
	else{
		cout<<" BALL  first."<<endl<<endl;
	}
	cout<<"\t\t OVERS :\t"<<t[y].overs<<endl<<endl;
	cout<<"\t\t"<<t[y].tm1<<"  did  "<<t[y].tmttl1<<"  Score in  "<<t[y].tmovers1<<"   overs.";
	cout<<"\t\tExtra:     "<<t[y].ttlex1<<endl<<endl;
	cout<<"\t\t\t\t&"<<endl<<endl;
	cout<<"\t\t"<<t[y].tm2<<"  did  "<<t[y].tmttl2<<"  Score in  "<<t[y].tmovers2<<"   overs.";
	cout<<"\t\tExtra:     "<<t[y].ttlex2<<endl<<endl;
	if(t[y].tmttl1>t[y].tmttl2){
		cout<<"\t\t"<<t[y].tm1<<"   Won  the match by \t "<<t[y].tmttl1-t[y].tmttl2<<"\t runs."<<endl<<endl;
	}
	if(t[y].tmttl2>t[y].tmttl1){
		cout<<"\t\t"<<t[y].tm2<<"   Won  the match by \t "<<t[y].tmttl2-t[y].tmttl1<<"\t runs."<<endl<<endl<<endl;
		
	}
	cout<<"\t\t1.\tIf you want to show  "<<t[y].tm1<<"'s  players profile press 1."<<endl;
	cout<<"\t\t2.\tIf you want to show  "<<t[y].tm2<<"'s  players profile press 2."<<endl;
	cout<<"\t\t3.\tIf you want to get back to main menu press 3."<<endl;
	cout<<"\t\t4.\tIf you want to exit press any key."<<endl<<endl;
	opt2=getch();
	system("cls");
	if(opt2=='3'){
		k--;
	}
	if(opt2=='1')
	{
		for(int h=1;h<2;h++){
		system("cls");
		cout<<endl<<endl<<endl<<"\t\t\t\t\t************************"<<endl;
		cout<<"\t\t\t\t\t\t"<<t[y].tm1<<endl;
		cout<<"\t\t\t\t\t************************"<<endl<<endl;
		for(int i=0;i<11;i++){
			if(i==2){
				cout<<"\t\t>\t"<<i+1<<"\t"<<t[y].name1[i]<<"\t\t(c)"<<endl;
			}
			else{
			cout<<"\t\t>\t"<<i+1<<"\t"<<t[y].name1[i]<<endl;
		}
		}
		cout<<endl<<"\t\t1.\tEnter the number of player to see his performance in match:\t"<<endl;
		cout<<"\t\t2.\tIf you want to exit enter 0.\t";
		for(int e=1;e<2;e++){
		cin>>z;
		if(z<0||z>11){
			cout<<"INVALID INPUT"<<endl;
			e--;
		}
		}
		if(z==0){
			break;
		}
		if(z!=0){
			z--;
			system("cls");
			cout<<endl<<endl<<endl<<"\t\t Player Name:\t\t"<<t[y].name1[z]<<endl<<endl<<endl;
			if(t[y].optbat1[z]==1){
				cout<<endl<<endl<<"Batting Record:"<<endl<<endl;
				cout<<"\t\t Overs Played:\t\t"<<t[y].op1[z]<<endl;
				cout<<"\t\t Singles Made:\t\t"<<t[y].sin1[z]<<endl;
				cout<<"\t\t Doubles Made:\t\t"<<t[y].dou1[z]<<endl;
				cout<<"\t\t Dot Balls:   \t\t"<<t[y].dot1[z]<<endl;
				cout<<"\t\t Fours:       \t\t"<<t[y].fours1[z]<<endl;
				cout<<"\t\t Sixes:       \t\t"<<t[y].sixes1[z]<<endl;
				cout<<"\t\t Total Score: \t\t"<<t[y].tsbat1[z]<<endl;
				cout<<"\t\t Average:     \t\t"<<t[y].avg1[z]<<endl;
				if(t[y].out1[z]==1){
					cout<<"\t\t Out by:      \t\t"<<t[y].outby1[z]<<endl;
				}
				else{
					cout<<"\t\t Not out"<<endl;
				}
			}
			if(t[y].optball1[z]==1){
				cout<<endl<<endl<<"Bowling Record:"<<endl<<endl;
				cout<<"\t\t Overs Bowled:\t\t"<<t[y].ob1[z]<<endl;
				cout<<"\t\t Maiden Overs: \t\t"<<t[y].madins1[z]<<endl;
				cout<<"\t\tWickets Taken:\t\t"<<t[y].wickets1[z]<<endl;
				cout<<"\t\t Singles:     \t\t"<<t[y].bsin1[z]<<endl;
				cout<<"\t\t Doubles:     \t\t"<<t[y].bdou1[z]<<endl;
				cout<<"\t\t Dot Balls:   \t\t"<<t[y].bdot1[z]<<endl;
				cout<<"\t\t Fours:       \t\t"<<t[y].bfours1[z]<<endl;
				cout<<"\t\t Sixes:       \t\t"<<t[y].bsixes1[z]<<endl;
				cout<<"\t\t Extra Scores:\t\t"<<t[y].ex1[z]<<endl;
				cout<<"\t\t Total Score: \t\t"<<t[y].tsball1[z]<<endl;
				cout<<"\t\t Average:     \t\t"<<t[y].bavg1[z]<<endl;
			}
		}
		cout<<"\t\t1.\tIf you want to change Player press 1."<<endl;
		cout<<"\t\t2.\tIf you want to change Team press 2."<<endl;
		cout<<"\t\t3.\tIf you want to change Match press 3."<<endl;
		cout<<"\t\t4.\tIf you want to exit press any other key.\t";
		opt5=getch();
		if(opt5=='1'){
		h--;
		}
		else if(opt5=='2'){
			c--;
		}
		else if(opt5=='3'){
			k--;
		}
		}
	}
	if(opt2=='2')
	{
		for(int h=1;h<2;h++){
		system("cls");
		cout<<endl<<endl<<endl<<"\t\t\t\t\t************************"<<endl;
		cout<<"\t\t\t\t\t\t"<<t[y].tm2<<endl;
		cout<<"\t\t\t\t\t************************"<<endl<<endl;
		for(int i=0;i<11;i++){
			if(i==2){
			cout<<"\t\t>\t"<<i+1<<"\t"<<t[y].name2[i]<<"\t\t(c)"<<endl;
		}
		else{
		cout<<"\t\t>\t"<<i+1<<"\t"<<t[y].name2[i]<<endl;
		}
		}
		cout<<endl<<"\t\t1.\tEnter the number of player to see his performance in match:\t"<<endl;
		cout<<"\t\t2.\tIf you want to exit enter 0.\t";
		for(int e=1;e<2;e++){
		cin>>z;
		if(z<0||z>11){
			cout<<"INVALID INPUT"<<endl;
			e--;
		}
		}
		if(z==0){
			break;
		}
		if(z!=0){
			z--;
			system("cls");
			cout<<endl<<endl<<endl<<"\t\t Player Name:\t\t"<<t[y].name2[z]<<endl<<endl<<endl;
			if(t[y].optbat2[z]==1){
				cout<<endl<<endl<<"Batting Record:"<<endl<<endl;
				cout<<"\t\t Overs Played:\t\t"<<t[y].op2[z]<<endl;
				cout<<"\t\t Singles Made:\t\t"<<t[y].sin2[z]<<endl;
				cout<<"\t\t Doubles Made:\t\t"<<t[y].dou2[z]<<endl;
				cout<<"\t\t Dot Balls:   \t\t"<<t[y].dot2[z]<<endl;
				cout<<"\t\t Fours:       \t\t"<<t[y].fours2[z]<<endl;
				cout<<"\t\t Sixes:       \t\t"<<t[y].sixes2[z]<<endl;
				cout<<"\t\t Total score: \t\t"<<t[y].tsbat2[z]<<endl;
				cout<<"\t\t Average:     \t\t"<<t[y].avg2[z]<<endl;
				if(t[y].out2[z]==1){
					cout<<"\t\t Out by:      \t\t"<<t[y].outby2[z]<<endl;
				}
				else{
					cout<<"\t\t Not out"<<endl;
				}
			}
			if(t[y].optball2[z]==1){
				cout<<endl<<endl<<"Bowling Record:"<<endl<<endl;
				cout<<"\t\t Overs Bowled:\t\t"<<t[y].ob2[z]<<endl;
				cout<<"\t\t Maiden Overs: \t\t"<<t[y].madins2[z]<<endl;
				cout<<"\t\tWickets Taken:\t\t"<<t[y].wickets2[z]<<endl;
				cout<<"\t\t Singles:     \t\t"<<t[y].bsin2[z]<<endl;
				cout<<"\t\t Doubles:     \t\t"<<t[y].bdou2[z]<<endl;
				cout<<"\t\t Dot Balls:   \t\t"<<t[y].bdot2[z]<<endl;
				cout<<"\t\t Fours:       \t\t"<<t[y].bfours2[z]<<endl;
				cout<<"\t\t Sixes:       \t\t"<<t[y].bsixes2[z]<<endl;
				cout<<"\t\t Extra Scores:\t\t"<<t[y].ex2[z]<<endl;
				cout<<"\t\t Total Score: \t\t"<<t[y].tsball2[z]<<endl;
				cout<<"\t\t Average:     \t\t"<<t[y].bavg2[z]<<endl;
			}
		}
		cout<<"\t\t1.\tIf you want to change Player  press 1."<<endl;
		cout<<"\t\t2.\tIf you want to change Team press 2."<<endl;
		cout<<"\t\t3.\tIf you want to change Match press 3."<<endl;
		cout<<"\t\t4.\tIf you want to exit press any other key.\t";
		opt5=getch();
		if(opt5=='1'){
		h--;
		}
		else if(opt5=='2'){
			c--;
		}
		else if(opt5=='3'){
			k--;
		}
		}
	}
	}
	bat.close();
}
}
int intro()
{
 cout<<endl<<endl<<endl<<"\t\t\t********************************************************************"<<endl<<endl;
 cout<<"\t\t\t\t        C R I C K E T    S C O R E    B O A R D"<<endl<<endl;
 cout<<"\t\t\t********************************************************************"<<endl;
 cout<<"\t\t\t\t   &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
 cout<<"\t\t\t\t   &    A    F I N A L    P R O J E C T    B Y    &"<<endl;
 cout<<"\t\t\t\t   &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl<<endl<<endl<<endl<<endl;
 cout<<"\t        ______________________________\t\t______________________________"<<endl;
 cout<<"\t\t|1.|  Hassan Abid     (048)  |";
 cout<<"\t\t|4.|  Hamza           (070)  |"<<endl;
 cout<<"\t\t|__|_________________________|\t\t|__|_________________________|"<<endl;
 cout<<"\t\t|2.|  Arslan Ajmal    (050)  |";
 cout<<"\t\t|5.|  Muhammad Umair  (071)  |"<<endl;
 cout<<"\t\t|__|_________________________|\t\t|__|_________________________|"<<endl;
 cout<<"\t\t|3.|  M-Sameer        (062)  |";
 cout<<"\t\t|6.|  M-Qasim         (085)  |"<<endl;
 cout<<"\t\t|__|_________________________|\t\t|__|_________________________|"<<endl;
 cout<<endl<<endl<<"_______________________________________________________________________________________________________________________"<<endl;
  char opt2;
	cout<<"\t\t_______________________________________________________________________________________"<<endl;
	cout<<"\t\t|  1.  |\tIf you want to enter new match press \t\t\t\t|  1  |"<<endl;
	cout<<"\t\t|______|________________________________________________________________________|_____|"<<endl;
	cout<<"\t\t|  2.  |\tIf you want to see previous matches score board press \t\t|  2  |"<<endl;
	cout<<"\t\t|______|________________________________________________________________________|_____|"<<endl;
	for(int i=1;i<2;i++){
	opt2=getch();
		if(opt2=='1'){
			return 1;
		}
		else if(opt2=='2'){
			return 2;
		}
		else{
			cout<<"invalid input";
			i--;
		}
	}
}
int checkn(char a[]){
	int n=0;
	for(int j=0;a[j]!='\0';j++){
		if(a[0]=='.'){
			cout<<endl<<"\t\tINVALID INPUT     you can not enter (.) at first."<<endl;
			n++;
			break;
		}
		if((a[j]>='0'&&a[j]<='9')||a[j]=='.'){
			
		}
		else{
			cout<<endl<<"\t\tINVALID INPUT     enter just numbers and point(.)."<<endl;
			n++;
			break;
		}
	}
	if(n>0)	return 0;
	else return 1;
}
int check(char a[]){
	int n=0;
	for(int j=0;a[j]!='\0';j++){
		if(a[0]=='_'){
			n++;
			cout<<endl<<"\t\tINVALID INPUT     you can not enter (_) at first."<<endl;
			break;
		}
		if((a[j]>='A'&&a[j]<='Z')||(a[j]>='a'&&a[j]<='z')||a[j]=='_'){
		}
		else{
			cout<<endl<<"\t\tINVALID INPUT     enter just alphabets and underscores(_)."<<endl;
			n++;
			break;
		}
		
	}
	if(n>0)	return 0;
	else return 1;
}
