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
	  
	for (int i=0; i<sizeof(s1); i++){//iterates throught the string
		if (ispunct(s1[i])==1){
			remove(&s1[i]);// removes all punctiation from the string
		if (s1[i]==' '){
			remove(&s1[i]);// removes all whitespace from the string
		}
tolower(s1[i]);// changes all char to lower case
		
		}}
	
sort(s1.begin(),s1.end());//sorts string into alphabetical 

for (int i=0; i<sizeof(s2); i++){//iterates throught the string
                if (ispunct(s2[i])==1){
                        remove(&s2[i]);// removes all punctiation from the string
                if (s2[i]==' '){
                        remove(&s2[i]);// removes all whitespace from the string
                }
tolower(s2[i]);// changes all char to lower case
}}
sort(s2.begin(), s2.end());





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


