/*
 This is part of the OTF library. Copyright by ZIH, TU Dresden 2005-2006.
 Authors: Andreas Knuepfer, Holger Brunst, Ronny Brendel, Thomas Kriebitzsch
*/

/**
 * @file OTF_Parse.h
 *
 * @brief All record parsing is located here.
 *
 * \ingroup internal
 */

#ifndef OTF_PARSE_H
#define OTF_PARSE_H


#include "OTF_RStream.h"
#include "OTF_HandlerArray.h"


/**	Parse one event record from buffer and call the appropriate
	function - internal use only. */
int OTF_Reader_parseEventRecord( OTF_RBuffer* buffer, 
	OTF_HandlerArray* handlers );

/**	Parse one definition record from buffer and call the appropriate
	function - internal use only. */
int OTF_Reader_parseDefRecord( OTF_RBuffer* buffer, 
	OTF_HandlerArray* handlers, uint32_t streamid );

/**	Parse one statisitc summary record from buffer and call the 
	appropriate function - internal use only. */
int OTF_Reader_parseStatisticsRecord( OTF_RBuffer* buffer, 
	OTF_HandlerArray* handlers );

/**	Parse one snapshot record from buffer and call the 
	appropriate function - internal use only. */
int OTF_Reader_parseSnapshotsRecord( OTF_RBuffer* buffer, 
	OTF_HandlerArray* handlers );


/* *** handle unknown records or parts of it - internal use only! ****** *** */

/* These functions are external because OTF_Reader uses them */
int OTF_Reader_readUnknownRecord( OTF_RBuffer* buffer, 
		OTF_HandlerArray* handlers );

int OTF_Reader_readUnknownDefRecord( OTF_RBuffer* buffer, 
		OTF_HandlerArray* handlers, uint32_t streamid );


#endif /* OTF_PARSE_H */
