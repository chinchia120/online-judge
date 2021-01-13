#include <iostream>
using namespace std;

int main(){
    int n,sum1=0,sum2=0;
    while(cin>>n){
        if(n==0){
            cout<<n<<endl;
            return 0;
        }else if(n!=0){
            for(int i=1;i<n;i++){
                if(n%i==0){
                    sum1=sum1+i;
                }
            }
            if(sum1==n){
                cout<<"="<<n<<endl;
            }else{
                for(int j=1;j<sum1;j++){
                    sum2=sum2+j;
                }
                if(sum2==n){
                    cout<<sum1<<endl;
                }else{
                    break;
                }
            }
        }
    }
    return 0;
}