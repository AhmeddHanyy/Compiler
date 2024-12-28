#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <sstream>
#include <cstring>

char* ConvertFromNumberToString(int number);

char* ConvertFromCharToString(char ch);

char* CompareValues(char* value1, char* value2, char* oper);

char* ANDing(char* value1, char* value2);

char* ORing(char* value1, char* value2);

char* NOTing(char* value);

vector<char*> splitString(const char* str, char delimiter = ' ');

char* concatenateThreeStrings(char* str1, char* str2, char* str3);

char* concatenateTwoStrings(char* str1, char* str2, char delimiter = '\0');
