// Karl Stencell - Dec 2021
//
//
// REVISION HISTORY
// 1.0		2021-Dec-11		initial
//
// INITIAL NOTES:
// Header file for Post.c

#pragma once

#include <stdbool.h>

#define BUFFER	20

typedef struct post
{
	int postID;
	char* author;
	char* topic;
	char* posting;

}POST;


POST* createPost(int, char*, char*, char*);
bool comparePosts(POST*, POST*);
void streamPrintPost(POST*);
void disposePost(POST*);