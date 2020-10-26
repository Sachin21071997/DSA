#include<iostream>
using namespace std;
int main(){
	int testcases;
	int c1,c2,c3,c4;
	int n,m;
	cin>>testcases;
	int sum_rick = 0;
	int sum_cab = 0;
	int cost_rickshaws = 0;
	int cost_cabs = 0;
	int total_cost =0;
	int count_t = 0;
	while(count_t<testcases){
		cin>>c1>>c2>>c3>>c4;
		cin>>n>>m;
		int ar1[n];
		int ar2[m];
		for(int i =0;i<n;i++){
			cin>>ar1[i];
			
			
		}
		for(int j=0;j<m;j++){
			cin>>ar2[j];
			
			
		}
		sum_rick=0;
		sum_cab=0;
		for(int k = 0;k<n;k++){
			sum_rick = sum_rick + min(ar1[k]*c1,c2);
			
			
		}
		cost_rickshaws = min(sum_rick,c3);
		//cout<<cost_rickshaws<<endl;
		
		for(int l=0;l<m;l++){
			sum_cab = sum_cab + min(ar2[l]*c1,c2);
		}
		//cout<<cost_rickshaws;
		cost_cabs = min(sum_cab,c3);
		//cout<<cost_cabs<<endl;
		total_cost = cost_cabs+cost_rickshaws;
		
		total_cost = min(total_cost,c4);
		cout<<total_cost<<endl; 
		count_t = count_t+1;
	}
return 0;
}