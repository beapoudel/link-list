 #include<stdio.h>
#include<stdlib.h>


    struct node
    {
      int data;
       struct node *prev;
       struct node *next;
     };
        void entry(struct node *aami)
        {
          printf("enter the element\n");
           while(aami!=NULL)
           {
           scanf("%d",&aami->data);
            aami=aami->next;
            }
          }
        void link(struct node *point)
     {
       while(point!=NULL)
      {   
       printf("%d\n",point->data);
       point = point->next;
       }
    }
      void deleteend(struct node *tumi){
      struct node *delete;
      struct node *okay;
      okay=delete=tumi;
      while(okay->next!=NULL){
      delete=okay;
      okay=okay->next;
      }
       delete->next=NULL;
        free(okay);
    }
     void pos(struct node *kune){
  struct node *tum;
  struct node *hum;
  int i, pos;
   i=1;
    hum=kune;
   printf("enter the position\n");
   scanf("%d",&pos);
   while(i<pos){
    tum=hum;
    hum=hum->next;
    i++;
   }
    tum->next=hum->next;
    free(hum);
}
    void new(struct node *sob){
  struct node *hum;
  struct node *koka;
  struct node *newnew;
  int i, pos;
  i=1;
  hum=sob;
    printf("enter the position \n");
    scanf("%d",&pos);
    while(i<pos)
    {
    koka=hum;
    hum=hum->next;
   i++;
    }
   newnew=(struct node*)malloc(sizeof(struct node));
    koka->next=newnew;
    newnew->next=hum;
}      
      void main()
     {
    struct node *head, *newnode, *temp;
     int choice;
      head=(struct node*)malloc(sizeof(struct node));
      newnode=(struct node*)malloc(sizeof(struct node));
      temp=(struct node*)malloc(sizeof(struct node));
      head->next = newnode;
      newnode->prev = head;
      newnode->next = temp;
      temp->prev = newnode;
      temp->next = NULL;
      while(1){
      printf("enter the choice\n");
      printf("1: entry\n");
      printf("2:display\n");
      printf("3:delete for end\n");
      printf("4:delete from any position\n");
      printf("5:enter a new node\n");
      printf("6: exit\n");
      scanf("%d",&choice);
      switch (choice){
       case 1: entry(head);
             break;
      case 2: link(head);
         break;
      case 3: deleteend(head);
           break;
      case 4: pos(head);
           break;
      case 5: new(head);
           break;
      case 6: exit(0);
          break;
      default: printf("choice is invalid\n");
      }
     }
}