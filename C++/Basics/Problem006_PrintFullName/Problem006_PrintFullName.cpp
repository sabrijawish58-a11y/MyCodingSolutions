#include <iostream> 
using namespace std; 
 
struct stInfo 
{ 
 string FirstName; 
 string LastName; 
}; 
 
stInfo ReadInfo() 
{ 
 stInfo Info; 
 
 cout << "Pleas enter Your First Name ?" << endl; 
 cin >> Info.FirstName; 
 
 cout << "Pleas enter Your Last Name ?" << endl; 
 cin >> Info.LastName; 
 
 return Info; 
} 

string GetFullName(stInfo Info , bool Reversed) 
{ 
 string FullName = ""; 
 
 if(Reversed) 
  FullName = Info.LastName + " " + Info.FirstName; 
 
 else 
  FullName = Info.FirstName + " " + Info.LastName; 
 
 return FullName; 
} 
 
// عيطتست ءاطعإ رمأ ةعباطلل  لثم  سيلو ةشاشلل 
void PrintFullName(string FullName) 
{ 
 cout << "\n Your full name is : "  << FullName << endl; 
} 
 
int main() 
{ 
 PrintFullName(GetFullName(ReadInfo() , false)); 
} 
 
 
