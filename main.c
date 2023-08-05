#include<stdio.h>
#include<stdlib.h>
void urban(); //Both rular and urban areas have different per unit charges
void rular();
void custom(); //This section is basically for industrial bill payment
int main(){
    int opt;
    printf("\t\t\t\t\t WELCOME TO THE ELECTRICITY BILL PAYMENT PORTAL \n");
    printf("Choose 1 option from the menu\n 1. Urban\n 2. Rular \n 3. Custom electricity bill \n 4. Exit\n");
    scanf("%d",&opt);  //Welcome Dailouge

    if(opt==1){
        system("CLS");  //Clear Screen for Urban sub page
        urban();
    }
    else if(opt==2){
        system("CLS");  //Clear Screen for Rular sub page
        rular();
    }
    else if(opt==3){
        system("CLS");  //Clear Screen for Custom sub page
        custom();
    }
    else if(opt==4){
        exit (EXIT_SUCCESS) ; //Exit
    }
    return 0;
}

void urban(){
    int uc,total_amount,m_no,p_no[100];
    char fname[30],area[30],add[30],em_id[30];
    printf("\t\t\t\t\t WELCOME TO THE URBAN ELECTRICITY BILL PAYMENT PORTAL \n"); //Welcome Dialouge
    printf("Enter your Full Name: ");
    scanf("%s",&fname);
    printf("\nEnter your city: ");
    scanf("%s",&area);
//    printf("\nEnter your address: ");
//    scanf("%s",&add);
    printf("\nEnter your Phone Number: ");
    scanf("%s",&p_no);
    printf("\nEnter your email id: ");
    scanf("%s",&em_id);
    printf("\nEnter your meter number: ");
    scanf("%d",&m_no);
    printf("Enter the Units Consumed: ");  //Units Consumed by the customer
    scanf("%d", &uc );
    if(uc<=30 && uc>=0){
        total_amount=(uc)*3.25;            //Per units charges changes according to the units increasing
    }
    else if(uc>=31 && uc<=100){
        total_amount =(uc)*4.70;
    }
    else if(uc>=101 && uc<=200){
        total_amount =(uc)*6.25;
    }
    else{
        total_amount =(uc)*7.30;
    }
    printf("\nTotal Bill is: %d",total_amount); 			//Total Bill output
}

void rular(){
    int ruc,total_bill,rm_no,rp_no[12];;
    char rfname[30],rarea[30],radd[30],rem_id[30];
    printf("\t\t\t\t\t WELCOME TO THE RULAR ELECTRICITY BILL PAYMENT PORTAL \n");		//Welcome dialouge for Rular sub page
    printf("Enter your Full Name: ");
    scanf("%c",&rfname);
    printf("\nEnter your city: ");
    scanf("%c",&rarea);
//    printf("\nEnter your address: ");
//    scanf("%c",&radd);
    printf("\nEnter your Phone Number: ");
    scanf("%d",&rp_no);
    printf("\nEnter your email id: ");
    scanf("%c",&rem_id);
    printf("\nEnter your meter number: ");
    scanf("%d",&rm_no);
    printf("Enter the Units Consumed: ");					
    scanf("%d", &ruc );
    if(ruc<=30 && ruc>=0){
        total_bill=(ruc)*3.15;										//Per unit charges are different from urban and is increasing when total units consumed is increasing
    }
    else if(ruc>=31 && ruc<=100){
        total_bill =(ruc)*4.40;
    }
    else if(ruc>=101 && ruc<=200){
        total_bill =(ruc)*5.95;
    }
    else{
        total_bill =(ruc)*6.80;
    }
    printf("\nTotal Bill is: %d",total_bill);						//Total Bill output
}

void custom(){
    int cpu,cru,total_custom_bill,cm_no,cp_no[12];
    char cfname[30],carea[30],cadd[30],cem_id[30];
    printf("\t\t\t\t\t WELCOME TO THE CUSTOM ELECTRICITY BILL PAYMENT PORTAL \n");			//Welcome dailouge
    printf("Enter your Full Name: ");
    scanf("%c",&cfname);
    printf("\nEnter your city: ");
    scanf("%c",&carea);
//    printf("\nEnter your address: ");
//    scanf("%c",&cadd);
    printf("\nEnter your Phone Number: ");
    scanf("%d",&cp_no);
    printf("\nEnter your email id: ");
    scanf("%c",&cem_id);
    printf("\nEnter your meter number: ");
    scanf("%d",&cm_no);
    printf("Enter the Per Unit Charge: \n");
    scanf("%d",&cpu);
    printf("Enter the units consumed: \n");											//Person can enter per unit charge and units consumed by them
    scanf("%d",&cru);
    total_custom_bill=cpu*cru;
    printf("\nTotal Custom Bill is: %d\n Details:\n Per Unit: %d\n Unit Consumed: %d\n",total_custom_bill,cpu,cru);
}
