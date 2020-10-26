#include<iostream>
using namespace std;
int main(){
	char ch;
	long long int ans = 0;
	cin>>ch;
	long long int n1;
	long long int n2;
	unsigned short int b=0;
	
	do{
		switch(ch){
			case '+' :
				cin>>n1;
				cin>>n2;
				ans=n1+n2;
				cout<<ans<<endl;
				break;
			case '-' :
				cin>>n1;
				cin>>n2;
				ans = n1-n2;
				cout<<ans<<endl;
				break;
			
			case '*' :
				cin>>n1;
				cin>>n2;
				ans = n1*n2;
				cout<<ans<<endl;
				break;
			case '/' :
				cin>>n1>>n2;
				ans = n1/n2;
				cout<<ans<<endl;
				break;
			case '%' :
				cin>>n1>>n2;
				ans = n1%n2;
				cout<<ans<<endl;
				break;
			case 'x':
			case 'X' :
				b = b+1;
				break;
			default :
				cout<<"Invalid operation. Try again.\n";
				break;
		}

		if(b==1){
			break;
		}
		cin>>ch;
		
	}while(true);
return 0;
}