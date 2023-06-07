#include<iostream>
#include<vector>
#include<string>

using namespace std; 

class solution { 

public: 
   long long maxprod(vector<int> &num){
   	
   	long long first = 0  , second = 0 ; 
   	
   	for(int i =0 ; i < num.size() ; ++i){
   		if(num[i] > first){
   			second = first;
   			first = num[i];
   		}
		else if (num[i]> second){
			second = num[i];
		}
		
	   }
	   return second*first ;
	   
   }
};



int main()  {
	 vector<int> vec; 
	 int n ; 
	 cin>>n ; 
	 for(int i=0 ; i < n ; ++i){
	 	int x ; 
	 	cin >> x; 
	 	vec.push_back(x);
	 	
	 }
	 
	 solution s ; 
	 cout << s.maxprod(vec)<<endl ; 
	 return 0 ; 
	 
	
}
