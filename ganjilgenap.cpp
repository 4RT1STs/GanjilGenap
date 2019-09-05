#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
void setcolor(unsigned short color) {
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hCon,color);
}
int main()
{
	int ganjil,bilangan;
	string user,pass,answer;
	setcolor(2);Sleep(50);cout<<"\t\t\t=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";
	Sleep(50);cout<<"\n\t\t\t     TOOLS GANJIL GENAP\n";
	Sleep(50);cout<<"\t\t\t=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";Sleep(50);cout<<"=";

		setcolor(6);cout<<"\n======================>";
	cout<<"\n LOGIN DULU WOE!!";
	cout<<"\n======================>";
	awal:
	cout<<"\nusername:";
	cin>>user;
	cout<<"password:";
	cin>>pass;
	
		
		if(user=="maulana" && pass=="123"){
			cout<<"LOGIN BERHASIL\n";
			Sleep(50);cout<<"W";Sleep(50);cout<<"e";Sleep(50);cout<<"l";Sleep(50);cout<<"c";Sleep(50);cout<<"o";Sleep(50);cout<<"m";Sleep(50);cout<<"e ";cout<<user;
		setcolor(10);Sleep(50);cout<<"\nT";Sleep(50);cout<<"o";Sleep(50);cout<<"o";Sleep(50);cout<<"l";Sleep(50);cout<<"s";Sleep(50);cout<<" I";Sleep(50);cout<<"n";Sleep(50);cout<<"i";Sleep(50);cout<<" D";
		Sleep(50);cout<<"i";Sleep(50);cout<<" G";Sleep(50);cout<<"u";Sleep(50);cout<<"n";Sleep(50);cout<<"a";Sleep(50);cout<<"k";Sleep(50);cout<<"a";Sleep(50);cout<<"n";
		Sleep(50);cout<<" U";Sleep(50);cout<<"n";Sleep(50);cout<<"t";Sleep(50);cout<<"u";Sleep(50);cout<<"k";
		Sleep(50);cout<<" M";Sleep(50);cout<<"e";Sleep(50);cout<<"n";Sleep(50);cout<<"e";Sleep(50);cout<<"n";Sleep(50);cout<<"t";Sleep(50);cout<<"u";Sleep(50);cout<<"k";Sleep(50);cout<<"a";Sleep(50);cout<<"n";
		Sleep(50);cout<<" B";Sleep(50);cout<<"i";Sleep(50);cout<<"l";Sleep(50);cout<<"a";Sleep(50);cout<<"n";Sleep(50);cout<<"g";Sleep(50);cout<<"a";Sleep(50);cout<<"n";
		Sleep(50);cout<<" G";Sleep(50);cout<<"a";Sleep(50);cout<<"n";Sleep(50);cout<<"j";Sleep(50);cout<<"i";Sleep(50);cout<<"l";
		Sleep(50);cout<<" G";Sleep(50);cout<<"e";Sleep(50);cout<<"n";Sleep(50);cout<<"a";Sleep(50);cout<<"p";
		hidup:
		cout<<"\nMasukkan Bilangan:";
		cin>>bilangan;
		cout<<"Bilangan tersebut adalah:";
		if(bilangan%2==0){
			setcolor(10);cout<<" GENAP";
			baru:
			cout<<"\nLAGI?[Y/N]";
			cin>>answer;
			if(answer=="Y"){
				{goto hidup;}
			}else if(answer=="y"){
				{goto hidup;}
			}else if(answer=="N"){
				{goto keluar;}
			}else if(answer=="n"){
				keluar:
				Sleep(50);cout<<"T";Sleep(50);cout<<"e";Sleep(50);cout<<"r";Sleep(50);cout<<"i";Sleep(50);cout<<"m";Sleep(50);cout<<"a";Sleep(50);cout<<" K";Sleep(50);cout<<"a";Sleep(50);cout<<"s";Sleep(50);cout<<"i";Sleep(50);cout<<"h";Sleep(50);cout<<" S";Sleep(50);cout<<"u";Sleep(50);cout<<"d";Sleep(50);cout<<"a";Sleep(50);cout<<"h";
			Sleep(50);cout<<" M";Sleep(50);cout<<"e";Sleep(50);cout<<"n";Sleep(50);cout<<"g";Sleep(50);cout<<"g";Sleep(50);cout<<"u";Sleep(50);cout<<"n";Sleep(50);cout<<"a";Sleep(50);cout<<"k";Sleep(50);cout<<"a";Sleep(50);cout<<"n";
			Sleep(50);cout<<" T";Sleep(50);cout<<"o";Sleep(50);cout<<"o";Sleep(50);cout<<"l";Sleep(50);cout<<"s";Sleep(50);cout<<" I";Sleep(50);cout<<"n";Sleep(50);cout<<"i";
			setcolor(14);cout<<"\nAUTHOR BY :@RTIST";setcolor(0);
			}else{
				setcolor(12);cout<<"Masukan Pilihan dengan benar!";
				{goto baru;}
			}
		}else{
			setcolor(10);cout<<" GANJIL";
		{goto baru;}
		}
		}else{
			setcolor(4);cout<<"username atau password salah!!";
			{goto awal;}
}
}
