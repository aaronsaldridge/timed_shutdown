#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
  int hours=0,minutes=0,seconds=0,totalSeconds=0;
  bool inside=true;

  cout<<"Timed Shutdown"<<endl;
  cout<<"Aldridge - 2023.10.18"<<endl;
  cout<<"aldridge.aaron@gmail.com"<<endl;

  cout<<endl;
  cout<<"Hours: ";
  cin>>hours;
  cout<<"Minutes: ";
  cin>>minutes;
  cout<<"Seconds: ";
  cin>>seconds;

  system("CLS");

  totalSeconds=seconds;
  totalSeconds+=(minutes*60);
  totalSeconds+=(hours*60)*60;

  while (inside)
  {
    cout<<"Hours:   "<<setfill('0')<<setw(2)<<hours<<"                  Aaron Aldridge"<<endl;
    cout<<"Minutes: "<<setfill('0')<<setw(2)<<minutes<<"                  aldridge.aaron@gmail.com"<<endl;
    cout<<"Seconds: "<<setfill('0')<<setw(2)<<seconds<<"\n\n\n\n\n\n\n\n";
    cout<<"                    Time remaining until shutdown: "<<setfill('0')<<setw(2)<<hours<<":"<<setfill('0')<<setw(2)<<minutes<<":"<<setfill('0')<<setw(2)<<seconds<<endl;
    cout<<endl;
    cout<<"                    Close to cancel."<<endl;
    cout<<"\n\n\n\n\n\n\n\n\n\n";
    cout<<"Total Seconds: "<<totalSeconds<<endl;
    Sleep(1000);
    system("ClS");
    
    totalSeconds--;
    
    if (seconds>0) {
      seconds--;
    }
    else if (seconds==0&&minutes>0) {
      minutes--;
      seconds+=59;
    }
    else if (seconds==0&&minutes==0&&hours>0) {
      hours--;
      minutes+=59;
      seconds+=59;
    }
    else {
      inside=false;
    }
  }

  cout<<endl;
  cout<<"\n\n\n\n\n\n\n\n\n\n                    Bye."<<endl;
  Sleep(2000);
  system("shutdown /s /f /t 000");    //why 000?
  return 0;
}


