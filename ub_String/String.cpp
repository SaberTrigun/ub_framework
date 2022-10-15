#include "String.h"

using u_int = unsigned int;

namespace UB{


String::String() : str(nullptr){};


String::String(const char* Str)
{
    u_int lengthStr = 0;

    while(Str[lengthStr] != '\0')
    {
        ++lengthStr;
    }

    str = new char[lengthStr + 1];

    if(str)
    {
        for (u_int i = 0; i < lengthStr; ++i)
        {
            str[i] = Str[i];
        }
    }
}


String::String(const String& Str)
{
    u_int lengthStr = length(Str);
    str = new char[lengthStr + 1];

    if(str)
    {
        for(int i = 0; i < lengthStr; ++i)
        {
            str[i] = Str.str[i];
        }
    }
}


u_int String::length(const String& Str)
{
    u_int lengthStr = 0;

    while(Str.str[lengthStr] != 0)
    {
        ++lengthStr;
    }

    return lengthStr;
}


String& String::operator= (const String& Str)
{
    if(this == &Str)
    {
        return *this;
    }

    u_int lengthStr = length(Str);
    str = new char[lengthStr + 1];

    if(str)
    {
        for(int i = 0; i < lengthStr; ++i)
        {
            str[i] = Str.str[i];
        }
    }

    return *this;
}


String String::operator+ (const String& Str)
{
    u_int lengthStrL = length(str);
    u_int lengthStrR = length(Str);
    u_int lengthStr = lengthStrL + lengthStrR;
    String tempStr;
    tempStr.str = new char[lengthStr + 1];
    u_int counter = 0;

    if(tempStr.str)
    {
        for(int i = 0; i < lengthStrL; ++i)
        {
            tempStr.str[i] = str[i];
            ++counter;
        }
        for(int i = 0; i < lengthStrR; ++i)
        {
            tempStr.str[i + counter] = Str.str[i];
        }
    }

    return tempStr;
}


bool String::operator== (const String& Str)
{
    bool result = false;

    if (length(Str) == length(str))
    {
        for(int i = 0; i < length(Str); ++i)
        {
            if(str[i] == Str.str[i])
            {
                result = true;
            }
            else
            {
                result = false;
                break;
            }
        }
    }

    return result;
}


bool String::operator!= (const String& Str)
{
    bool result = true;

    if (length(Str) == length(str))
    {
        for(int i = 0; i < length(Str); ++i)
        {
            if(str[i] != Str.str[i])
            {
                result = true;
                break;
            }
            else
            {
                result = false;
            }
        }
    }

    return result;
}


char& String::operator[] (const u_int index) const
{
    u_int lengthStr = 0;

    while(str[lengthStr] != 0)
    {
        ++lengthStr;
    }

    if(index < 0 || index > lengthStr)
    {
        //exit(1);
    }

    return str[index];
}


char* String::data() const
{
    return str;
}


String::~String()
{
    delete[] str;
}

}
