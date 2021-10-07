#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int tamArr, target; 
	cin >> tamArr >> target;
	vector<int> a(tamArr);
	map<int, int> vs;
	for (int i = 0; i < tamArr; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < tamArr; i++) {
		if(vs.count(target - a[i])){
			cout <<"["<< vs[target - a[i]] << "," << i + 1 <<"]"<<endl;
			return 0;
		}
		vs[a[i]] = i + 1;
	}
	cout<<"No se encontro";
	return 0;
}
