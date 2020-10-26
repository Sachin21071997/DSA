#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	short unsigned int a,b,c;
	a=0;
	b=1;
	c=0;
	for (int i = 1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i==2 and j==2){
				cout<<"1"<<"	";
				continue;
			}
			cout<<c<<"	";
			c= a+b;
			a=b;
			b=c;
		}
		cout<<endl;
	}
return 0;
}