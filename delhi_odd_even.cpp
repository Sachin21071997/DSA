# include <iostream>
using namespace std;
int main(){
	int no;
	cin>>no;
	int sum_odd = 0;
	int sum_even = 0;
	int i = 1;
	int x;
	long long int n;
	while(i<=no){
		cin>>n;
		sum_odd = 0;
		sum_even = 0;
	while(n>0){
		x = n%10;

		if(x%2==0){
			sum_even = sum_even + n%10;
			n = n/10;
		}
		else{
			sum_odd = sum_odd + n%10;
			n = n/10;
		}
		
	}
	
	if(sum_odd%3==0 or sum_even%4==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	
	i=i+1;
	}
return 0;
}