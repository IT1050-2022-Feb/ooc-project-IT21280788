#include<iostream>
#include<user.h>
using namespace std;
class guestUser{
	private:
		int userID;
		char nameinFull[50];
		int contactNo[10];
		char NIC[12];
		char address[60];
		char gender[1];
	
	
	public:
		guestUser();
		guestUser(int CUuserId. char CUnameinFull[50], int CUcontactNo, char CUnic[12], char CUaddress, char CUgender[1]);
		void searchServices();
		void registerUser();
		~guestUser();
		
		
};
