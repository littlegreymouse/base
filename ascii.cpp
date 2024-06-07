#include"ascii.h"

void print_ascii() {
	for (u8 i = 0; i < 31; i++)
	{
		u8 j = 0;
		while (j < 96) {
			static	u8 k = 0;
			
				if (j % 12 == 0){		
					
					if (i == 0){
						cout << "|**";
						switch (k) {
						case 0:cout << "ASCIIÖµ"; break;
						case 1:cout << "×Ö·û"; break;
						case 2:cout << "ASCIIÖµ"; break;
						case 3:cout << "×Ö·û"; break;
						case 4:cout << "ASCIIÖµ"; break;
						case 5:cout << "×Ö·û"; break;
						case 6:cout << "ASCIIÖµ"; break;
						case 7:cout << "×Ö·û"; break;
						}
						k++;
						cout << "**|";
						//break;
					}
					else 
						cout << "|";
					cout << (int)i;
					j++;
				}
				else {
					j++;
					if (i == 0)cout << "";
					else cout << " ";

				}	

		}
		cout << endl;
		

	}
}
