#include "test_runner.h"
#include "program.h"
#include <iostream>
#include <fstream>
#include <string>
#include <deque>

int main() {
	ofstream out("out.txt");
	ifstream in;
	in.open("in.txt");
	try {
		if (!in.is_open()) throw runtime_error("File is not founded");
	}
	catch (const runtime_error& e) {
		cout << "Error: " << e.what();
		return -1;
	}
	vector<string> v, res;
	string s;
	getline(in, s);
	try {
		if (s == "") throw runtime_error("Empty file");
	}
	catch (runtime_error& e) {
		cout << "Error: " << e.what();
		return -1;
	}
	do {
		v.push_back(s);
	} while (getline(in, s));
	in.close();
	res = invert_text(v);

	vector<string>::iterator it = res.begin();
	for (; it != res.end(); ++it)
		out << *it << '\n';
	return 0;
}