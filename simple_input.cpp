#include<iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	while(true){
		cin>>n;
		sum = sum + n;
		if(sum<0){
			break;
		}
		cout<<n;
		cout<<endl;

	}
return 0;
}