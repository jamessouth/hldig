//
// Stack.h
//
// Stack: This class implements a linked list of objects.  It itself is also an
//        object
//
// Part of the ht://Dig package   <http://www.htdig.org/>
// Copyright (c) 1999, 2000 The ht://Dig Group
// For copyright details, see the file COPYING in your distribution
// or the GNU General Public License version 2 or later 
// <http://www.gnu.org/copyleft/gpl.html>
//
// $Id: Stack.h,v 1.3.2.1 2000/05/10 18:23:45 loic Exp $
//

#ifndef	_Stack_h_
#define	_Stack_h_

#include "Object.h"

class Stack : public Object
{
public:
	//
	// Constructors/Destructor
	//
					Stack();
					~Stack();

	//
	// Stack access
	//
	void			push(Object *obj);
	Object			*peek();
	Object			*pop();
	int				Size()					{return size;}

	//
	// Stack destruction
	//
	void			destroy();

protected:
	//
	// These variables are to keep track of the linked list
	//
	void			*sp;

	int				size;
};

#endif
