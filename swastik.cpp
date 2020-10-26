#include<iostream>
using namespace std;
int main() {
	int row = 1;
	int i = 1;
	int j = 1;
	int n;
	cin>>n;
	while(row<=n){
		if(row%2!=0){
			i= 1;
			while(i<=row){
				cout<<"1";
				i = i+1;
			}
		}
		else{
			cout<<"1";
			j=1;
			while(j<=row-2){
				cout<<"0";
				j=j+1;
			}
			cout<<"1";

		}
		cout<<endl;
		row = row + 1;

	}
	return 0;
}