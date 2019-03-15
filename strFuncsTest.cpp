// strFuncsTest.cpp
// This is a file used to test the functions isAnagram() and isPalidrome()

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include "linkedListFuncs.h"
#include "tddFuncs.h"
#include "strFuncs.h"

using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 2) {
    cerr << "Usage: " << argv[0] << " [num of test to run]" << std::endl;
    return 1;
  }else {
    int testNum = atoi(argv[1]);


if (testNum == 1){

START_TEST_GROUP("isAnagram");

	string simple1 ("abcd");
	string simple2 ("dcba");
	string simple3 ("abcdd");
	string test1 ("i am okay");
	string test2 ("i am okay.");
	string test3 ("cat sat on the hat");
	string test4 ("hats sat on the cat");


assertEquals(true, isAnagram(simple1,simple2));
assertEquals(false, isAnagram(simple2, simple3));
assertEquals(false, isAnagram(simple1, test1));
assertEquals(true, isAnagram(test1, test2));
assertEquals(false, isAnagram(test3, test4));


}else if(testNum == 2){

START_TEST_GROUP("isPalindrome");

	string first ("racecar");
	string second ("madam ");
	string third ("A Santa at Nasa");
	string fourth ("bird");
	string fifth ("racecars");


assertEquals(true, isPalindrome(first));
assertEquals(true, isPalindrome(second));
assertEquals(true, isPalindrome(third));
assertEquals(false, isPalindrome(fourth));
assertEquals(false, isPalindrome(fifth));}}

return 0;}
