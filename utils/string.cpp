#include <bits/stdc++.h>
using namespace std;

void uppercase(string str) {
  transform(str.begin(), str.end(), str.begin(), ::toupper);
}

void lowercase(string str) {
  transform(str.begin(), str.end(), str.begin(), ::tolower);
}

bool isuppercase(char ch) {
  return isupper(ch);
}

bool islowercase(char ch) {
  return islower(ch);
}

// reverse(str.begin(), str.end()); Reverse the string

// swap(str[i], str[i + 1]); Swap the chars of the string
