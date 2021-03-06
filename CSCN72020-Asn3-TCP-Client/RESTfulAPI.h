// Karl Stencell - Dec 2021
//
//
// REVISION HISTORY
// 1.0		2021-Dec-11		initial
//
// INITIAL NOTES:
// Header file for RestfulAPI.c

#pragma once

#define MAXBUFFER	1000

#include <stdbool.h>

//PROTOTYPES
void GETposts(SOCKET);
void processGETpostsResponse(char*);

void GETpost(SOCKET, int);
void processGETpostResponse(char*);

void PUT(SOCKET, int, char*, char*, char*);

void POST(SOCKET, char*, char*, char*);

void DELETE_POST(SOCKET, int);

char* receiveMessage(SOCKET);
bool IsRequestSuccessful(char*);





