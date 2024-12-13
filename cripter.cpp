#include <iostream>
#include <limits>
#include <string>


using namespace std;

int main(){


	int c, seed;


	string text;
	int choice;
	char t;



	while(choice != 3){

		cout << "1. Encrypt \n2. Decrypt\n3. Exit \n";
		cin >> choice;
		if(choice == 3)
			return 0;

		else if(choice < 3){
			cout << "insert the seed to Encrypt/Decrypt \n";
			cin >> seed;

			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "insert the text: ";
			getline(cin , text);
		}

		switch(choice){

			case 1:
				cout << "this is your cripted text: {";
					for(int i = 0; i < text.length(); i++ ){
						c = text[i];

						if(text[i] == ' '){
							cout << " ";
						}
						else{

							t = c + (seed*10);
							cout << t;

					}
					}

				cout << "}\n";
				break;
			case 2:
				cout << "this is your decripted text: {";
					for(int j = 0; j< text.length(); j++){


						c = text[j];

						if(text[j] == ' '){
							cout << " ";
						}
						else{

							t = c - (seed * 10);
							cout << t;

						}




					}
				cout <<"}\n";
				break;
			default:
				cout<< "select a valid option \n";
		}



		}


}