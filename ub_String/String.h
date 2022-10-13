#ifndef __UB_STRING_H__
#define __UB_STRING_H__

namespace UB {

class String
{
private:
    char* str;
public:
    String();

    String(const char* Str);

    String(const String& Str);

    String& operator= (const String& Str);

    String operator+ (const String& Str);

    bool operator== (const String& Str);

    char& operator[] (const unsigned int index) const;

    //operator+= (const String& Str);

    unsigned int length(const String& Str);

    //bool empty();

    //bool isEmpty();

    //bool clear();

    //push_back();

    //pop_back


    ~String();


};
}

#endif __UB_STRING_H__
