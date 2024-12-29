#include "utils.h"

char *ConvertFromNumberToString(int number)
{
    return _strdup(to_string(number).c_str());
}

char *ConvertFromCharToString(char ch)
{
    return _strdup(&ch);
}

char *CompareValues(char *value1, char *value2, char *oper)
{
    int comparisonResult = strcmp(value1, value2);

    if (strcmp(oper, "==") == 0)
    {
        return ConvertFromNumberToString(comparisonResult == 0);
    }
    else if (strcmp(oper, "!=") == 0)
    {
        return ConvertFromNumberToString(comparisonResult != 0);
    }
    else if (strcmp(oper, ">") == 0)
    {
        return ConvertFromNumberToString(comparisonResult > 0);
    }
    else if (strcmp(oper, "<") == 0)
    {
        return ConvertFromNumberToString(comparisonResult < 0);
    }
    else if (strcmp(oper, ">=") == 0)
    {
        return ConvertFromNumberToString(comparisonResult >= 0);
    }
    else if (strcmp(oper, "<=") == 0)
    {
        return ConvertFromNumberToString(comparisonResult <= 0);
    }
    else
    {
        return _strdup("0");
    }
}

char *ANDing(char *value1, char *value2)
{
    return ConvertFromNumberToString(atoi(value1) && atoi(value2));
}

char *ORing(char *value1, char *value2)
{
    return ConvertFromNumberToString(atoi(value1) || atoi(value2));
}

char *NOTing(char *value)
{
    return ConvertFromNumberToString(!atoi(value));
}

vector<char *> splitString(const char *str, char delimiter)
{
    vector<char *> result;
    stringstream ss(str);
    string token;

    // Split the input string on the delimiter
    while (getline(ss, token, delimiter))
    {
        result.push_back(_strdup(token.c_str())); // Convert each token to char* and store it
    }

    return result;
}

char *concatenateThreeStrings(char *str1, char *str2, char *str3)
{
    string result = string(str1) + "," + string(str2) + " " + string(str3);
    return _strdup(result.c_str());
}

char *concatenateTwoStrings(char *str1, char *str2, char delimiter)
{
    // If any of the strings is empty, return the other string
    if (strcmp(str1, "") == 0)
    {
        return _strdup(str2);
    }
    else if (strcmp(str2, "") == 0)
    {
        return _strdup(str1);
    }

    string result = string(str1);

    // If a delimiter is specified, add it between the strings
    if (delimiter != '\0')
    {
        result += delimiter;
    }

    result += string(str2); // Append the second string

    return _strdup(result.c_str()); // Return a dynamically allocated C-string
}
