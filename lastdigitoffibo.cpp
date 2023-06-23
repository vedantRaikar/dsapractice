#include<iostream>
using namespace std;
int lastfib(int n){
	if(n <= 1){
		return n ;
	}
	long long previous = 0 ;
	long long current = 1;
	long long temp = 0 ;
	
	for(int i = 0 ; i < n ; ++i){
		temp = previous ; 
		previous = current ; 
		current = (temp + current) % 10 ;
	}
	return current;
}

int main() {
	int n ; 
	cin >> n ; 
	int d = lastfib(n);
	cout << d << "\n";
}
