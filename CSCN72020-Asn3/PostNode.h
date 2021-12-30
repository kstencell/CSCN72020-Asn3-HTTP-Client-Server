// Karl Stencell - Dec 2021
//
//
// REVISION HISTORY
// 1.0		2021-Dec-11		initial
//
// INITIAL NOTES:
// Header file for PostNode.c

#pragma once

#include "Post.h"

typedef struct postnode
{
	POST* NodeData;
	struct postnode* next;
}POST_NODE;

POST_NODE* createPostNode(POST*);
void setPostNodeNextPostNode(POST_NODE*, POST_NODE*);
POST_NODE* getPostNodeNextPostNode(POST_NODE*);
void disposePostNode(POST_NODE*);