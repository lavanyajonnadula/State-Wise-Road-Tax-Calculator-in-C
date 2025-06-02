//Pointer to structure

#include <stdio.h>
#include<string.h>
struct pointer_1{
    char *state[23];//Here declared state as pointer
    //={"New Delhi","Uttar Pradesh","Haryana","Maharashtra","Andhra Pradesh","Telangana","Kerala","Karnataka","Odisha","Tamil Nadu","Wese Bengal","Chandigarh","Punjab","Gujarat","Rajasthan","Bihar","Jharkhand","Uttarakhand","Himachal Pradesh","Arunachal Pradesh","Assam","Pondicherry","Daman&Diu"};
    float Road_tax[20];
    int Cost_of_Vehicle;
};
int main() {
    // Write C code here
    struct pointer_1 pointer={.state={"New Delhi","Uttar Pradesh","Haryana","Maharashtra","Andhra Pradesh","Telangana","Kerala","Karnataka","Odisha","Tamil Nadu","Wese Bengal","Chandigarh","Punjab","Gujarat","Rajasthan","Bihar","Jharkhand","Uttarakhand","Himachal Pradesh","Arunachal Pradesh","Assam","Pondicherry","Daman&Diu"}};//we are accessing state variable from structure and assigning the array of strings
    char **ptr;//double pointer is using because already state is pointer we can save the address of ptr then accessing values
       
       ptr=pointer.state;  //In array of elements given to pointer  
      // printf("%s\n",ptr[22]);
      //strcpy(pointer_structure.state[1],"Uttar Pradesh");
     for(int i=0;i<23;i++){
     //use switch and calculate each state road tax
    printf("Road Tax calculation of %s\n",ptr[i]);
     switch(i){
         case 0:
               
                pointer.Cost_of_Vehicle=600000;
               char *type[]={"Private Vehicle","Company Vehicle"};
               char *car[]={"Petrol Cars","Diesel Cars"};
               for(int i=0;i<2;i++){
                  if(strcmp(car[i],"Petrol Cars")==0 && strcmp(type[i],"Private Vehicle")==0){
                    float Road_tax_of_New_Delhi=pointer.Cost_of_Vehicle *0.04;
                    printf("Road tax for Private Vehicle(Petrol) =%f\n",Road_tax_of_New_Delhi);
                    }else{
                    float Road_tax_of_New_Delhi=pointer.Cost_of_Vehicle *0.05;
                    printf("Road tax for Private Vehicle(Diesel) =%f\n",Road_tax_of_New_Delhi);
                    
                    }
               }
               for(int i=0;i<2;i++){
                    if (strcmp(car[i],"Petrol Cars")==0 && strcmp(type[i+1],"Company Vehicle")==0){
                    float Road_tax_of_New_Delhi=pointer.Cost_of_Vehicle *0.05;
                    printf("Road tax for Company Vehicle(Petrol)=%f\n",Road_tax_of_New_Delhi);
                    }else{
                    float Road_tax_of_New_Delhi=pointer.Cost_of_Vehicle *0.0625;
                    printf("Road tax for Company Vehicle(Diesel)=%f\n",Road_tax_of_New_Delhi);
                    
                    }
               }
               break;
               
             case 1:
                 
                  pointer.Cost_of_Vehicle=1000000;
                  float Road_tax_of_Uttar_Pradesh=pointer.Cost_of_Vehicle *0.08;
                  printf("Road Tax for Uttar Pradesh upto 10lakhs =%f\n",Road_tax_of_Uttar_Pradesh);
                  break;
            case 2:
                 
                 pointer.Cost_of_Vehicle=600000;
                  float Road_tax_of_Haryana=pointer.Cost_of_Vehicle *0.05;
                  printf("Road tax for Haryana upto 6lakhs =%f\n",Road_tax_of_Haryana);
                  break;
            case 3:
                 
                 pointer.Cost_of_Vehicle=1000000;
                 float Road_tax_of_Maharashtra;
                 char *type1[]={"CNG","Petrol","Diesel"};
                 for(int i=0;i<3;i++){
                     if(strcmp(type1[i],"CNG")==0){
                        Road_tax_of_Maharashtra=pointer.Cost_of_Vehicle *0.07;
                       printf("Road tax for Maharashtra upto 10lakhs and vehicle type CNG =%f\n",Road_tax_of_Maharashtra);
                     } else if(strcmp(type1[i],"Petrol")==0){
                         Road_tax_of_Maharashtra=pointer.Cost_of_Vehicle *0.11;
                            printf("Road tax for Maharashtra upto 10lakhs and vehicle type   Petrol =%f\n",Road_tax_of_Maharashtra);
                     } else if(strcmp(type1[i],"Diesel")==0){
                            Road_tax_of_Maharashtra=pointer.Cost_of_Vehicle *0.13;
                            printf("Road tax for Maharashtra upto 10lakhs and vehicle type  Diesel =%f\n",Road_tax_of_Maharashtra);
                     }
                 }
                 break;
            case 4:
                 
                 pointer.Cost_of_Vehicle=1000000;
                 float Road_tax_of_Andhrapradesh;
                 char *type2[]={"Private Vehicle","Company Vehicle"};
                 for(int i=0;i<2;i++){
                     if(strcmp(type2[i],"Private Vehicle")==0){
                        Road_tax_of_Andhrapradesh=pointer.Cost_of_Vehicle *0.12;
                       printf("Road tax for Andhrapradesh upto 10lakhs and vehicle type Private = %f\n",Road_tax_of_Andhrapradesh);
                       }else if(strcmp(type2[i],"Company Vehicle")==0){
                         Road_tax_of_Andhrapradesh=pointer.Cost_of_Vehicle *0.14;
                       printf("Road tax for Andhrapradesh upto 10lakhs and vehicle type company = %f\n",Road_tax_of_Andhrapradesh);
                      }
                   }
                   break;
            case 5:
                
                pointer.Cost_of_Vehicle=1000000;
                 float Road_tax_of_Telangana;
                 char *type3[]={"Private Vehicle","Company Vehicle"};
                 for(int i=0;i<2;i++){
                     if(strcmp(type3[i],"Private Vehicle")==0){
                        Road_tax_of_Telangana=pointer.Cost_of_Vehicle *0.12;
                       printf("Road tax for Telangana upto 10lakhs and vehicle type Private =%f\n",Road_tax_of_Telangana);
                       }else if(strcmp(type3[i],"Company Vehicle")==0){
                         Road_tax_of_Telangana=pointer.Cost_of_Vehicle *0.14;
                       printf("Road tax for Telangana upto 10lakhs and vehicle type Company = %f\n",Road_tax_of_Telangana);
                      }
                   }
                   break;
            case 6:
                 
                 pointer.Cost_of_Vehicle=500000;
                 int Cost_of_Vehicle_1=1000000;
                 float Road_tax_of_kerala;
                 float Road_tax_of_kerala_above_5lakhs;
                 Road_tax_of_kerala=pointer.Cost_of_Vehicle*0.06;
                 printf("Road tax for upto 500000 =%f\n",Road_tax_of_kerala);
                 Road_tax_of_kerala_above_5lakhs=Cost_of_Vehicle_1*0.13;
                 printf("Road tax for upto 1000000 =%f\n",Road_tax_of_kerala_above_5lakhs);
                 break;
            case 7:
                 
                 pointer.Cost_of_Vehicle=2000000;
                 int Cost_of_Vehicle_above_2000000=3000000;
                 float Road_tax_of_Karnataka;
                 float  Road_tax_of_Karnataka_above_2000000;
                  Road_tax_of_Karnataka=pointer.Cost_of_Vehicle*0.13;
                  printf("Road tax calculation upto 20lakhs=%f\n",Road_tax_of_Karnataka);
                  Road_tax_of_Karnataka_above_2000000=Cost_of_Vehicle_above_2000000*0.18;
                  printf("Road tax calculation above 20lakhs=%f\n",Road_tax_of_Karnataka_above_2000000);
                  break;
            case 8:
                 
                 pointer.Cost_of_Vehicle=500000;
                 float Road_tax_of_Odisha=pointer.Cost_of_Vehicle*0.05;
                 printf("Road tax calculation for 5lakhs=%f\n",Road_tax_of_Odisha);
                  break;
                 
            case 9:
                 
                 pointer.Cost_of_Vehicle=1000000;
                 float Road_tax_of_TamilNadu=pointer.Cost_of_Vehicle*0.10;
                 printf("Road tax calculation for 10lakhs=%f\n",Road_tax_of_TamilNadu);
                 break;
            case 10:
                
                printf("Based on engine size or fixed amount, whichever is higher\nOne-time tax for 5 years\nOne-time tax for 15 years\n");
                break;
            case 11:
                 
                 pointer.Cost_of_Vehicle=2000000;
                 float Road_tax_of_Chandigarh=pointer.Cost_of_Vehicle * 0.06;
                 printf("Road Tax calculation upto 200000 =%f\n",Road_tax_of_Chandigarh);
                 break;
            case 12:
                 
                 pointer.Cost_of_Vehicle=2000000;
                 float Road_tax_of_Punjab=pointer.Cost_of_Vehicle * 0.08+0.01;
                 printf("Road Tax calculation upto 200000 =%f\n",Road_tax_of_Punjab);
                 break;
            case 13:
                 
                 pointer.Cost_of_Vehicle=2000000;
                 float Road_tax_of_Gujarat_All_Vehicles=pointer.Cost_of_Vehicle * 0.06;
                 printf("Road Tax calculation upto 200000 =%f\n",Road_tax_of_Gujarat_All_Vehicles);
                 float Road_tax_of_Gujarat_All_Vehicles1=pointer.Cost_of_Vehicle * 0.12;
                 printf("Road Tax calculation upto 200000 =%f\n",Road_tax_of_Gujarat_All_Vehicles);
                 float Road_tax_of_Gujarat_All_Vehicles2=pointer.Cost_of_Vehicle * 0.05;
                 printf("Road Tax calculation upto 200000 =%f\n",Road_tax_of_Gujarat_All_Vehicles);
                 break;
            case 14:
                 
                 pointer.Cost_of_Vehicle=1000000;
                 
                 char *type4[]={"Petrol","Diesel"};
                 for(int i=0;i<2;i++){
                     if(strcmp(type4[i],"Petrol")==0){
                        float Road_tax_of_Rajasthan=pointer.Cost_of_Vehicle*0.06;
                        printf("Road Tax calculation upto 100000 =%f\n",Road_tax_of_Rajasthan);
                     }else{
                         float Road_tax_of_Rajasthan=pointer.Cost_of_Vehicle*0.08;
                         printf("Road Tax calculation upto 100000 =%f\n",Road_tax_of_Rajasthan);
                     }
                 }
                 break;
            case 15:
               
                pointer.Cost_of_Vehicle=800000;
                float Road_tax_of_Bihar=pointer.Cost_of_Vehicle*0.07;
                printf("7% Road Tax calculation upto 8 lakhs =%f\n",Road_tax_of_Bihar);
                Road_tax_of_Bihar=pointer.Cost_of_Vehicle*0.13;
                printf("13% Road Tax calculation upto 8 lakhs =%f\n",Road_tax_of_Bihar);
                break;
            case 16:
                 
                 pointer.Cost_of_Vehicle=1500000;
                float Road_tax_of_Jharkhand=pointer.Cost_of_Vehicle*0.06;
                float Road_tax_of_Jharkhand_2nd_car=pointer.Cost_of_Vehicle*(0.06+0.03);
                printf("Road Tax calculation of 1st car=%f\n",Road_tax_of_Jharkhand);
                printf("Road Tax calculation of second car=%f\n",Road_tax_of_Jharkhand_2nd_car);
                break;
            case 17:
               
               pointer.Cost_of_Vehicle=500000;
               float Road_tax_of_Uttarakhand=pointer.Cost_of_Vehicle*0.08;
               printf("Road Tax calculation upto 5lakhs =%f\n",Road_tax_of_Uttarakhand);
               break;
            case 18:
                
               pointer.Cost_of_Vehicle=10000000;
               int Cost_of_Vehicle_above_1crore=20000000;
               float Road_tax_of_HimachalPradesh=pointer.Cost_of_Vehicle*0.025;
               printf("Road Tax calculation upto 1cc =%f\n",Road_tax_of_HimachalPradesh);
                Road_tax_of_HimachalPradesh=Cost_of_Vehicle_above_1crore*0.03;
               printf("Road Tax calculation above 1cc =%f\n",Road_tax_of_HimachalPradesh);
               break;
            case 19:
               
               float Road_tax_of_ArunachalPradesh;
               int Cost_of_Vehicle[]={400000,600000,1100000,1600000,1900000};
               for(int i=0;i<5;i++){
               if(Cost_of_Vehicle[i]>300000 && Cost_of_Vehicle[i]<=500000){
                    Road_tax_of_ArunachalPradesh=Cost_of_Vehicle[i]*0.027;
                   printf("Road Tax calculation for 3lakh-5lakh =%f\n",Road_tax_of_ArunachalPradesh);
               }else if(Cost_of_Vehicle[i]>500000 && Cost_of_Vehicle[i]<=1000000){
                   Road_tax_of_ArunachalPradesh=Cost_of_Vehicle[i]*0.03;
                   printf("Road Tax calculation for 5lakh-10lakh =%f\n",Road_tax_of_ArunachalPradesh);
               }else if(Cost_of_Vehicle[i]>1000000 && Cost_of_Vehicle[i]<=1500000){
                   Road_tax_of_ArunachalPradesh=Cost_of_Vehicle[i]*0.035;
                   printf("Road Tax calculation for 10lakh-15lakh =%f\n",Road_tax_of_ArunachalPradesh);
               }else if(Cost_of_Vehicle[i]>1500000 && Cost_of_Vehicle[i]<=1800000){
                   Road_tax_of_ArunachalPradesh=Cost_of_Vehicle[i]*0.04;
                   printf("Road Tax calculation for 15lakh-18lakh =%f\n",Road_tax_of_ArunachalPradesh);
               }else if(Cost_of_Vehicle[i]>1800000 && Cost_of_Vehicle[i]<=2000000){
                   Road_tax_of_ArunachalPradesh=Cost_of_Vehicle[i]*0.045;
                   printf("Road Tax calculation for 18lakh-20lakh =%f\n",Road_tax_of_ArunachalPradesh);
               }else if(Cost_of_Vehicle[i]>2000000){
                   Road_tax_of_ArunachalPradesh=Cost_of_Vehicle[i]*0.05;
                   printf("Road Tax calculation above 20lakh =%f\n",Road_tax_of_ArunachalPradesh);
               }
               break;
            case 20:
                
                float Road_tax_of_Assam;
                 int Cost_of_Vehicle1[3]={1000000,1800000,2500000};
                for(int i=0;i<3;i++){
                if(Cost_of_Vehicle1[i]>300000 && Cost_of_Vehicle1[i]<=1500000){
                   Road_tax_of_Assam=Cost_of_Vehicle1[i]*0.04;
                   printf("Road Tax calculation for 3lakh-15lakh =%f\n",Road_tax_of_Assam);
               }else if(Cost_of_Vehicle1[i]>1500000 && Cost_of_Vehicle1[i]<=2000000){
                   Road_tax_of_Assam=Cost_of_Vehicle1[i]*0.05;
                   printf("Road Tax calculation for 15lakh-20lakh =%f\n",Road_tax_of_Assam);
               }else if(Cost_of_Vehicle1[i]>2000000){
                   Road_tax_of_Assam=Cost_of_Vehicle1[i]*0.07;
                   printf("Road Tax calculation above 20lakh-15lakh =%f\n",Road_tax_of_Assam);
               }
               }
               break;
        case 21:
            
             pointer.Cost_of_Vehicle=500000;
             float Road_tax_of_Pondicherry=8000;
             printf("Road Tax calculation upto 5lakhs=%f\n",Road_tax_of_Pondicherry);
             break;
        case 22:
            
            pointer.Cost_of_Vehicle=1000000;
            int Cost_of_Vehicle_above_10lakhs=1500000;
            float Road_tax_of_Daman_and_Diu=pointer.Cost_of_Vehicle*0.025;
            float Road_tax_of_Daman_and_Diu_above_10lakhs=pointer.Cost_of_Vehicle*0.03;
            printf("Road Tax calculation upto 10lakhs=%f\n",Road_tax_of_Daman_and_Diu);
            printf("Road Tax calculation above 10lakhs=%f\n",Road_tax_of_Daman_and_Diu_above_10lakhs);
            break;
        default:
             printf("None");
             break;
                 
                 
     }
     
     }
}
    return 0;
}