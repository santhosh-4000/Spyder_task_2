#include<bits/stdc++.h>
using namespace std;

int main(){
	//test cases;
	int t;
	cin>>t;
	
	while(t--){
		stack <char>st;
		
		//count is used for counting pairs of <>
		//res is updated as count when stack is empty
		//i.e,when the expression is valid
		 
		int count=0,res=0;
		
		//take input strings
		string str;
		cin>>str;
		string::iterator i;
		
		for(i=str.begin();i!=str.end();i++){
		
			if(*i=='<')
			st.push(*i);
			
	     //whenever expression is valid till *i,stack
	     //will be empty
			if(*i=='>'){
				//get out of loop if stack is empty
				//after updating res 
				if(st.empty()){
				  res=count;
				  break;	
				}
				//else pop from stack and increse 
				//count by two 
				else{
					st.pop();
					count+=2;
					
				//check if stack is empty 
				//inorder to update res
					if(st.empty())
					res=count;
				}
			}
		}
		cout<<res<<endl;
	}
	
	
}
