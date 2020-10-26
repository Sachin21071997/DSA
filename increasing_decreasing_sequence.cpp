#include<iostream>
using namespace std;
int main(){
	int length;
	cin>>length;
	long long int n;
	cin>>n;
	long long int a;
	long long int min;
	long long int max;
	int i=1;
	int flag = 0;
	min = n;
	while(i<=length-1){
		cin>>a;
		if(a==min){
			flag=1000;
			break;
		}
		else if(a>min){
			flag = flag+1;
			for(int j = i+1;j<=length-1;j++){
				max = a;
				cin>>a;
				
				if(max>=a){
					flag = flag +1;
					break;

				}
				else{
					continue;
				}
				
				

			}
			break;
			//
			//cout<<flag<<endl;

			
		}
		
		else{
			min = a;
		}
	
		i = i+1;
	}	
	if(flag==0 or flag ==1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
return 0;
}
