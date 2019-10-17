#include <stdio.h>
#include <stdlib.h>
typedef struct node node;
struct node
{
	int val;
	node* next;
};
node *a[200010];
int n;
int flag[200010];
node* tree(int a1,int b1)
{
	node* k1=malloc(sizeof(node));
	k1->val=b1;
	k1->next=NULL;
	node* k2=malloc(sizeof(node));
	k2->val=a1;
	k2->next=NULL;
	node *start,*start2;
	start=a[a1];
	while(start->next!=NULL)
	{
		start=start->next;
	}
	start->next=k1;
	
	// start2=a[b1];
	// while(start2->next!=NULL)
	// {
	// 	start2=start2->next;
	// }
	// start2->next=k2;
}
// void print(){
// 	int i;
// 	for(i=1;i<=n;i++)
// 	{
// 		node* start=a[i];
// 		while(start!=NULL)
// 		{
// 			printf("%d ",start->val );
// 			start=start->next;
// 		}
// 		printf("\n");
// 	}
// }
int count=0;
int arr[200100];
int rec(int r1,int r2)
{
	node* start=a[r1]->next;
	arr[count]=a[r1]->val;
	count++;
	// if(count==r2)
	// {
	// 	printf("%d\n",a[r1]->val);
	// 	return 1;
	// }
	while(start!=NULL)
	{
		rec(start->val,r2);
		// if(count>r2)
		// 	break;
		start=start->next;
	}
	return 0;
}

int main()
{
	int i,b2,a2,q;
	scanf("%d%d",&n,&q);
	for(i=1;i<=n;i++)
	{
		a[i]=(node*)malloc(sizeof(node)); 
		a[i]->val=i;
		a[i]->next=NULL;
	}
	for(i=2;i<=n;i++)
	{
		// scanf("%d%d",&a2,&b2);
		scanf("%d",&a2);
		tree(a2,i);
	}
	// printf("HI\n");
	// print();
	int r1,r2;
	rec(1,2);
	for(int i=0;i<count;i++)
		printf("%d ",arr[i] );
	for(i=0;i<q;i++)
	{
		scanf("%d%d",&r1,&r2);
		count=0;
		int e=rec(r1,r2);
		if(count<r2)
			printf("-1\n");
	}
	return 0;
}