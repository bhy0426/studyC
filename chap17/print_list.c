#define _CRT_SECURE_NO_WARNINGS
void print_list(NODE *plist)
{
	NODE *p;

	p = plist;
	printf("( "); 

	while( p )
	{
		printf("%d ", p->data);
		p = p->link;
	} 
	printf(")\n"); 
}