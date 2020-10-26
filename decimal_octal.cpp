#include<iostream>
#include <cmath> 
#include <math.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int x = 0;
	int sum = 0;
	int count  = 0;
	while(n>0){
		x = n%8;
		sum = sum + x*pow(10,count);
		n = n/8;
		count = count +1;



	}
	cout<<sum<<endl;
return 0;
}
