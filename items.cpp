#include<iostream>
#include<cstring>
#include"Employee.h"
#include"supplier.h"
using namespace std;

class materialStock{
	private:
	    int itemNo;
	    char itemName[20];
	    int quantity;
	    double unitPrice;
	    char status[40];
	    
	public:
		materialStock();
		materialStock(int iNO, char iName[20], int iQuantity, double iPrice, char iStat[40]);
		void setaddStock(int iNo, int iQuantity);
		void setdeleteStock(int iNO, int iQuantity);	
		void updateItem();
		int getaddStock();
		int getdeleteStock();
		~materialStock();
	    

	
};
