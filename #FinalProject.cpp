#include<iostream>
#include<string>
using namespace std;
int main()																									
{
	string optionSubMenu;
	string optionCars;
	string orderdcar;
	system("color 9f");
	cout<<"\n\n";
	cout<<endl<<"\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WS-MOTORS";
    cout<<endl<<"\t\t\t\t\t|                                        |";
	cout<<endl<<"\t\t\t\t\t|             P R O J E C T              |";
	cout<<endl<<"\t\t\t\t\t|                                        |";
	cout<<endl<<"\t\t\t\t\t------------------------------------------";
	cout<<endl<<"\t\t\t\t\t|                                        |";
	cout<<endl<<"\t\t\t\t\t|                                        |";
	cout<<endl<<"\t\t\t\t\t|         C A R  S H O W R O O M         |";
	cout<<endl<<"\t\t\t\t\t|            PROJECT MEMBERS             |";
    cout<<endl<<"\t\t\t\t\t|            1) WAQAR AHMED              |";
	cout<<endl<<"\t\t\t\t\t|            2) SARA ALI                 |";
	cout<<endl<<"\t\t\t\t\t|                                        |";
	cout<<endl<<"\t\t\t\t\t|                                        |";
	cout<<endl<<"\t\t\t\t\t------------------------------------------\n";
	cout<<endl<<"\n\n\n";
	system("pause");
	
	
	string option;
     system("color 0");
	 menu:
	 system("cls");
	 cout << endl;
	 cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "\t\t\t\t          x       WS  M O T O R S           x" << endl;
     cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "\t\t\t\t          x [1] - Available Cars            x" << endl;
     cout << "\t\t\t\t          x [2] - Custom Car                x" << endl;
     cout << "\t\t\t\t          x [3] - Check Receipt             x" << endl;
     cout << "\t\t\t\t          x [4] - About Company             x" << endl;
     cout << "\t\t\t\t          x [5] - Exit Program              x" << endl;
     cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
     cout << "\n\t\t\t\t          Enter Your Choice:	";
     getline(cin,option);
          if (option == "1")
				 	    {
			       		system("cls");  	
					   	system("color 0");
					   	cout<<"\t\t-------------------------------- \t\t--------------------------------";
						cout<<endl<<"\t\t|         P R O J E C T        | \t\t|         CAR SHOWROOM         |";
						cout<<endl<<"\t\t-------------------------------- \t\t--------------------------------";
						
						cout<<endl<<"\t\t\t\t\t--------------------------------";
			    		cout<<endl<<"\t\t\t\t\t|   AVAILABE CAR CATEGORIES    |";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
			    		cout<<endl<<"\t\t\t\t\t[1] MUVs                       |";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
			    		cout<<endl<<"\t\t\t\t\t[2] SUVs                       |";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
			    		cout<<endl<<"\t\t\t\t\t[3] SEDANs                     |";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
			    		cout<<endl<<"\t\t\t\t\t[4] LUXURY/GERMAN CARS         |";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
			    		cout<<endl<<"\t\t\t\t\t[0] BACK-MENU                  |";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
						cout<<endl<<"\t\t\t\t\t--------------------------------";
			   		    cout<<endl<<"\t\t\t\t\tINPUT DESIRED CAR CATEGORY N0: |";
			            cout<<endl<<"\t\t\t\t\tYOUR INPUT IS =                ";
			            getline(cin,optionSubMenu);
			             
			            if (optionSubMenu == "0")
			            {
			            	goto menu;
						}
						
						if (optionSubMenu == "1")
						{
						system("CLS");
		    			cout<<endl<<"________CAR #1 TOYOTA PRADO 3.0L VX__________________________________________________________________________________";
		    			cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 10\t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 CVT ";
						cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 TOYOTA   \t\t\xB2\xB2  FUEL TYPE        \xB2 DIESEL ";
						cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 PRADO 3.0L-VX\t\t\xB2\xB2  ENGINE           \xB2 2982cc ";
						cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 173         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 8-11  ";
						cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 19,399,000PKR\t\t\xB2\xB2  INPUT-10 TO ORDER NOW \xB2";
						cout<<endl;
						cout<<endl<<"________CAR #2 TOYOTA INNOVA CRYSTA__________________________________________________________________________________";
		    			cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 12 \t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 AUTOMATIC ";
						cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 Toyota    \t\t\xB2\xB2  FUEL TYPE        \xB2 PETROL ";
						cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 innova Crysta \t\t\xB2\xB2  ENGINE           \xB2 2694cc ";
						cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 166         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 10-15  ";
						cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 3,600,000PKR\t\t\xB2\xB2  INPUT-12 TO ORDER NOW \xB2";
						cout<<endl;
						cout<<endl<<"\t\t\t\t\t--------------------------------";
   		    			cout<<endl<<"\t\t\t\t\tINPUT DESIRED CAR SERIAL N0:   |";
            			cout<<endl<<"\t\t\t\t\tYOUR INPUT IS =                ";
						getline(cin,optionCars);
						if (optionCars == "10")
						{
						system("cls");
						orderdcar ="\n\xB2\xB2 TOYOTA PRADO 3.0L VX_____________________________________\
					 \n SERIAL NUMBER     \xB2 10   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 CVT\n CAR MANUFACTURER  \xB2 TOYOTA          \xB2\xB2 FUEL TYPE         \xB2 DIESEL \n CAR MODEL         \xB2 PRADO 3.0L-V    \xB2\xB2 ENGINE            \xB2 2982cc\n HORSE POWER       \xB2 173             \xB2\xB2 PRICE             \xB2 19,399,000PKR \n MILAGE KM/LETER   \xB2 8-11  \n";
					    cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		            cout << "          x       WS  M O T O R S           x" << endl;
        	            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		            cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout << "          x       F R O M  MAIN MEN         x" << endl;
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							system("cls");
							goto menu;
      					    system("pause");
						return 0;
				     	}
				     	if (optionCars == "12")
				     	 {
				     	 	system("cls");
				     	 	orderdcar ="\n\xB2\xB2 TOYOTA INNOVA CRYSTA_____________________________________\
					 \n SERIAL NUMBER     \xB2 12   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 AUTO\n CAR MANUFACTURER  \xB2 TOYOTA          \xB2\xB2 FUEL TYPE         \xB2 PETROL \n CAR MODEL         \xB2 Innova Crysta   \xB2\xB2 ENGINE            \xB2 2694cc\n HORSE POWER       \xB2 166             \xB2\xB2 PRICE             \xB2 3,600,000PKR \n MILAGE KM/LETER   \xB2 10-15  \n";
						     cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		           		 cout << "          x       WS  M O T O R S           x" << endl;
        	           		 cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		           		 cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
			           		 cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			          		 cout << "          x       F R O M  MAIN MEN         x" << endl;
			          		 cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			          		 cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							system("cls");
							goto menu;
      					    system("pause");
      					    return 0;
		      				
							  			 }
				     	else
						  {
						  	system("cls");
						  //	beep(561,600);
							cout<<"\n\n\n\n\n\n";
							cout<<"\t\t\t[][][]  [][][]  [][][]  [][][]  [][][]\n";
							cout<<"\t\t\t[]      []  []  []  []  []  []  []  []\n";
							cout<<"\t\t\t[][][]  [][][]  [][][]  []  []  [][][]\n";
							cout<<"\t\t\t[]      [] []   [] []   []  []  [] []\n";
							cout<<"\t\t\t[][][]  []  []  []  []  [][][]  []  []\n\n";

							cout<<"\t\t\tPlease input a valid number.\n";
							cout<<"\t\t\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							system("cls");
							goto menu;
      					    system("pause");
				     		
						  }
						}
						if ( optionSubMenu == "2")
		      				{
		      				    system("CLS");
				    			cout<<"________CAR #1 HONDA BR-V____________________________________________________________________________________________";
				    			cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 14\t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 CVT ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 H O N D A \t\t\xB2\xB2  FUEL TYPE        \xB2 PETROL ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 BR-V       \t\t\xB2\xB2  ENGINE           \xB2 1497cc ";
								cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 119         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 11-15  ";
								cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 4,939,000PKR\t\t\xB2\xB2  INPUT-14 TO ORDER NOW \xB2";
								cout<<endl;
					    	    cout<<endl<<"________CAR #2 KIA SPORTAGE__________________________________________________________________________________________";
					    		cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 16\t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 CVT ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 K I A   \t\t\xB2\xB2  FUEL TYPE        \xB2 DIESEL ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 Sportage-2022 \t\t\xB2\xB2  ENGINE           \xB2 2982cc ";
								cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 173         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 8-11  ";
								cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 7,250,000PKR\t\t\xB2\xB2  INPUT-16 TO ORDER NOW \xB2";
								cout<<endl;
								cout<<endl<<"\t\t\t\t\t--------------------------------";
		   		    			cout<<endl<<"\t\t\t\t\tINPUT DESIRED CAR SERIAL N0:   |";
		            			cout<<endl<<"\t\t\t\t\tYOUR INPUT IS =                ";
		            			getline(cin,optionCars);
						if (optionCars == "14")
						{
						system("cls");
						orderdcar ="\n\xB2\xB2 H O N D A  B R - V _____________________________________\
					 \n SERIAL NUMBER     \xB2 14   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 CVT\n CAR MANUFACTURER  \xB2 H O N D A       \xB2\xB2 FUEL TYPE         \xB2 PETROL \n CAR MODEL         \xB2 BR-V            \xB2\xB2 ENGINE            \xB2 1497cc\n HORSE POWER       \xB2 119             \xB2\xB2 PRICE             \xB2 4,939,000PKR \n MILAGE KM/LETER   \xB2 11-15  \n";
						cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		            cout << "          x       WS  M O T O R S           x" << endl;
        	            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		            cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout << "          x       F R O M  MAIN MEN         x" << endl;
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							goto menu;

							return 0;
						}
						if (optionCars == "16")
						{
							system("cls");
							orderdcar ="\n\xB2\xB2 K I A  S P O R T A G E _____________________________________\
					 \n SERIAL NUMBER     \xB2 16   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 CVT\n CAR MANUFACTURER  \xB2 K I A           \xB2\xB2 FUEL TYPE         \xB2 DIESEL \n CAR MODEL         \xB2 SPORTAGE        \xB2\xB2 ENGINE            \xB2 2982cc\n HORSE POWER       \xB2 173             \xB2\xB2 PRICE             \xB2 7,250,000PKR \n MILAGE KM/LETER   \xB2 8-11  \n";
							cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       			            cout << "          x       WS  M O T O R S           x" << endl;
    	    	            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
	       		            cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
				            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			    	        cout << "          x       F R O M  MAIN MEN         x" << endl;
			        	    cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            	cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							goto menu;

							return 0;
						}
						else
						{
							cout<<"invalid_input";
							goto menu;
							return 0;
						}
						return 0;	
							  }
						    	if ( optionSubMenu == "3")
		      				{
		      				    system("CLS");
				    			cout<<endl<<"________CAR #1 HONDA CITY____________________________________________________________________________________________";
		    					cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 30\t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 AUTOMATIC ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 H O N D A \t\t\xB2\xB2  FUEL TYPE        \xB2 PETROL ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 CITY 1.5L  \t\t\xB2\xB2  ENGINE           \xB2 1497cc ";
								cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 97         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 12-18  ";
								cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 44,39,000PKR\t\t\xB2\xB2  INPUT-30 TO ORDER NOW \xB2";
								cout<<endl;
		    					cout<<endl<<"________CAR #2 TOYOTA COROLLA________________________________________________________________________________________";
		    					cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 33\t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 AUTOMATIC ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 TOYOTA  \t\t\xB2\xB2  FUEL TYPE        \xB2 PETROL ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 COROLLA    \t\t\xB2\xB2  ENGINE           \xB2 1800cc ";
								cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 139         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 10-16  ";
								cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 56,20,000PKR\t\t\xB2\xB2  INPUT-33 TO ORDER NOW \xB2";
								cout<<endl;
								cout<<endl<<"\t\t\t\t\t--------------------------------";
		   		    			cout<<endl<<"\t\t\t\t\tINPUT DESIRED CAR SERIAL N0:   |";
		            			cout<<endl<<"\t\t\t\t\tYOUR INPUT IS =                ";
		            			getline(cin,optionCars);						
								if (optionCars == "30")
						{
						system("cls");
						orderdcar ="\n\xB2\xB2 H O N D A  C I T Y _____________________________________\
					 \n SERIAL NUMBER     \xB2 30   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 CVT\n CAR MANUFACTURER  \xB2 H O N D A       \xB2\xB2 FUEL TYPE         \xB2 PETROL \n CAR MODEL         \xB2 CITY 1.5L       \xB2\xB2 ENGINE            \xB2 1497cc\n HORSE POWER       \xB2 97              \xB2\xB2 PRICE             \xB2 44,39,000PKR \n MILAGE KM/LETER   \xB2 12-18  \n";
						cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		            cout << "          x       WS  M O T O R S           x" << endl;
        	            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		            cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout << "          x       F R O M  MAIN MEN         x" << endl;
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							goto menu;

							return 0;
						}
						if (optionCars == "33")
						{
							system("cls");
								orderdcar ="\n\xB2\xB2 TOYOTA COROLLA _____________________________________\
					 \n SERIAL NUMBER     \xB2 33   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 AUTOMATIC\n CAR MANUFACTURER  \xB2 TOYOTA          \xB2\xB2 FUEL TYPE         \xB2 PETROL \n CAR MODEL         \xB2 COROLLA         \xB2\xB2 ENGINE            \xB2 1497cc\n HORSE POWER       \xB2 139             \xB2\xB2 PRICE             \xB2 56,20,000PKR \n MILAGE KM/LETER   \xB2 10-16  \n";
							cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       			            cout << "          x       WS  M O T O R S           x" << endl;
    	    	            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
	       		            cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
				            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			    	        cout << "          x       F R O M  MAIN MEN         x" << endl;
			        	    cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            	cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							goto menu;

							return 0;
						}
						else
						{
							cout<<"invalid_input";
							goto menu;
							return 0;
						}
						return 0;		}
						if ( optionSubMenu == "4")
		      				{
		      				    system("CLS");
				    			cout<<endl<<"________CAR #1 AUDI E-TRON___________________________________________________________________________________________";
		    					cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 121\t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 AUTOMATIC  ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 A U D I   \t\t\xB2\xB2  FUEL TYPE        \xB2 ELECTRIC ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 E-TRON      \t\t\xB2\xB2  VARIENT          \xB2 55 Quattro ";
								cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 402         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 300-436  ";
								cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 38,000,000PKR\t\t\xB2\xB2  INPUT-121 TO ORDER NOW \xB2";
								cout<<endl;
		    					cout<<endl<<"________CAR #2 AUDI E-TRON GT________________________________________________________________________________________";
		    					cout<<endl<<endl<<" \xB2\xB2 SERIAL NUMBER     \xB2 152\t\t\t\xB2\xB2 TRANSMISSION TYPE \xB2 AUTOMATIC ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MANUFACTURER  \xB2 A U D I \t\t\xB2\xB2  FUEL TYPE        \xB2 ELECTRIC ";
								cout<<endl<<endl<<" \xB2\xB2 CAR MODEL         \xB2 E-TRON GT RS \t\t\xB2\xB2  VARIENT          \xB2 441 Kw  ";
								cout<<endl<<endl<<" \xB2\xB2 HORSE POWER       \xB2 637         \t\t\xB2\xB2  MILAGE KM/LETER  \xB2 283-425  ";
								cout<<endl<<endl<<" \xB2\xB2 PRICE             \xB2 48,500,000PKR\t\t\xB2\xB2  INPUT-152 TO ORDER NOW \xB2";
								cout<<endl;
								cout<<endl<<"\t\t\t\t\t--------------------------------";
		   		    			cout<<endl<<"\t\t\t\t\tINPUT DESIRED CAR SERIAL N0:   |";
		            			cout<<endl<<"\t\t\t\t\tYOUR INPUT IS =                ";
		            			getline(cin,optionCars);						
								if (optionCars == "121")
						{
						system("cls");
						orderdcar ="\n\xB2\xB2 AUDI E-TRON _____________________________________\
					 \n SERIAL NUMBER     \xB2 121   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 CVT\n CAR MANUFACTURER  \xB2 A U D I         \xB2\xB2 FUEL TYPE         \xB2 ELECTRIC \n CAR MODEL         \xB2 E-TRON          \xB2\xB2 VARIENT           \xB2 55 Quattro\n HORSE POWER       \xB2 402             \xB2\xB2 PRICE             \xB2 38,000,000PKR \n MILAGE KM/LETER   \xB2 300-436  \n";
       		            cout << "          x       WS  M O T O R S           x" << endl;
        	            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		            cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout << "          x       F R O M  MAIN MEN         x" << endl;
			            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							goto menu;

							return 0;
						}
						if (optionCars == "152")
						{
							system("cls");
							orderdcar ="\n\xB2\xB2 AUDI E-TRON GT _____________________________________\
					 \n SERIAL NUMBER     \xB2 152   \t     \xB2\xB2 TRANSMISSION TYPE \xB2 CVT\n CAR MANUFACTURER  \xB2 A U D I         \xB2\xB2 FUEL TYPE         \xB2 ELECTRIC \n CAR MODEL         \xB2 E-TRON GT RS    \xB2\xB2 VARIENT           \xB2 441 Kw\n HORSE POWER       \xB2 637             \xB2\xB2 PRICE             \xB2 48,500,000PKR \n MILAGE KM/LETER   \xB2 300-436  \n";
							cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       			            cout << "          x       WS  M O T O R S           x" << endl;
    	    	            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
	       		            cout << "          x   ORDER PLACED, CHECK RECEIPT   x" << endl;	       		
				            cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			    	        cout << "          x       F R O M  MAIN MEN         x" << endl;
			        	    cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			            	cout<<"\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

							system("pause");
							goto menu;

							return 0;
						}
						else
						{
							cout<<"invalid_input";
							goto menu;
							return 0;
						}
						return 0;	
							}
						
					    }
					    

	if (option == "2")
			{
			system("cls");
			cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		cout << "\t\t\t\t          x       WS  M O T O R S           x" << endl;
        	cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		cout << "\t\t\t\t          x   Coming Soon Custom Cars       x" << endl;	       		
			cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			cout<<endl<<"\t\t\t\t             Press any key For Menu      " << endl <<"\t\t\t\t\t     ";
			system("pause");
			goto menu;
        	return 0;
            }
    	if (option == "3")
			{
			system("cls");
			cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		cout << "          x       WS  M O T O R S           x" << endl;
        	cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
       		cout << "          x        CURRENT ORDERS           x" << endl;	       		
			cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			cout << "          x        R E C E I P T            x" << endl;	       		
			cout << "          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			cout << orderdcar;
			cout<<endl<<"             Press any key For Menu      " << endl;
			system("pause");
			goto menu;
        	return 0;
            }        
		if (option == "5")
		    {
     		system("color 3");
     		system("cls");
 			cout<<"\n\n";
			cout<<"[][][] [][][] [][][] [][][] [][][]    []    []    []\n";
			cout<<"[]  [] []  [] []  [] []     []  []  []  []  [][][][]\n";
			cout<<"[][][] [][][] []  [] [] []  [][][] [][][][] [] [] []\n";
			cout<<"[]     [] []  []  [] []  [] [] []  []    [] []    []\n";
			cout<<"[]     []  [] [][][] [][][] []  [] []    [] []    []\n\n";
			cout<<"[][][] [][][]     [][][] []     [][][] [][][] [][][] []   [] [][][]\n";
			cout<<"  []   []         []  [] []     []  [] []       []   []]  [] []\n";
			cout<<"  []   [][][]     []     []     []  [] [][][]   []   [][] [] [] []\n";
			cout<<"  []       []     []  [] []     []  []     []   []   [] [][] []  []\n";
			cout<<"[][][] [][][]     [][][] [][][] [][][] [][][] [][][] []  [[] [][][]\n\n";
			cout<<"[][][]  []     [] [][][]   [] [] []\n";
			cout<<"[]   []  []  []   []       [] [] []\n";
			cout<<"[]  []     []     [][][]   [] [] []\n";
			cout<<"[]   []    []     []\n";
			cout<<"[][][]     []     [][][]   [] [] []\n\n";

 			system("pause");
 			return 0;

  			}
  			if (option =="4" )
  			{
  			system("CLS");
  			cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
            cout << "\t\t\t\t          x       WS  M O T O R S           x" << endl;
            cout << "\t\t\t\t          wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww" << endl;
			cout<<endl<<"\t\t\t\t                  Welcome to W&S Motors  " << endl;
			cout<<endl<<"\t\t\t\t            We are International Car Dealers   " << endl;
		    cout<<endl<<"\t\t\t\t            Operating in Larkana, Pakistan     " << endl;
		    cout<<endl<<"\t\t\t\t                Our Client's Interests         " << endl;
			cout<<endl<<"\t\t\t\t                   Always Come First           " << endl; 
			cout<<endl<<"\t\t\t\t                Press any key For Menu         " << endl;
		    system("pause");
	    	goto menu;
         	return 0;
            }
	 		else;
    		{
			system("cls");
			cout<<"\n\n\n\n\n\n";
			cout<<"\t\t\t  [][][]   [][][]   [][][]   [][][]   [][][]  \n";
			cout<<"\t\t\t  []       []  []   []  []   []  []   []  []  \n";
			cout<<"\t\t\t  [][][]   [][][]   [][][]   []  []   [][][]  \n";
			cout<<"\t\t\t  []       [] []    [] []    []  []   [] []  \n";
			cout<<"\t\t\t  [][][]   []  []   []  []   [][][]   []  []  \n\n";

			cout<<"\t\t\tPlease input a valid number.\n";
			cout<<"\t\t\tPress any key to go back to the Menu.\n\n\n\n\n\n\n";

		system("pause");
		system("cls");
		goto menu;
        system("pause");
            }


}


