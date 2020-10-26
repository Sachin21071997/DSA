#include<iostream>
#include <cmath> 
#include <math.h>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin>>a;
	cin>>b;
	cin>>c;
	float d;
	int root_1;
	int root_2;
	d = (b*b) - (4*a*c);
	if(d>0){
		root_1 = (-b + sqrt(d))/(2*a);
		root_2 =  (-b - sqrt(d))/(2*a);
		cout<<"Real and Distinct"<<endl;
		cout<<root_2<<" "<<root_1;
	}
	else if(d==0){
		root_1 = -b/(2*a);
		root_2 = root_1;
		cout<<"Real and Equal"<<endl;
		cout<<root_1<<" "<<root_2;
	}
	else{
		cout<<"Imaginary";
	}
	
	
	return 0;
}