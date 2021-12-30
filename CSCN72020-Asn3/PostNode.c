// Karl Stencell - Dec 2021
//
//
// REVISION HISTORY
// 1.0		2021-Dec-11		initial
//
// INITIAL NOTES:
// Post structs are how the database links together posts in memory
// so that they can be manipulated in a logical fashion.


#include "PostNode.h"
#include "Post.h"
#include <stdlib.h>
#include <stdio.h>


POST_NODE* createPostNode(POST* post)
{
	POST_NODE* newPostNode = (POST_NODE*)malloc(sizeof(POST_NODE));
	
	newPostNode->NodeData = post;
	newPostNode->next = NULL;

	return newPostNode;
}

void setPostNodeNextPostNode(POST_NODE* sourceNode, POST_NODE* nextNode)
{
	sourceNode->next = nextNode;
}

POST_NODE* getPostNodeNextPostNode(POST_NODE* postnode)
{
	return postnode->next;
}

void disposePostNode(POST_NODE* postnode)
{
	disposePost(postnode->NodeData);
	free(postnode);
}