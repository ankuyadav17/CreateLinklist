#include <stdio.h>

struct s{
    int data;
    struct s *ptr;
};

int main() 
{ 
 struct s *h,*h1,*p=(struct s*)malloc(sizeof(struct s)) ;  
 p->data=2;
 p->ptr=NULL;
 printf("%d",p->data);
 h=p;
 char choice='y';
  while(choice=='y') {
     int n;
     struct s *p2=(struct s*)malloc(sizeof(struct s)) ;
     printf("\nEnter any no");
     scanf("%d",&n);
     p2->data=n;
     p2->ptr=NULL;
     p->ptr=p2;  
     p=p2;
     char ch;
     printf("want to add more node(n/y)");
     scanf(" %c", &ch);
     
     choice=ch;
    }
    h1=h;
while(h1!=NULL){
    printf("%d ",h1->data);
    h1=h1->ptr;
    }
}












