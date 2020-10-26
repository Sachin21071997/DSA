#include<iostream>
using namespace std;
int main() {
	int n;
	int number;
	int p;
	int r = 0;
	int sum;
	cin>>n;
	int i = 1;
	while(i<=n){
		cin>>number;
		sum = 0;
		p = 1;
		while(number>0){
			r = number%10;
			sum = sum + r*p;
			p = p*2;
			number = number/10;
		}
		cout<<sum<<endl;
		
		i = i+1;
	}


	return 0;
}