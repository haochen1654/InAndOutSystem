#include <iostream>
#include <vector>

using namespace std;

vector<int> read_ints(istream& is) {
	vector<int> res;
	for (int i; is >> i;)
		res.push_back(i);
	return res;
}

int main() {

}