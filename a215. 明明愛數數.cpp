#include <iostream>
using namespace std;

int main() {
	int number,range;
	while(cin>>number>>range){
		int time=0,sum=0;
		for(int i=number;i>range||i<=range;i++){
			sum=sum+i;
			time=time+1;
			if(sum>=range){
				cout<<time<<endl;
				break;
			}
		}
	}
    return 0;
    }

