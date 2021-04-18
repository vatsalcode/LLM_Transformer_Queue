#include<iostream>
#include<cmath>
using namespace std;

class elec_bill
{
	char sno[10];
	float pmr , cmr , elec_charge;
	int unit_cons;
	
	public:
		void set_data()
		{
			cout<<"Enter thr service number:"<<endl;
	        cin>>sno;
	        cout<<"Enter the previous meter reading:"<<endl;
	        cin>>pmr;
	        cout<<"Enter the current meter reading:"<<endl;
	        cin>>cmr;
		}
		
		void readings()
		{
			set_data();
			
			unit_cons = cmr - pmr;
	        elec_charge = unit_cons * 7.50;
	        cout<<"\t\tElectricity Bill"<<endl;
	        cout<<"\t\t----------------"<<endl;
	        cout<<"Service number:\t"<<sno<<endl;
	        cout<<"Previous meter reading:"<<pmr<<endl;
	        cout<<"Current meter reading:"<<cmr<<endl;
	        cout<<"Unit Consumed:\t"<<unit_cons<<endl;
        	cout<<"Electricity charge in Rs.:"<<elec_charge<<endl;
			
		}
	
};
int main()
{
	elec_bill b;
	b.readings();
	
	return 0;
}
