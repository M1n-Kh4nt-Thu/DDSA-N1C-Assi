#include<stdio.h>
#define SIZE 6
#define STUDENTS 3


int maung_maung();
int aung_aung();
int tun_tun();
void checkMarks();



int main(){

    checkMarks();

    return 0;
}





//maung maung function
int maung_maung(){
int mm_sub[SIZE];
int total =0;
for(int i=0; i<SIZE; i++){
printf("Enter Maung Maung's Mark: ");
scanf("%d", &mm_sub[i]);

}
for(int i=0; i<SIZE; i++){

if(mm_sub[i] >= 75){

printf("Sub %d Is Destination \n", i);

}else if(mm_sub[i] <= 24){


    printf("\n\n He Fail The Exam at %d subject with %d marks \n\n", i, mm_sub[i]);
}
total = total + mm_sub[i];

}
printf("The Total Mark Of Maung Maung is %d .\n", total);

return total;
}




//aung aung function
int aung_aung(){
int aa_sub[SIZE];
int total =0;
for(int i=0; i<SIZE; i++){
printf("Enter Aung Aung's Mark: ");
scanf("%d", &aa_sub[i]);
    
}
for(int i=0; i<SIZE; i++){

if(aa_sub[i] >= 75){

printf("Sub %d Is Destination \n", i);

}else if(aa_sub[i] <= 24){


    printf("\n\n He Fail The Exam at %d subject with %d marks \n\n", i, aa_sub[i]);
}
total = total + aa_sub[i];

}
printf("The Total Mark Of Aung Aung is %d .\n", total);
return total;

}



//tuntun function
int tun_tun(){
int tt_sub[SIZE];
int i=0;
int total = 0;
for(i=0; i<SIZE; i++){
printf("Enter Tun Tun's %d Subject Mark: ", i);
scanf("%d", &tt_sub[i]);

}

for(int i=0; i<SIZE; i++){

if(tt_sub[i] >= 75){

printf("Sub %d Is Destination \n", i);

}else if(tt_sub[i] <= 24){


    printf("\n\n He Fail The Exam at %d subject with %d marks \n\n", i, tt_sub[i]);
}
total = total + tt_sub[i];

}
printf("The Total Mark Of Tun Tun is %d .\n", total);

return total;
 }



//checking the marks
 void checkMarks(){


int total1= maung_maung();
int total2=aung_aung();
int total3 = tun_tun();


if(total1 > total2,total3){

    printf("Maung Maung have best marks");
}else if(total2 > total1, total3){

    printf("Aung Aung have best marks");
}else if(total3 > total1, total2){

    printf("Tun Tun have best marks");
}


 }