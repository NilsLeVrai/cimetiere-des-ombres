#include <stdio.h>
#include <stdlib.h>

struct poly {
    int data;
    struct poly* next;
};

int main (int argc, char *argv[]) 
{
	int i = 7;
	struct poly* mono = (struct poly*)malloc(sizeof(struct poly));
	mono->data = i+10;
	mono->next = NULL;
	printf("Data: %d\n", mono->data);
}

typedef struct poly {
	int			count; // number of arguments
	int			*value; // value of each arguments
	typedef struct	poly	*next;
} mono;
