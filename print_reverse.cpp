#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int x = 0;
	while(n>0){
		x = n%10;
		cout<<x;
		n= n/10;
	}

}