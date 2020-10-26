# include <iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int key;
	cin>>key;
	int x;
	int a = 0;
	while(n>0){
		x = n%10;
		if(x==key){
			a = a+1;
		}
		n = n/10;
}
cout<<a<<endl;
return 0;
}