#iinclude <iostream.h>
using namespace std;
class human {
private:
 string name;
 int rollno;
public:
 void getdetails() {
 cout<<"enter the name and roll no"<<endl;
 cin>>name>>rollno;
 }
 void displaydetails(){
 cout<<"the name is "<<name<<endl;
 cout<<"rollno is"<<roll no;
 }
 int main() {
 human h;
 h.getdetails();
 h.displaydetails();
 } 
