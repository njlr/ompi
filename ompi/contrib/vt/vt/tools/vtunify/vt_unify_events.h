/**
 * VampirTrace
 * http://www.tu-dresden.de/zih/vampirtrace
 *
 * Copyright (c) 2005-2007, ZIH, TU Dresden, Federal Republic of Germany
 *
 * Copyright (c) 1998-2005, Forschungszentrum Juelich GmbH, Federal
 * Republic of Germany
 *
 * See the file COPYRIGHT in the package base directory for details
 **/

#ifndef _VT_UNIFY_EVENTS_H_
#define _VT_UNIFY_EVENTS_H_

//
// Events class
//
class Events
{
public:

   // contructor
   Events();

   // destructor
   ~Events();

   bool run();

private:

};

// instance of class Events
extern Events * theEvents;

#endif // _VT_UNIFY_EVENTS_H_
