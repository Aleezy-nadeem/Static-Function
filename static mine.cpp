#include<iostream>
using namespace std;

class students{
	
	private:
		string name;
		int sap;
		string phone;
		string date;
	 	static int count;
	 	
	 	
		public:
			students(): name("\0"), phone("\0"),date("\0") ,sap (0)
			{
				cout<<"\ndefault constructor"<<++count<<endl;
			}
			~students(){
				cout<<"\ndefault constructor"<<count--<<endl;
	
			}
	students(string name1, int sap1, string phone1, string date1)
				{
	    name=name1;
		sap=sap1;
		phone=phone1;
		date=date1;
	    cout<<name1<<endl;
	    cout<<sap<<endl;
	    cout<<phone1<<endl;
	    cout<<date1<<endl;
		cout<<"\nparametorized constructor 1 "<<++count<<endl;
					
					
				
				
				}
	students(string name2, string phone2, string date2, int sap2)
		{
				
		name=name2;
		sap=sap2;
		phone=phone2;
		date=date2;
	    cout<<name2<<endl;
		cout<<sap<<endl;
		cout<<phone2<<endl;
		cout<<date2<<endl;
		cout<<"\nparametorized constructor 2"<<count++<<endl;
					
				}
					
	
				void print()
				{
					cout<<"name "<<name<<endl;
				cout<<"sap "<<sap<<endl;
				cout<<"phone "<<phone<<endl;
					cout<<"date "<<date<<endl;
				}
					
};

int students::count=0;
int main()
{
	students s1;
	 s1.print();
	students s2("ALEEZA NADEEM", 48718, "0393795787","02/03/22" );
	s2.print();
	students s3;
	
	 students s4("ALEEZY", 48718, "03857864", "02/03/22");
	 s4.print();
	 
	
}
