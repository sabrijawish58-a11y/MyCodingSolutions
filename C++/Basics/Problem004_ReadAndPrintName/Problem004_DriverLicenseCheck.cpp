 #include <iostream> 
 
using namespace std; 
 
struct stInfo 
{ 
 short Age; 
 bool HasDrivingLicense; 
}; 
 
stInfo ReadInfo() 
{ 
 stInfo Info; 
 
 cout << "Pleas enter Your Age ?" << endl; 
 cin >> Info.Age; 
 
 cout << "Do you has driver License?" << endl; 
 cin >> Info.HasDrivingLicense; 
 
 return Info; 
} 
 
bool IsAccepted(stInfo Info) 
{ 
 return (Info.Age > 21 && Info.HasDrivingLicense); 
} 
 
void PrintResult(stInfo Info) 
{ 
 if (IsAccepted(Info)) 
  cout << "\n Hired \n"; 
 else 
  cout << "\n Rejected \n"; 
} 
 
int main() 
{ 
 PrintResult(ReadInfo());
}
 
