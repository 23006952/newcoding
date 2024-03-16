#include <iostream>

using namespace std;
double calculateMarkupPercentage(double merchandise_cost,double total_salary,double yearly_rent,double electricity_cost,double desired_profit){
double total_expenses=merchandise_cost+total_salary+yearly_rent+electricity_cost;
double total_income_needed=total_expenses/(1-desired_profit);
double markup_percentage=(total_income_needed-merchandise_cost)/merchandise_cost*100;
return markup_percentage;
}

int main()
{
    double merchandise_cost,total_salary,yearly_rent,electricity_cost ;
    double desired_profit=0.10;

    cout<<"Enter the total cost of the merchandise:";
    cin>>merchandise_cost;
    cout<<"Enter the salary of employees(including yours):";
    cin>>total_salary;
    cout<<"Enter the yearly rent:";
    cin>>yearly_rent;
    cout<<"Enter the estimated electricity cost:";
    cin>>electricity_cost;
    double markup_percentage=calculateMarkupPercentage(merchandise_cost,total_salary,yearly_rent,electricity_cost,desired_profit);
    cout<<markup_percentage;


    return 0;
}
