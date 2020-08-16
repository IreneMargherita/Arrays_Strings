#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include<stack>
#include<vector>
void NGS(int arr[],int n){
	stack<int>s;
	vector<int>temp;
	int i;
	for(i=0;i<n;i++){
	    if(s.size()==0)
	    temp.push_back(-1);
	    else if(s.size()>0 && s.top()<=arr[i])
	    temp.push_back(s.top());
	    else if(s.size()>0 && s.top()>arr[i]){
	        while(s.size()>0 && s.top()>arr[i]){
	            s.pop();
	        }
	        if(s.size()==0)
	        temp.push_back(-1);
	        else
	        temp.push_back(s.top());
	    }
	    s.push(arr[i]);
	    }
	//reverse(temp.begin(),temp.end());
	for(int t: temp){
	    cout<<t<<" ";
	   
	}
}
int main() {
	int t;
	int n;
	int a[1000];

	scanf("%d",&t);
	while(t){
	    scanf("%d",&n);
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	  NGS(a,n);
	  cout<<endl;
	  t=t-1;
	}
	return 0;
}
