#include <iostream>
using namespace std;

int main() {
	long long int a,b,c,s,m,l;
	while(cin>>a>>b>>c){
		if(a>b&&a>c){
			l=a;
			if(b>c){
				m=b;
				s=c
			}else{
				m=c;
				s=b
			}
		}else if(b>a&&b>c){
			l=b;
			if(a>c){
				m=a;
				s=c
			}else{
				m=c;
				s=a;
			}
		}else{
			l=c;
			if(a>b){
				m=a;
				s=b;
			}else{
				m=b;
				s=a;
			}
		}
		if(s+m)
	} 
    return 0;
    }

