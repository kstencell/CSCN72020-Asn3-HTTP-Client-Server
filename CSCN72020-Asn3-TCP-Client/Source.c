//
// Assignment 3
// CSCN72020 - F21
// Karl Stencell - Dec 2021
//
//
// REVISION HISTORY
// 1.0		2021-Dec-11		initial
//
// INITIAL NOTES:
// This is the client side of a two part project (the other is the server side).
// This program will send HTML requests to the server to view/manipulate a text file database
// All networking is done through localhost and is not intended/safe to modify this program for internet usage.

#include "NetworkingFunctions.h"
#include "menu.h"
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	// first set up Winsock  (same as server)
	InitializeWindowsSockets();

	printf("Config the remote addr...\n");
	struct addrinfo* peer_address = ConfigureRemoteAddress("127.0.0.1", "8080", TCP);

	printf("Creating socket and connect...\n");
	SOCKET peer_socket = CreateAndConnectRemoteSocket(peer_address);


	// This is the main engine of the client program that spins the menu perpetually
	while (true) 
	{
		printMainMenuOptions();
		executeUserOptionChoice(peer_socket);
	}
}