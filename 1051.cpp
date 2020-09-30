#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    float salary,taxes=0;
    cin>>salary;
    if(salary>4500){
        taxes+=(salary-4500)*0.28;
        taxes+=350;
    }else if(salary>=3000){
        taxes+=(salary-3000)*0.18;
        taxes+=80;
    }else if(salary>=2000){
        taxes+=(salary-2000)*0.08;
    }if(taxes){
        printf("R$ %.2f\n",taxes);
    }else{
        cout<<"Isento"<<endl;
    }
    return 0;
}
