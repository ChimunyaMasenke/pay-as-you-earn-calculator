//
//  main.cpp
//  PayeCalculater
//
//  Created by Nchimunya Masenke on 25/09/2025.
//

#include <iostream>
using namespace std;

double taxCalculations(double);
double healthEnsurance(double);
double napsa(double);

int main(){
    double salary = 0;
    cout<<"Enter salary: ";
    cin>>salary;
    double taxAmount = taxCalculations(salary);
    double Ensurance = healthEnsurance(salary);
    double napsaContributions = napsa(salary);
    double netSalary = 0;
    netSalary = netSalary - (taxAmount + Ensurance + napsaContributions);
    
    cout<<"Gross salary: " <<salary <<endl <<"Napsa: " <<napsaContributions <<endl <<"Ensurance: " <<Ensurance <<endl <<"Tax amount: " <<taxAmount <<endl;
    return 0;
}
double healthEnsurance(double grossSalary){
    double ensurance = grossSalary * 0.01;
    return ensurance;
}
double napsa(double grossSalary){
    double napsaContributions = grossSalary * 0.05;
    return napsaContributions;
}
double taxCalculations(double grossSalary){
    double taxTotal = 0, tax = 0,tax2 = 0, tax3 = 0, salary = 0, salary2 = 0, salary3 = 0;
    int counter = 3;
    do{
        if(true){
            salary = grossSalary - 5100;
        }
        if((grossSalary > 5100 && grossSalary <= 7100) && salary >= 2000){
            salary2 = salary - 2000;
            tax = salary2 * 0.2;
        }
        if((grossSalary > 7100 && grossSalary <= 9200) && salary >= 2100){
            salary3 = salary2 - 2100;
            tax2 = salary3 * 0.3;
        }
        if(grossSalary > 9200){
            tax3 = salary3 * 0.37;
        }
        
        counter--;
    }while(counter > 0);
    taxTotal = tax + tax2 + tax3;
    return taxTotal;
}
