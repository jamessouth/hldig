//
// QuotedStringList.h
//
// QuotedStringList: Fed with a string it will extract separator delimited
//                   words and store them in a list. The words may be 
//                   delimited by " or ', hence the name.
//
// $Id: QuotedStringList.h,v 1.2 1999/09/08 14:42:29 loic Exp $
//
// $Log: QuotedStringList.h,v $
// Revision 1.2  1999/09/08 14:42:29  loic
// update comments
//
// Revision 1.1.1.1  1997/02/03 17:11:05  turtle
// Initial CVS
//
//
#ifndef _QuotedStringList_h_
#define _QuotedStringList_h_

#include <StringList.h>

class QuotedStringList : public StringList
{
public:
    //
    // Construction/Destruction
    //
    QuotedStringList();
    ~QuotedStringList();

    //
    // Creation of a String from a string or String
    //
    QuotedStringList(char *, char sep = '\t', int single = 0);
    QuotedStringList(String &, char sep = '\t', int single = 0);
    QuotedStringList(char *, char *sep, int single = 0);
    QuotedStringList(String &, char *sep, int single = 0);

    int			Create(char *, char sep = '\t', int single = 0);
    int			Create(String &, char sep = '\t', int single = 0);
    int			Create(char *, char *sep, int single = 0);
    int			Create(String &, char *sep, int single = 0);
private:
};

#endif


