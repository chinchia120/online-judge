#include <iostream>
using namespace std;

int main() {
	char ch;
	int a,b,c,d,e,f,g,h,i;
	int sum;
	cin>>ch>>a>>b>>c>>d>>e>>f>>g>>h>>i;
		if(ch=='A')ch=10;
		if(ch=='B')ch=11;
		if(ch=='C')ch=12;
		if(ch=='D')ch=13;
		if(ch=='E')ch=14;
		if(ch=='F')ch=15;
		if(ch=='G')ch=16;
		if(ch=='H')ch=17;
        if(ch=='I')ch=34;
		if(ch=='J')ch=18;
		if(ch=='K')ch=19;
		if(ch=='M')ch=21;
		if(ch=='N')ch=22;
		if(ch=='O')ch=35;
		if(ch=='P')ch=23;
		if(ch=='Q')ch=24;
		if(ch=='R')ch=25;
		if(ch=='S')ch=26;
		if(ch=='T')ch=27;
		if(ch=='U')ch=28;
		if(ch=='V')ch=29;
		if(ch=='W')ch=32;
		if(ch=='X')ch=30;
		if(ch=='Y')ch=31;
        if(ch=='Z')ch=33;
	sum=((ch/10)+(ch%10)*9)+(a*8)+(b*7)+(c*6)+(d*5)+(e*4)+(f*3)+(g*2)+(h)+(i);
	if(sum%10==0){
		cout<<"real"<<endl;
	}else{
		cout<<"fake"<<endl;
	}

	return 0;
}



