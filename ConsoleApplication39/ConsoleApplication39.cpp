//1
/*
#include <iostream>
#include <tchar.h>
#include <cstring>
using namespace std;

bool Palindrome(const _TCHAR* str)
{
    int len = _tcslen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (_totlower(str[i]) != _totlower(str[len - i - 1]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    _TCHAR str[256];
    wcout << _T("Enter string: ");
    wcin.getline(str, 256);

    if (Palindrome(str))
    {
        wcout << _T("This is a palindrome.\n");
    }
    else
    {
        wcout << _T("This is not a palindrome.\n");
    }
}
*/
//2
/*
#include <iostream>
#include <tchar.h>
#include <cwctype>
using namespace std;

int Words(const _TCHAR* str)
{
    int count = 0;
    bool inWord = false;

    for (int i = 0; str[i] != _T('\0'); i++)
    {
        if (!_istspace(str[i]))
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }
    return count;
}
int main()
{
    _TCHAR str[256];
    wcout << _T("Enter a sentence: ");
    wcin.getline(str, 256);

    int wordCount = Words(str);

    if (wordCount == 0)
    {
        wcout << _T("No words found.\n");
    }
    else
    {
        wcout << _T("Word count: ") << wordCount << _T("\n");
    }
}
*/
//3
/*
#include <iostream>
#include <tchar.h>
#include <cstring>
using namespace std;

void ReplaceSub(_TCHAR* text, const _TCHAR* search, const _TCHAR* replace)
{
    _TCHAR buffer[1024];
    _TCHAR* pos = _tcsstr(text, search);

    while (pos)
    {
        _tcsncpy(buffer, text, pos - text);
        buffer[pos - text] = _T('\0');
        _tcscat(buffer, replace);
        _tcscat(buffer, pos + _tcslen(search));
        _tcscpy(text, buffer);

        pos = _tcsstr(text, search);
    }
}
int main()
{
    _TCHAR text[1024], search[256], replace[256];
    wcout << _T("Enter text: ");
    wcin.getline(text, 1024);

    wcout << _T("Enter the substring to search for: ");
    wcin.getline(search, 256);

    wcout << _T("Enter the substring to replace it with: ");
    wcin.getline(replace, 256);

    ReplaceSub(text, search, replace);

    wcout << _T("Result: ") << text << _T("\n");
}
*/