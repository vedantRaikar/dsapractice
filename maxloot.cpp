#include<iostream>
#include<vector> 
#inlcude<algorithm>
#include<iteration>
using namespace std;


class Item{
	
 private:
	int weight;
	int value;

public:
	Item(int value, int weight) : value(value), weight(weight) {}
	~Item() = default;
	Item() = delete;
	int getWeight() { return weight; }

	int getValue() { return value; }

	double getValueOfItem(int items = 1) const {
		return static_cast<double>(value * items) / weight;
	}

	bool operator<(const Item& a) {
		return getValueOfItem() < a.getValueOfItem();
	}
		
};



int main(){
	int n ; 
	int W;
	cin >> n >> W;
	
	vector<Item> item ;
	int value , weight ;
	
	
}
