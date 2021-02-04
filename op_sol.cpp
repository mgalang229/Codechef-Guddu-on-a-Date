#include <bits/stdc++.h>

using namespace std;
                                                   
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	char str[20];
  	cin >> str;
  	// 'str' will decide on what multiple of 10 would be the answer
  	int i;
  	int sum = 0;
  	int add = 0;
  	// get the sum of the digits
  	for (i = 0; str[i] != '\0'; i++) {
  		sum += str[i] - 48;
  	}
  	// get the digit that should be added to end so the sum would produce 10
  	add = 10 - (sum % 10);
  	if (add != 10) {
  		// if 'add' value is not equal to 10 then add 48 so that it would produce the 
  		// digit representation in character format
  		str[i] = add + 48;
  	} else {
  		// otherwise, if the 'add' value is already ten then add 0 to the end to get the multiple needed
  		str[i] = '0';
  	}
  	// end the characters with a NULL character
  	str[++i] = '\0';
  	cout << str << '\n';
  }
  return 0;
}      
