#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() {
	long long int n;
	cin>>n;
	long long int sum = 0;
	int x = 0;
	int i = 0;
	while(n>0){
		x= n%10;
		sum = sum + x*pow(2,i);
		i = i+1;
		n = n/10;
	}
	cout<<sum;
return 0;
}