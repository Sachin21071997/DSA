#include<iostream>
using namespace std;
int main() {
	int max;
	int min;
	int step;
	int f = 0;
	int c=0;
	cin>>min;
	cin>>max;
	cin>>step;
	for(int i=min;i<=max;i=i+step){
		f = i;
		c = ((5*(f - 32))/9);
		cout<<f<<" "<<c;
		cout<<endl;

	}

	return 0;
}