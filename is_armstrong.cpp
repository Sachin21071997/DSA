#include<bits/stdc++.h> 
using namespace std; 
bool armstrong(long long int n){
	int n2 =n;
	int n3 = n;
	int x = 0;
	long long int sum = 0;
	int count =0;
	
	while(n>0){
		count = count +1;
		n = n/10;
	}

	while(n2>0){
		x = n2%10;
		sum = sum + pow(x,count);
		n2 = n2/10;
	}
	if( sum==n3){
		return true;

	}
	else{
		return false;
	}
}
# include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	bool a= armstrong(n);
	if(a==1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
}