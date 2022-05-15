#include<iostream>
#include"guest.h"
#include"user.h"
#include<cstring>
using namespace std;
//Constructor
guestUser::guestUser(){
	userID=0;
	strcpy(nameinFull,"");
	strcpy(contactNo,0000000000);
	strcpy(NIC,000000000000);
	strcpy(address,"");
	strcpy(gender,"");

}
//overload consructor
guestUser:: guestUser(int CUuserId. char CUnameinFull, int CUcontactNo, char CUnic[12], char CUaddress, char CUgender[1]){
	userID=CUuserID;
	strcpy(nameinFull,CUnameinFull);
	strcpy(contactNo,CUcontact);
	strcpy(NIC,CUnic);
	strcpy(address,CUaddress);
	strcpy(gender,CUgender);
}

void guestUser::searchServices()
{
}
void guestUser::registerUser()
{
}

guestUser::~GuestUser()
{
//Destructor 
}
