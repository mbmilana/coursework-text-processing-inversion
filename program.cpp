#include "program.h"
string invert_str(string str) {
	string word, res_str = "";
	size_t t;
	deque<string> dq;
	t = str.find("  ");
	while (t != string::npos) {
		str.replace(t, 2, " ");
		t = str.find("  ");
	}
	if (str[0] == ' ') str.replace(0, 1, "");
	istringstream ss(str);
	while (ss >> word)
		dq.push_front(word);
	deque<string>::iterator it = dq.begin();
	while (it != dq.end()) {
		if ((*it)[(*it).size() - 1] >= '!' && (*it)[(*it).size() - 1] <= '/' || (*it)[(*it).size() - 1] == '?') {
			(*it).insert(0, 1, (*it)[(*it).size() - 1]);
			(*it).erase((*it).size() - 1);
		}
		res_str += *it + ' ';
		++it;
	}
	res_str.erase(res_str.size()-1);
	
	return res_str;
}
vector<string> invert_text(vector<string>& v) {
	vector<string> res_vec;
	vector<string>::iterator it=v.begin();
	while (it != v.end()) {
		res_vec.push_back(invert_str(*it));
		++it;
	}
	return res_vec;
}