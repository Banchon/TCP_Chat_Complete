#ifndef TOOLS_H
#define TOOLS_H
#include <string.h>
#include <list>
#include "./proto.h"
using std::list;


bool isUserNameExisted(list<sUserInfo_t> *list_ptr, char * userName) {
	list<sUserInfo_t>::iterator it;
	for(it = list_ptr->begin(); it != list_ptr->end(); it++) {
		if(strcmp(it->userName, userName) == 0)
			return true;
	}

	return false;
}

list<sUserInfo_t>::iterator getIterator(list<sUserInfo_t> *list_ptr, char * userName) {
	list<sUserInfo_t>::iterator it;
	for(it = list_ptr->begin(); it != list_ptr->end(); it++) {
		if(strcmp(it->userName, userName) == 0)
			break;
	}
	return it;
}
#endif
