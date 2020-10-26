#include<iostream>
#include<climits>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int a;
	long long int b;
	long long int c = n*n;
	long long int var = 0;
	if(n<=0){
		cout<<"-1";
	}
	else if(n==1 or n==2) {
		cout<<"-1";
		

	}
	else if(n%2==1){
		var = n*n + 1;
		a = var/2 -1;  
		b = var/2;  
		if(b*b==a*a+c){
			cout<<a<<" "<<b;
		}
		else{
			cout<<"-1";
		}
	}
	else{
		a = (n/2)*(n/2) -1;
		b = (n/2)*(n/2) +1;
		if(b*b==a*a+c){
			cout<<a<<" "<<b;
		}
		else{
			cout<<"-1";

		}
	}
	
}