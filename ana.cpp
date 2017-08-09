#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s,t,x;
	cin >> s;
	cin >> t;
	int l = t.length();
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	std::transform(t.begin(), t.end(), t.begin(), ::tolower);
	std::sort(t.begin(), t.end());
	int i=0,f=0;
	while(i+l < s.length()){
		//cout << s.substr(i,i+l) << endl;
		x = s.substr(i,i+l);
		std::sort(x.begin(), x.end());
		if(t==x)
		 f=1;
		i++;
	}
	if(f==1)
		cout << "True";
	else
		cout << "False";
	return 0;
}