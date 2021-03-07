#include <iostream>
using namespace std;

int main() {
	int a,b,sum=0;
	while(cin>>a>>b){
		if(a==b){
			cout<<"0"<<endl;
		}else if(a>b){
            for(int i=b;i<a+1;i++){
				int flag=1,t=2;
				while((flag==1)&&(t<i)){
					if((i%t)==0){
						flag=0;
					}else{
						t=t+1;
					}
				}
				if(flag==1){
					sum=sum+1;
				}	
			}
			cout<<sum<<endl;
			sum=0;
        }else{
			for(int i=a;i<b+1;i++){
				int flag=1,t=2;
				while((flag==1)&&(t<i)){
					if((i%t)==0){
						flag=0;
					}else{
						t=t+1;
					}
				}
				if(flag==1){
					sum=sum+1;
				}	
			}
			cout<<sum<<endl;
			sum=0;
		}
	}
    return 0;
}
