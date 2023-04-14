#include <iostream> 
#include <string>
using namespace std;

int main() {
	string list[] = { "연진", "동은", "여정" };

	for (auto& x : list)
		cout << (x + "야 안녕!") << endl;
	return 0;
}//main