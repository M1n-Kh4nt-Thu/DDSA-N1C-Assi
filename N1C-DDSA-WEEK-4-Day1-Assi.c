/* Week 3 Assigement OF DDSA FROM N1C*/


#include<stdio.h>
#include<stdlib.h>

//declare function
void menu();
void singup();
int data_compare(char first[30], char second[30]);
void signin_filter(char l_email[30],char l_pass[20]);
void sign_out();


//structure declare
struct D_B_S{

    char name[30];
    char email[30];
    char password[30];
  
    
};

struct D_B_S data[5];

//global variable declare
int g_sign_up_counter = 0;
int g_sign_in_counter = -1;
int data_counter = 0;
//Main Funcion
int main(){
   
   menu();

}


//I.Menu Function
void menu(){
    

    while (1)
    {
        int num = 0; 
        printf("\n\n=========== Menu Page ===========\n\n");
        printf("1.Sing Up\n2.Sing In\n3.Exit");
        printf("\n\nInput To Start Program:");
        scanf("%d", &num);

        if (num == 1)
        {
            singup();
            
        }else if (num == 2)
        {
            signin();
        }else
        {
            exit(1);
        }
        
        
        
    }
    
    
}/*End Of Menu Function*/


//II.Sing Up Function
void singup(){
    char user_name[30];
    int  user_phone = 0;
    char user_email[30];
    char user_pass[30];
    
    printf("\n\n=========== Sing Up Page ==============\n\n");
    printf("Enter Your Name :");
    scanf(" %[^\n]", &user_name); 
    sud_2_dbs(data[g_sign_up_counter].name, user_name);

    // printf("Enter Your Phone:");
    // scanf("%d", &user_phone);
    // sud_2_dbs(data[g_sign_up_counter].phone_number, user_phone);


    printf("Enter Your Email: ");
    scanf(" %[^\n]", &user_email);
    sud_2_dbs(data[g_sign_up_counter].email, user_email);
    
    printf("Enter Your Password: ");
    scanf(" %[^\n]", &user_pass);
    sud_2_dbs(data[g_sign_up_counter].password, user_pass);


    printf("Sing Up Done!\n"); 
    
    
    g_sign_up_counter++;
    
    if (g_sign_up_counter >5)
    {
      printf("\n\n============= ! W A R N I N G ! ==============\n\nDatabase is Out Of Storage!\n");
      exit(0);
    }
   
    
}//End Of II.Sing Up Function

//II.1.Input Sing Up Data To Database
void sud_2_dbs(char first[30], char second[30]){

    int i=0;
    do
    {
        if (second[i] == '\0')
        {
            break;
        }else
        {
           first[i] = second[i];
        }
        
        i++;
    } while (i<30);
    
}//End Of II.1.Input Sing Up Data To Database


//III.Sign In
void signin(){

    char sgi_email[30];
    char sgi_password[30];
    int  sgi_phone = 0;
    int i=0;
   

    printf("\n\n============= Sign In Page ==============\n\n");
   
    printf("Enter Your Email:");
    scanf(" %[^\n]", &sgi_email);

    printf("Enter Your Password:");
    scanf(" %[^\n]", &sgi_password);
    
    signin_filter(sgi_email,sgi_password);
    
    if(g_sign_in_counter != -1){
       printf("\n\n============= Profile Page ==================\n\n");

       printf("Your Name :  : %s\n", data[g_sign_in_counter].name);
       printf("Your Email:  :  %s\n", data[g_sign_in_counter].email);
       sign_out();
    
    } else{
        printf("Your Email or Password is something wrong!\nPlease Try Again\n");
        menu();
    }

    
}//end of sign in 


//III.1.Singin Filter
void signin_filter(char si_email[30], char si_pass[20]) {
    g_sign_in_counter = -1;

    for (int i = 0; i < g_sign_up_counter; i++){

        if (data_compare(data[i].email, si_email) && data_compare(data[i].password, si_pass)){
            g_sign_in_counter = i;
            break;
        }
    }
}//end of sign in filter




//III.3.sign in data comparing
int data_compare(char first[30], char second[30]) {
    int i = 0;
    while (first[i] != '\0' && second[i] != '\0') {
        if (first[i] != second[i]) {
            return 0; 
        }
        i++;
    }
    
    return (first[i] == '\0' && second[i] == '\0'); 
}//End of data comparing


/// IV Sign Outing 
void sign_out( ){
    int s_out = 0;
   printf("\n\nIf You  Wanna Sign Out Your Account, Please Enter Number 1: ");
   scanf("%d", &s_out);

   if (s_out == 1)
   {
     menu();
     
   }
   
}//End Of Program