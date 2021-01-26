//hospital management system
#include<iostream>
#include<string>

//creating structure for storing the details of the patients
struct Patient{
    std::string name;
    int room_number;
    std::string blood_group;
    int weight;
    int age;
    std::string disease;
    std::string phone_number;
    std::string date_of_admission;
    std::string remark;
};

int main(){
    int choice;
    std::cout<<"\nWelcome to X hospital\n";
    std::cout<<"\nWhat do you want to do?\n";
    std::cout<<"\n1.Enter the detail of the patients\n2.Get the detail of the patient";
    std::cout<<"\n\nEnter the number listed against the options:";
    std::cin>>choice;


    //making a structure named patient
    Patient patient[40];
    int num;
    int patient_number;
    if(choice==1){
        std::cout<<"\nEnter the number of patients:";
        std::cin>>num;

        for(int i{1};i<=num;i++){
            std::cout<<"\nEnter the name of "<<i<<" patient:";
            std::cin>>patient[i].name;
            std::cout<<"\nEnter the room number of "<<i<<" patient:";
            std::cin>>patient[i].room_number;
            std::cout<<"\nEnter the blood group of "<<i<<" the patient:";
            std::cin>>patient[i].blood_group;
            std::cout<<"\nEnter the age of the patient:";
            std::cin>>patient[i].age;
            std::cout<<"\nEnter the weight of the patient:";
            std::cin>>patient[i].weight;
            std::cout<<"\nEnter the disease of the patient:";
            std::cin>>patient[i].disease;
            std::cout<<"\nEnter the contact number of the patient:";
            std::cin>>patient[i].phone_number;
            std::cout<<"\nEnter the remarks of the doctor:";
            std::cin>>patient[i].remark;
            
            std::cout<<"\n\nData entered successfully";
            
        }

    }
    

    else if(choice==2){
        

       
            
            std::cout<<"\nEnter the patient number:";
            std::cin>>patient_number;
            std::cout<<"\nName:"<<patient[patient_number].name;
            std::cout<<"\nRoom Number:"<<patient[patient_number].room_number;
            std::cout<<"\nBlood Group:"<<patient[patient_number].blood_group;
            std::cout<<"\nWeight:"<<patient[patient_number].weight;
            std::cout<<"\nDisease:"<<patient[patient_number].weight;
            std::cout<<"\nContact Number:"<<patient[patient_number].phone_number;
            std::cout<<"\nRemark from doctor:"<<patient[patient_number].remark;
            std::cout<<"\nEnd";
       
            

        }

        char selection;
        std::cout<<"\nDo you want to display the data?[y/n]";
        std::cin>>selection;

        if(selection='y'){
            std::cout<<"\nEnter the patient number:";
            std::cin>>patient_number;
            std::cout<<"\nName:"<<patient[patient_number].name;
            std::cout<<"\nRoom Number:"<<patient[patient_number].room_number;
            std::cout<<"\nBlood Group:"<<patient[patient_number].blood_group;
            std::cout<<"\nWeight:"<<patient[patient_number].weight;
            std::cout<<"\nDisease:"<<patient[patient_number].weight;
            std::cout<<"\nContact Number:"<<patient[patient_number].phone_number;
            std::cout<<"\nRemark from doctor:"<<patient[patient_number].remark;
            std::cout<<"\nEnd";
        }

        else{
            std::cout<<"\nAlright.have a nice day ahead";
        }

    
return 0;
}
