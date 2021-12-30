// Karl Stencell - Dec 2021
//
//
// REVISION HISTORY
// 1.0		2021-Dec-11		initial
//
// INITIAL NOTES:
// Header file for Multiplexing.c

#pragma once

#include "NetworkingFunctions.h"
#include "Posts.h"

SOCKET WaitForAndAcceptAndHandleMultiplexedConnections(SOCKET, POSTS*);
void ProcessRequest(SOCKET, POSTS*, char*);
void ProcessGetPost(SOCKET, POSTS*, char*);
void ProcessGetPosts(SOCKET, POSTS*);
void ProcessPost(SOCKET, POSTS*, char*);
void ProcessPut(SOCKET, POSTS*, char*);
void ProcessDelete(SOCKET, POSTS*, char*);
void SendErrorCode(SOCKET);
void SendSuccessCode(SOCKET);
