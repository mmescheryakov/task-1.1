#include <iostream>
#include <string>
using namespace std;

string str_zip(string const& s) {

	string res = "";
	char   c = s[0];
	int	   count = 1;
	
	for (size_t i = 0; i < s.size(); i++) {
		if (s[i] == s[i + 1])
			count++;
		else {
			res += (s[i] + to_string(count));
			count = 1;
		}
	}

	return res;
}

int main() {
	cout << str_zip("aaabbb") << endl;
	cout << str_zip("caaabbbc") << endl;
	return 0;
}