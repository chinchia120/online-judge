#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"_";
		}
		for(int k=0;k<2*i-1;k++){
			cout<<"*";
		}
		for(int l=0;l<n-i;l++){
			cout<<"_";
		}
		cout<<endl;
	}
    return 0;
    }

