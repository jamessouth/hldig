//
// WordReference.cc
//
// Part of the ht://Dig package   <http://www.htdig.org/>
// Copyright (c) 1999 The ht://Dig Group
// For copyright details, see the file COPYING in your distribution
// or the GNU Public License version 2 or later
// <http://www.gnu.org/copyleft/gpl.html>
//
// $Id: WordReference.cc,v 1.2 1999/10/01 15:19:30 loic Exp $
//

#include <iostream.h>

#include "WordReference.h"
#include "HtPack.h"

int WordReference::Merge(const WordReference& other)
{
  int ret = key.Merge(other.Key());
  record = other.record;

  return ret;
}