#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	if(n==2 or n==3){
		cout<<"Prime";
	}
	else if(n>3) {
		for(int i = 2;i<=n/2;i++){
			if(n%i==0){
				cout<<"Not Prime";
				break;
			}
			if(i==(n/2)-1){
				cout<<"Prime";
				break;
			}

		}	
	}
	else {
		cout<<"Not Prime";
	}
return 0;
}