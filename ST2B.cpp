//*Hackermode-1
//*The aim is to find maximum element in one iteration
//*so make an array such that sum of elements upto from
//0 to i represents arr[i]



#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
	cin>>n;
	
	//make all n elements in arr=1
	//so that sum of arr elements from 1 to i=i
	vector<long> arr;
	for(int i=0;i<n;i++)
	arr.push_back(1);
	
	//queries
	int q;
	cin>>q;
	//for every query, add v to arr[l+1] and subtract v from arr[r]
	//this makes our sum to increase by v from range [l,r] 
	while(q--){
		int l,r;
		long v;
		cin>>l>>r>>v;
		arr[l-1]+=v;
		if(r!=n)
		arr[r]-=v;
	}
	
	//find maximum element by finding sum of arr from 1 to n
	long max=0,sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum>max)
		max=sum;
	}
	cout<<max<<endl;
}
