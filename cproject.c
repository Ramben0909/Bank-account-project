#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
typedef struct acc_type
{    char bank_name[20];
     char bank_branch[20];
     char acc_holder_name[100];
     int acc_number;
     char acc_holder_address[100];
     float available_balance;
}acc;
int num_acc;
int acc_num =787899;
void Create_new_account();
void Cash_Deposit();
void Cash_withdrawl();
void Account_information();
void display_options();
 int i=0;
struct acc_type list[100];
int main(){ 
    char option;
    char myp[50] = "Ritam Bhattacharya_B_21";
    int j=0;
    while (j>=0){
       printf("\n***** Welcome to Bank Application *****\n");
       printf("\nThis demo program is brought you by %s",myp);
       display_options();
       printf("Please enter any options (1/2/3/4/5/6) ");
       printf("to continue : ");
        option = getch();
        printf("%c \n", option);
        switch(option)
          { case '1': Create_new_account();
                    break;
          case '2': Cash_Deposit();
                    break;
          case '3': Cash_withdrawl();
                    break;
          case '4': Account_information();
                    break;
          case '5': return 0;
          case '6': system("cls");
                    break;
          default : system("cls");
                    printf("Please enter one of the options");
                    printf("(1/2/3/4/5/6) to continue \n ");
                    break;
          }j++;
    }
    return 0;
}void display_options(){
    printf("\n1. Create new account \n");
    printf("2. Cash Deposit \n");
    printf("3. Cash withdrawl \n");
    printf("4. Account information \n");
    printf("5. Log out \n");
    printf("6. Clear the screen and display available ");
    printf("options \n\n");
}void Create_new_account(){  
   char acc_holder_name[100];
   char acc_holder_address[100];
   float available_balance = 0;
   fflush(stdin);     
   strcpy(list[i].bank_name,"Finova");
   strcpy(list[i].bank_branch,"sector-5");  
   printf("\nEnter the account holder name:");
   fgets(acc_holder_name,100,stdin);
   list[i].acc_number=acc_num;
   printf("\nEnter the account holder address:");
   fgets(acc_holder_address,100,stdin);
   strcpy(list[i].acc_holder_name,acc_holder_name);
   strcpy(list[i].acc_holder_address,acc_holder_address);
   list[i].available_balance=available_balance;
   printf("\nAccount has been created successfully \n\n");
   printf("Bank name              : %s \n" , list[i].bank_name);
   printf("Bank branch            : %s \n" , list[i].bank_branch);
   printf("Account holder name    :");
   puts(acc_holder_name);
   printf("Account number         : %d \n" , list[i].acc_number);
   printf("\nAccount holder address :");
   puts(acc_holder_address);
   printf("\nAvailable balance      : %f \n" , list[i].available_balance);
   i=i+1;
   acc_num=acc_num+1;
}void Account_information(){
    int n,i;
     printf("Enter the bank account no:");
     scanf("%d",&n);
    for(i=0;i<100;i++){
      if(list[i].acc_number==n){
         printf("\n Bank name: %s \n" ,list[i].bank_name);
         printf("Bank branch: %s \n" , list[i].bank_branch);
         printf("Account holder name: %s \n",list[i].acc_holder_name);
         printf("Account number: %d\n",list[i].acc_number);
         printf("Account holder address: %s \n" ,list[i].acc_holder_address);
         printf("Available balance: %f \n\n",list[i].available_balance);
         return;
      }
    }printf("Account not found!\n");
}void Cash_Deposit(){
    int acc_no,i;
    float add_money;
    printf("Enter the bank account no you want to deposit money:");
    scanf("%d",&acc_no);
    printf("\nEnter money you want to deposit :  ");
    scanf("%f",&add_money);
    for(i=0;i<100;i++){
      if(list[i].acc_number==acc_no){
         printf("\nThe Last balance for account %d is %f \n", acc_no, list[i].available_balance);
         list[i].available_balance=list[i].available_balance+add_money;
         printf("\nThe New balance for account %d is %f \n",acc_no,list[i].available_balance);
         return; 
      }
}printf("Invalid account no ");
}void Cash_withdrawl(){
   int acc_no,i=0;
    float withdraw_money;
    printf("Enter the bank account no you want to withdraw money:");
    scanf("%d",&acc_no);
    printf("\nEnter money you want to withdraw :  ");
    scanf("%f",&withdraw_money);
    for(i=0;i<100;i++){
      if(list[i].acc_number==acc_no){
         printf("\nThe Last balance for account %d is %f \n", acc_no, list[i].available_balance);
         if(list[i].available_balance>=withdraw_money){
           list[i].available_balance=list[i].available_balance-withdraw_money;
         printf("\nThe New balance for account %d is %f \n",  acc_no, list[i].available_balance);
         }else{
            printf("Not enough balance !!");
         }return;
      }
   }printf("Account not found!\n");
}