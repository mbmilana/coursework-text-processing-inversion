#include "test_runner.h"
#include "program.h"
#include <string>

void TestOneWord() {
	vector<string> v = { "maksimka" };
	vector<string> res = { "maksimka" };

	ASSERT_EQUAL(invert_text(v), res);
}
void TestKorrect() {
	vector<string> v = { "maksimka lubit mandarinki", "artemka ostalsa bez botinka" };
	vector<string> res = { "mandarinki lubit maksimka", "botinka bez ostalsa artemka" };

	ASSERT_EQUAL(invert_text(v), res);
}
void TestExtraSpaces() {
	vector<string> v = { " sasha   siel     pirog    " };
	vector<string> res = { "pirog siel sasha" };

	ASSERT_EQUAL(invert_text(v), res);
}
void UnhealthyTest() {
	vector<string> v = { "apelsini mandarini" };
	vector<string> res = { "apelsini mandarini" };

	ASSERT_EQUAL(invert_text(v), res);
}
void TestAll() {
	TestRunner tr;

	RUN_TEST(tr, TestOneWord);
	RUN_TEST(tr, TestKorrect);
	RUN_TEST(tr, TestExtraSpaces);
	//RUN_TEST(tr, UnhealthyTest);
}
int main() {
	TestAll();
}