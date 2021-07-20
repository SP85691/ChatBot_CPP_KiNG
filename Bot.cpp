#include<iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <time.h>
#include<unistd.h>
#include<windows.h>
#include<mmsystem.h>

using namespace std;

int wel_wish()
{
	cout << "\n\n\t\t\t\t\t--------------------------"<<endl;
	cout << "\t\t\t\t\t---WELCOME TO BOT WORLD---"<<endl;
	cout << "\t\t\t\t\t--------------------------"<<endl;
	
	cout << "\t\t\t\t\tHI, I'M Zero Two!"<<endl;
	cout << "\t\t\t\t\tYour Personal Assisstent!"<<endl;
	cout << "\n\t\t\t\t\t> ";
	
	//****************************************
	//Say Hi!**
	//****************************************
	
	char reply[20];
	cin >> gets(reply);
	if(strcmp(reply,"Hi") || strcmp(reply,"Hello") ==1)
	{
		cout<<"\n\t\t\t\t\t"<< reply << " Sir, What I Can Do For You?"<<endl;
		cout<<"\t\t\t\t\t_________________________________"<<endl;
	}
	
	return 0;	
}

int work_to_do()
{
	
}

int current_time()
{
	//GET SOME FUCTIONS TO GET THE ACTUAL TIME ...#
	time_t now;
    struct tm nowlocal;
    now = time(NULL); //Get the time from the OS...
    nowlocal = *localtime(&now);
	
	//Putting into the Looping Structure By which It can be running continously...
		while(true)
    	{
        	system("cls");
			cout<<"Time: "<<nowlocal.tm_hour<<":"<<nowlocal.tm_min<<":"<<nowlocal.tm_sec<<endl;
        	nowlocal.tm_sec++;
        	if(nowlocal.tm_sec==60)
        	{
      		  	nowlocal.tm_min++;
  		      	nowlocal.tm_sec=0;
   		     	if(nowlocal.tm_min==60)
   		     	{
  		      		nowlocal.tm_hour++;
   		     		nowlocal.tm_min=0;
   		     		if(nowlocal.tm_hour==24)
   		     		{
   		     			nowlocal.tm_hour=0;
					}
				}
			}
			sleep(1);
        }

}//Dyanamic Time Ended Here!

//Set Date And Time
int date_time()
{
	int input; 
	
	time_t now;
    struct tm nowlocal;
    now = time(NULL); //Get the time from the OS...
    nowlocal = *localtime(&now);
	cout<<"\n\n\n\t\t\t\t\t--------------------------------"<<endl;
	cout<<"\t\t\t\t\tDay: "<<nowlocal.tm_yday<<endl;
	cout<<"\t\t\t\t\tToday is: "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900<<endl;
	cout<<"\t\t\t\t\tTime: "<<nowlocal.tm_hour<<":"<<nowlocal.tm_min<<":"<<nowlocal.tm_sec<<endl;
	cout<<"\t\t\t\t\t--------------------------------"<<endl;
	
	cout<<"\n\t\t\t\t\t----------------------------"<<endl;
	cout<<"\t\t\t\t\tMenu [1]"<<endl;
	cout<<"\t\t\t\t\tExit [2]"<<endl;
	cin >> input;
	    
	if(input == 1)
	{
		cout << "\n\n\n\t\t\t\t\t-----------------------------------"<<endl;
		cout << "\t\t\t\t\tYou're Shifting on Menu Page Now..."<<endl;
		cout << "\t\t\t\t\t-----------------------------------"<<endl;
		sleep(1);
		cout << wel_wish();
	}
}//Date and Time Fuction Ended Here!

int intro()
{
	char name[128];
	
	cout <<"\n\t\t\t\t\t>";
	gets(name);
	cout <<"\t\t\t\t\tHello "<<name<<endl;
	
}

int Bot_Work()
{
	int num;
	cout<<"Wait 2 sec.";	
	cout << "\n\n\t\t\t\t\t--------------------------"<<endl;
	cout << "\t\t\t\t\t---WELCOME TO BOT WORLD---"<<endl;
	cout << "\t\t\t\t\t--------------------------"<<endl;
	
	//List
	cout << "\n\n";
	cout<<"\t\t\t\t\t_________________________________"<<endl;
	while(1)
	{
		system("color 0C");
		sleep(2);
		cout << "\t\t\t\t\tA. Open Application"<<endl;
		cout << "\t\t\t\t\tB. Open Browser"<<endl;
		cout << "\t\t\t\t\tC. Open Game"<<endl;
		cout << "\t\t\t\t\tD. Play Music"<<endl;
		cout << "\t\t\t\t\tE. Calculations"<<endl;
		break;
	}
	cout<<"\t\t\t\t\t_________________________________"<<endl;
	again:
	cout << "\n\n\t\t\t\t\t1. HOME"<<endl;
	cout << "\t\t\t\t\t2. EXIT"<<endl;
	cout << "\t\t\t\t\t> ";
	cin >> num;
	
	if(num==1)
	{
		system("cls");
		cout << "\n\n\t\t\t\t\tHello Sir Now You're At Home"<<endl;
	}
	
	else if(num ==2)
	{
		system("cls");
		cout << "\n\n\t\t\t\t\tHello Sir Now You're Exited"<<endl;
	}
	
	else
	{
		system("cls");
		goto again;
	}
}

int app_vlc()
{
	char app[128];
	Try: 
		system("cls");
		system("color 0A");
		cout << "\n\n\t\t\t\t\t> ";
		cin >> gets(app);
	

		if(strcmp(app,"vlc")==0) 
		{
			cout << "\t\t\t\t\tOpening Vlc Media Player"<<endl;
			sleep(1);
			ShellExecute(0,"open","C:\\Program Files\\VideoLAN\\VLC\\vlc.exe",NULL,NULL,SW_NORMAL);
			sleep(2);
		//
		}
		else if(strcmp(app,"exit")==0)
		{
			system("cls");
			cout << "\t\t\t\t\tExiting"<<endl;
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\OneDrive\\Documents\\C Programs\\VS CODE C\\C++\\CHATBOT\\Bot.cpp",NULL,NULL,SW_NORMAL);
		}
		else
		{
			cout << "\t\t\t\t\t---------------------"<<endl;
			cout << "\t\t\t\t\tTry Again sir"<<endl;
			cout << "\t\t\t\t\t---------------------"<<endl;
			sleep(1);
			system("cls");
			goto Try;	
		}
		
}

int app_chrome()
{
	char app[128];
	Try: 
		system("cls");
		system("color 0C");
		cout << "\n\n\t\t\t\t\t> ";
		cin >> gets(app);
	

		if(strcmp(app,"chrome")==0) 
		{
			cout << "\t\t\t\t\tOpening Google Chrome"<<endl;
			sleep(1);
			ShellExecute(0,"open","C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe",NULL,NULL,SW_NORMAL);
			sleep(2);
		//
		}
		else if(strcmp(app,"exit")==0)
		{
			system("cls");
			cout << "\t\t\t\t\tExiting"<<endl;
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\OneDrive\\Documents\\C Programs\\VS CODE C\\C++\\CHATBOT\\Bot.cpp",NULL,NULL,SW_NORMAL);
		}
		else
		{
			cout << "\t\t\t\t\t---------------------"<<endl;
			cout << "\t\t\t\t\tTry Again sir"<<endl;
			cout << "\t\t\t\t\t---------------------"<<endl;
			sleep(1);
			system("cls");
			goto Try;	
		}
}

int app_whatsapp()
{
	char app[128];
	Try: 
		system("cls");
		system("color 0C");
		cout << "\n\n\t\t\t\t\t> ";
		cin >> gets(app);
	

		if((strcmp(app,"WA") && strcmp(app,"whatsapp"))==0) 
		{
			cout << "\t\t\t\t\tOpening Whatsapp"<<endl;
			sleep(1);
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\AppData\\Local\\WhatsApp\\WhatsApp.exe",NULL,NULL,SW_NORMAL);
			sleep(2);
		//
		}
		else if(strcmp(app,"exit")==0)
		{
			system("cls");
			cout << "\t\t\t\t\tExiting"<<endl;
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\OneDrive\\Documents\\C Programs\\VS CODE C\\C++\\CHATBOT\\Bot.cpp",NULL,NULL,SW_NORMAL);
		}
		else
		{
			cout << "\t\t\t\t\t---------------------"<<endl;
			cout << "\t\t\t\t\tTry Again sir"<<endl;
			cout << "\t\t\t\t\t---------------------"<<endl;
			sleep(1);
			system("cls");
			goto Try;	
		}
}

int app_discord()
{
	char app[128];
	Try: 
		system("cls");
		system("color 0C");
		cout << "\n\n\t\t\t\t\t> ";
		cin >> gets(app);
	

		if((strcmp(app,"Discord") && strcmp(app,"discord"))==0) 
		{
			cout << "\t\t\t\t\tOpening Discord"<<endl;
			sleep(1);
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\AppData\\Local\\Discord\\app-1.0.9002\\Discord.exe",NULL,NULL,SW_NORMAL);
			sleep(2);
		//
		}
		else if(strcmp(app,"exit")==0)
		{
			system("cls");
			cout << "\t\t\t\t\tExiting"<<endl;
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\OneDrive\\Documents\\C Programs\\VS CODE C\\C++\\CHATBOT\\Bot.cpp",NULL,NULL,SW_NORMAL);
		}
		else
		{
			cout << "\t\t\t\t\t---------------------"<<endl;
			cout << "\t\t\t\t\tTry Again sir"<<endl;
			cout << "\t\t\t\t\t---------------------"<<endl;
			sleep(1);
			system("cls");
			goto Try;	
		}
}

int app_gtav()
{
		char app[128];
	Try: 
		system("cls");
		system("color 0C");
		cout << "\n\n\t\t\t\t\t> ";
		cin >> gets(app);
	

		if(strcmp(app,"GTAV")==1) 
		{
			cout << "\t\t\t\t\tOpening Grand Theft Auto V"<<endl;
			sleep(1);
			ShellExecute(0,"open","C:\\Games\\GTAV\\PlayGTAV.exe",NULL,NULL,SW_NORMAL);
			sleep(2);
		//
		}
		else if(strcmp(app,"exit")==0)
		{
			system("cls");
			cout << "\t\t\t\t\tExiting"<<endl;
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\OneDrive\\Documents\\C Programs\\VS CODE C\\C++\\CHATBOT\\Bot.exe",NULL,NULL,SW_NORMAL);
		}
		else
		{
			cout << "\t\t\t\t\t---------------------"<<endl;
			cout << "\t\t\t\t\tTry Again sir"<<endl;
			cout << "\t\t\t\t\t---------------------"<<endl;
			sleep(1);
			system("cls");
			goto Try;	
		}
}

int app_code()
{
	char app[128];
	Try: 
		system("cls");
		system("color 0C");
		cout << "\n\n\t\t\t\t\t> ";
		cin >> gets(app);
	

		if(strcmp(app,".code") && strcmp(app,"vscode")==0) 
		{
			cout << "\t\t\t\t\tOpening Visual Studio Code"<<endl;
			sleep(1);
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe",NULL,NULL,SW_NORMAL);
			sleep(2);
		//
		}
		else if(strcmp(app,"exit")==0)
		{
			system("cls");
			cout << "\t\t\t\t\tExiting"<<endl;
			ShellExecute(0,"open","C:\\Users\\Surya Pratap\\OneDrive\\Documents\\C Programs\\VS CODE C\\C++\\CHATBOT\\Bot.exe",NULL,NULL,SW_NORMAL);
		}
		else
		{
			cout << "\t\t\t\t\t---------------------"<<endl;
			cout << "\t\t\t\t\tTry Again sir"<<endl;
			cout << "\t\t\t\t\t---------------------"<<endl;
			sleep(1);
			system("cls");
			goto Try;	
		}	
}

int main()
{
	char app[128];
	//GET SOME FUCTIONS TO GET THE ACTUAL TIME ...#
	time_t now;
    struct tm nowlocal;
    now = time(NULL); //Get the time from the OS...
    nowlocal = *localtime(&now);
		
	cout << "\n\n\t\t\t\t\t--------------------------"<<endl;
	cout << "\t\t\t\t\t---WELCOME TO BOT WORLD---"<<endl;
	cout << "\t\t\t\t\t--------------------------"<<endl;
	
	cout << "\t\t\t\t\tHI, I'M Zero Two!"<<endl;
	cout << "\t\t\t\t\tYour Personal Assisstent!"<<endl;
	if(nowlocal.tm_hour<12 && nowlocal.tm_hour>=0)
    	{	
    		cout << "\t\t\t\t\tGood Morning Sir"<<endl;
    	}
		else if(nowlocal.tm_hour>=12 && nowlocal.tm_hour<=16)
		{
			cout << "\t\t\t\t\tGood AfterNoon Sir"<<endl;
		}
		else if(nowlocal.tm_hour>16 && nowlocal.tm_hour<=20)
		{
			cout << "\t\t\t\t\tGood Evening Sir"<<endl;
		}
		else if(nowlocal.tm_hour>20 && nowlocal.tm_hour==24)
		{
			cout << "\t\t\t\t\tGood Night Sir"<<endl;
		}
	cout << "\n\t\t\t\t\t> ";
	
	//****************************************
	//Say Hi!**
	//****************************************
	
	char reply[20];
	gets(reply);
	if(strcmp(reply,"Hi") || strcmp(reply,"Hello") ==1)
	{
		if(nowlocal.tm_hour<12 && nowlocal.tm_hour>=0)
    	{	
    		cout<<"\n\t\t\t\t\t"<< "Good Morning" << " Sir, What I Can Do For You?"<<endl;
			cout<<"\t\t\t\t\t_________________________________"<<endl;
    	}
		else if(nowlocal.tm_hour>=12 && nowlocal.tm_hour<=16)
		{
			cout<<"\n\t\t\t\t\t"<< "Good AfterNoon" << " Sir, What I Can Do For You?"<<endl;
			cout<<"\t\t\t\t\t_________________________________"<<endl;
		}
		else if(nowlocal.tm_hour>16 && nowlocal.tm_hour<=20)
		{
			cout<<"\n\t\t\t\t\t"<< "Good Evening" << " Sir, What I Can Do For You?"<<endl;
			cout<<"\t\t\t\t\t_________________________________"<<endl;
		}
		else if(nowlocal.tm_hour>20 && nowlocal.tm_hour==24)
		{
			cout<<"\n\t\t\t\t\t"<< "Good Night" << " Sir, What I Can Do For You?"<<endl;
			cout<<"\t\t\t\t\t_________________________________"<<endl;
		}
		
	}
	
	//****************************************
	//What The Bot Can Do!!!
	//****************************************
	again:
	int command;
	cout << "\n\t\t\t\t\t0. Go To Menu Again!"<<endl;
	cout << "\t\t\t\t\t1. Get List of Works!"<<endl;
	cout << "\t\t\t\t\t2. Want Some Help Command!"<<endl;
	cout << "\t\t\t\t\t3. Want to See Date, Time & Day!"<<endl;
	cout << "\t\t\t\t\t4. Open Applications!"<<endl;
	cout << "\t\t\t\t\t> ";
	cin >> command;
	cout<<"\t\t\t\t\t_________________________________"<<endl;
	if(command==1)
	{
		system("cls");
		cout<<Bot_Work();
	}
	else if(command==2)
	{
		char name[120];
		gets(name);
		cout << intro();
	}
	else if(command==3)
	{
		system("cls");
		cout << date_time();
	}
	
	else if(command==4)
	{
		//setting up the var* data handle//
		sleep(2);
		system("cls");
		char choice[200];
		
		//Detailized The function
		cout << "\n\n\n\n\t\t\t\t\t"<<endl;
		cout << "\t\t\t\t\tWhat Type Of APP You want to Open"<<endl;
		cout << "\t\t\t\t\tA. VLC Media player "<<endl;
		cout << "\t\t\t\t\tB. Chrome"<<endl;
		cout << "\t\t\t\t\tC. Whatsapp"<<endl;
		cout << "\t\t\t\t\tD. Discord"<<endl;
		cout << "\t\t\t\t\tE. GTA V"<<endl;
		cout << "\t\t\t\t\tF. VS CODE"<<endl;
		cout << "\t\t\t\t\tG. MENU"<<endl;
		cout << "\t\t\t\t\tH. EXIT [0]"<<endl;
		cout << "\t\t\t\t\t> ";
		cin >> gets(choice);
		//Call The Function
		if(strcmp(choice,"A")==0)
		{
			system("cls");
			sleep(2);
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			cout<< "\t\t\t\t\tShifting You!"<<endl;
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			
			cout<< app_vlc();
		}
		
		else if(strcmp(choice,"B")==0)
		{
			system("cls");
			sleep(2);
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			cout<< "\t\t\t\t\tShifting You!"<<endl;
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			
			cout<< app_chrome();
		}
		
		else if(strcmp(choice,"C")==0)
		{
			system("cls");
			sleep(2);
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			cout<< "\t\t\t\t\tShifting You!"<<endl;
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			
			cout<< app_whatsapp();
		}
		
		else if(strcmp(choice,"D")==0)
		{
			system("cls");
			sleep(2);
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			cout<< "\t\t\t\t\tShifting You!"<<endl;
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			
			cout<< app_discord();
		}
		
		else if(strcmp(choice,"E")==0)
		{
			system("cls");
			sleep(2);
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			cout<< "\t\t\t\t\tShifting You!"<<endl;
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			
			cout<< app_gtav();
		}
		
		else if(strcmp(choice,"F")==0)
		{
			system("cls");
			sleep(2);
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			cout<< "\t\t\t\t\tShifting You!"<<endl;
			cout<< "\n\n\n\t\t\t\t\t----------------"<<endl;
			
			cout<< app_code();
		}
		
	}
	
	//******************************************
	//Start From The Start
	//******************************************
	else if(command == 0)
	{
		sleep(1);
		system("cls");
		cout << wel_wish();
	}
	else
	{
		goto again;
	}
	
	return 0;
}

