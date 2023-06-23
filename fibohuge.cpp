#include<iostream>
#include<vector>
using namespace std; 

long long getfibohuge(long long n , long long m){
	if( n <= 1){
		return n ;
	}
	long long pre = 0 ; 
	long long cur = 1 ;
	long long temp = 0 ; 
	
	vector<long> p; 
	p.push_back(0);
	p.push_back(1);
	
	while (true) { 
	     temp = pre ;
	     pre = cur ; 
	     cur = (temp + pre) % m;
	     if(cur == 1 and pre == 0 ){
	     	break; 
		 }
		 else {
		 	p.push_back(cur);
			  
		 }
	} 
	p.pop_back();
	long index = n % p.size();
	return p.at(index);
	
}


int main (){
	long long n , m  ;
	cin >> n >> m ; 
	cout << getfibohuge(n , m) << endl;
}

