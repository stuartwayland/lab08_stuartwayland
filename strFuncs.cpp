#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
	
sort(s1.begin(),s1.end());//sorts string into alphabetical 
sort(s2.begin(), s2.end());
char c;
for(int i=0; i < sizeof(s1); i++){
	tolower(s1[i]);
}
for(int i=0; i < sizeof(s2); i++){
	tolower(s2[i]);
}

if(s1 == s2){

return true;
}
else{
return false;
}
}
 

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){

  return false;
}


