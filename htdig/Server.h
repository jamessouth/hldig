//
// Server.h
//
// A class to keep track of server specific information.
//
// Part of the ht://Dig package   <http://www.htdig.org/>
// Copyright (c) 1999 The ht://Dig Group
// For copyright details, see the file COPYING in your distribution
// or the GNU Public License version 2 or later
// <http://www.gnu.org/copyleft/gpl.html>
//
// $Id: Server.h,v 1.6 1999/08/28 21:10:17 ghutchis Exp $
//
//
#ifndef _Server_h_
#define _Server_h_

#include <time.h>
#include "Object.h"
#include "htString.h"
#include "Stack.h"
#include "Queue.h"
#include "StringMatch.h"
#include "URLRef.h"

class Document;

class Server : public Object
{
public:
	//
	// Construction/Destruction
	//
	Server(char *host, int port);
	~Server();

	//
	// This needs to be called with a document containing the
	// robots.txt file for this server
	//
	void			robotstxt(Document &doc);

	//
	// Provide some way of getting at the host and port for this server
	//
	int			port()	{return _port;}
	char			*host()	{return _host;}
	
	//
	// Add a path to the queue for this server.  This will check to
	// see if the path in the path is allowed.  If it isn't allowed,
	// it simply won't be added.
	//
	void			push(char *path, int hopcount, char *referer);

	//
	// Return the next URL from the queue for this server.
	//
	URLRef			*pop();

	//
	// Delays the server if necessary. If the time between requests
	// is long enough, the request can occur immediately.
	//
	void			delay();

	//
	// Produce statistics for this server.
	//
	void			reportStatistics(String &out, char *name);
	
private:
	String			_host;
	int			_port;
	int			_bad_server;		// TRUE if we shouldn't use this one
	int		        _connection_space;	// Seconds between connections
	time_t			_last_connection;	// Time of last connection to this server
	Queue			_paths;
	StringMatch		_disallow;	// This pattern will be used to test paths
	int		        _documents;	// Number of documents visited
	int                     _max_documents;  // Maximum number of documents from this server
};

#endif


