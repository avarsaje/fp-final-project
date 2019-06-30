

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_menu(void)
{
    printf("[1] new task\n\n");
    printf("[2] show tasks\n\n");
    printf("[3] save\n\n");
    printf("[4] load\n\n");
    printf("[5] exit\n\n");
}

struct node
{
    int day;
    char name1[20];
    int start_time;
    int end_time;
    struct node* next;
};

struct node* add_front(struct node* list,struct node* new_node )
{
    if(list==NULL)
    {
        list=new_node;
        list->next=NULL;
    }
    else{
        new_node->next=list;
        list=new_node;}
 return list;
}
struct node* add_end(struct node* list,struct node* new_node)
{
    struct node* current;

    if(list==NULL)
    {
        list=new_node;
        list->next=NULL;
    }
    else{
        for(current=list;current->next!=NULL;current=current->next);
        current->next=new_node;
        new_node->next=NULL;
        }
        return list;
}


struct node* create_node(int day,char name2[20],int start_time,int end_time)
{
    struct node* nn;
    nn=(struct node*)malloc(sizeof(struct node));
    nn->day=day;
    strcpy(nn->name1,name2);
    nn->start_time=start_time;
    nn->end_time=end_time;
    nn->next=NULL;
    return nn;
}



void print_list(struct node* list)
{
    struct node* temp1=list;
    while(temp1 !=NULL)
    {
        printf("%d %d %d %s\n",temp1->day,temp1->start_time,temp1->end_time,temp1->name1);
        temp1=temp1->next;
    }
}void show(struct node* list){
    struct node* temp1=list;
    int c[7]={0},cc[7]={0};
    if(temp1==NULL)
                printf("nuuuuull");
                while(temp1!= NULL)
                {
                	if(temp1->day==0)
                	c[0]++;
                	if(temp1->day==1)
                	c[1]++;
                	if(temp1->day==2)
                	c[2]++;
                	if(temp1->day==3)
                	c[3]++;
                	if(temp1->day==4)
                	c[4]++;
                	if(temp1->day==5)
                	c[5]++;
                	if(temp1->day==6)
                	c[6]++;
                	temp1=temp1->next;
				}
				printf("%d",c[0]);
			temp1=list;
			printf("\n0 (Saturday):");
                while(temp1!=NULL)
            {

            	if(temp1->day==0)
				{
                	printf("%s (from: %d to: %d)",temp1->name1,temp1->start_time,temp1->end_time);
                	if(cc[0]<c[0]-1)
                	printf("->");
                	cc[0]++;

				}

                temp1=temp1->next;
            }
            	temp1=list;
			printf("\n1 (Sunday):");
                while(temp1!=NULL)
            {

            	if(temp1->day==1)
				{
                	printf("%s (from: %d to: %d)",temp1->name1,temp1->start_time,temp1->end_time);
                	if(cc[1]<c[1]-1)
                	printf("->");
                	cc[1]++;
				}

                temp1=temp1->next;
            }
            	temp1=list;
			printf("\n2 (Monday):");
                while(temp1!=NULL)
            {

            	if(temp1->day==2)
				{
                	printf("%s (from: %d to: %d)",temp1->name1,temp1->start_time,temp1->end_time);
                	if(cc[2]<c[2]-1)
                	printf("->");
                	cc[2]++;
				}

                temp1=temp1->next;
            }
            	temp1=list;
			printf("\n3 (Tuesday):");
                while(temp1!=NULL)
            {

            	if(temp1->day==3)
				{
                	printf("%s (from: %d to: %d)",temp1->name1,temp1->start_time,temp1->end_time);
                	if(cc[3]<c[3]-1)
                	printf("->");
                	cc[3]++;
				}

                temp1=temp1->next;
            }
            	temp1=list;
			printf("\n4 (Wednesday):");
                while(temp1!=NULL)
            {

            	if(temp1->day==4)
				{
                	printf("%s (from: %d to: %d)",temp1->name1,temp1->start_time,temp1->end_time);
                	if(cc[4]<c[4]-1)
                	printf("->");
                	cc[4]++;
				}

                temp1=temp1->next;
            }
            	temp1=list;
			printf("\n5 (Thursday):");
                while(temp1!=NULL)
            {

            	if(temp1->day==5)
				{
                	printf("%s (from: %d to: %d)",temp1->name1,temp1->start_time,temp1->end_time);
                	if(cc[5]<c[5]-1)
                	printf("->");
                	cc[5]++;
				}

                temp1=temp1->next;
            }
            	temp1=list;
			printf("\n6 (Friday):");
                while(temp1!=NULL)
            {

            	if(temp1->day==6)
				{
                	printf("%s (from: %d to: %d)",temp1->name1,temp1->start_time,temp1->end_time);
                	if(cc[6]<c[6]-1)
                	printf("->");
                	cc[6]++;
				}

                temp1=temp1->next;
            }
            printf("\n");



    }




int main()
{
   int start_time,end_time,day,i=0,lines=0,c[7]={0},cc[7]={0},flagg=0;
   struct node* list=NULL;
   struct node* temp1=NULL;
   struct node temp2;
   char name[30],name1[20];
   int day1,start_time1,end_time1;
   char ch1,name11[20];
   printf("Enter your name:\n");
   FILE *fp,*fpp;

   scanf("%s",name);
   printf("Welcome %s\n\n\n",name);
   int ch,size,flag=0;
   fp=fopen(name,"a+");
   if(NULL==fp)
    printf("File not found");
   if (NULL != fp) {
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    if (0 == size) {
    flag=1;
    }
    else
    {

    }
    }
   while(1)
    {   print_menu();
        scanf("%d",&ch);
        switch(ch)
        {
           case 1:
               flagg=0;
               printf("Enter the day: \n");
               printf(">");
               scanf("%d",&day);
               printf("\n");
               printf("Enter the name: \n");
               printf(">");
               scanf("%s",name1);
               printf("\n");
               printf("Enter the start time: \n");
               printf(">");
               scanf("%d",&start_time);
               printf("\n");
               printf("Enter the end time: \n");
               printf(">");
               scanf("%d",&end_time);
               printf("\n");
               temp1=list;
               while(temp1!= NULL)
               {
               	if(temp1->day==day && strcmp(temp1->name1,name1)==0)
               	{
               		printf("tekrari");
               		flagg=1;
               		break;
				}
				temp1=temp1->next;
			   }
			   temp1=list;
			   while(temp1!= NULL)
               {
               	if(temp1->day==day && temp1->start_time>start_time && temp1->start_time<end_time)
               	{
               		printf("tadakhol");
               		flagg=1;
               		break;
				}
				temp1=temp1->next;
			   }
			   while(temp1!= NULL)
               {
               	if(temp1->day==day && temp1->start_time<start_time && temp1->end_time>end_time)
               	{
               		printf("tadakhol darad/n");
               		flagg=1;
               		break;
				}
				temp1=temp1->next;
			   }
                if(flagg==1)
                    break;

               struct node* temp=create_node(day,name1,start_time,end_time);
               if(list==NULL)
               {
                   list=add_end(list,temp);
                   break;
               }
               if(temp->start_time>list->start_time)
               list=add_end(list,temp);
               else
                list=add_front(list,temp);
               break;




           case 2:
                show(list);
               temp1=list;


               break;
            //show
           case 3:
                   temp1=list;
                while(temp1!=NULL)
            {
                fprintf(fp,"%d %d %d %s\n",temp1->day,temp1->start_time,temp1->end_time,temp1->name1);
                temp1=temp1->next;
            }


			break;
           case 4:
                fp=fopen(name,"r");
                lines++;
                while ((ch = fgetc(fp)) != EOF)
                    {
                        if (ch == '\n')
                        lines++;
                    }
                    fp=fopen(name,"r");
                    if(lines==1)
                     {
                       fscanf(fp,"%d%d%d%s",&day1,&start_time1,&end_time1,name11);
                       //printf("%d%d%d%s",day1,start_time1,end_time1,name11);
                       struct node* temp=create_node(day1,name11,start_time1,end_time1);
                        list=add_end(list,temp);
                        break;


                    }


                 while(i<lines-1)
                    {
                       fscanf(fp,"%d%d%d%s",&day1,&start_time1,&end_time1,name11);
                       struct node* temp=create_node(day1,name11,start_time1,end_time1);
                        list=add_end(list,temp);
                        i++;

                    }

            break;
           case 5:
               fclose(fp);
               return 0;
           default:
           printf("wrong input");
            break;
            }
    }



}
