#ifndef PROTO_H
#define PROTO_H
#include <stdio.h>
#include <list>

#define SERVER_PORT 4430

#define LISTEN_QUEUE_LEN 40
#define MAX_NAME_LEN 63

using std::list;

enum MsgType_t  {

	//below are message type definition.
   	LOGIN = 0,
   	LOGOUT = 1,
   	GETALLUSER = 2,
	LOGFAIL = 3,
	LOGSUCCESS = 4,
	NUMOFUSER = 5,
	JUSTUSERINFO = 6,

	
	STARTTCPCHAT = 7,
	ENDTCPCHAT = 8,
	AGREETOCHAT = 9,
	DISAGREETOCHAT = 10,
	DELIMITER = 11
};


//The delimiter of every TCP chat message.
typedef struct {
	MsgType_t msgType;    //delimiter or ENDTCPCHAT
	unsigned int length;
}sChatControlMessage_t;


//user information
typedef struct {
	char userName[MAX_NAME_LEN + 1];
	unsigned int ip;
	unsigned short port;
} sUserInfo_t;


typedef struct {
	MsgType_t msgType;
	sUserInfo_t userInfo;
} sMessage_t;

#endif
