#include "stdio.h" /* FILE * */
#include "sys/socket.h" /*socket();*/
/*
arpa = Advanced Research Projects Agency
IPPROTO_TCP
*/
#include "arpa/inet.h"

FILE * logFile; int socketRaw;


int main() {


	// FILE * fopen(const char * filename, const char * mode);
	logFile = fopen("log.txt", "w");

	/*
	the return value of the fopen(); is pointer to FILE structure if the file opens successfully,
	NULL pointer if the file opening fails
	*/
	if (0 == logFile) printf("Unable to create file !");

	printf("Create a raw socket that shall sniff ...\n");

	/*
	AF_INET designates the Address Format that goes with the local namespace

	SOCK_RAW is a const socket type in network programming that allows direct access to lower-level network protocols.
	It is used for sending and receiving raw packets, bypassing the normal TCP/UDP protocol stack.

	IPPROTO_TCP socket options that apply to sockets created
	for the IPv4 and IPv6 address families (AF_INET and AF_INET6)
	with the protocol parameter to the socket function specified as TCP (IPPROTO_TCP).

	Upon successful completion (process), socket(); shall return a non-negative integer, the socket file descriptor.
	Otherwise, a value of -1 shall be returned and errno set to indicate the error.

	int socket(int domain, int type, int protocol);
	*/
	socketRaw = socket(AF_INET, SOCK_RAW, IPPROTO_TCP);






}








