#include "stdio.h"
#include <stdlib.h>
#include "string.h"


struct Books {
    char title[100];
    char author[100];
    char subject[100];
    int book_id;
};
int main() {
   
    struct Books Book1;
    printf("Enter for Book1:\n");
    printf("Enter book title:");
    scanf("%s",&Book1.title);
    printf("Enter book author:");
    scanf("%s",&Book1.author);
    printf("Enter book subject:");
    scanf("%s",&Book1.subject);
    printf("Enter book ID:");
    scanf("%d",&Book1.book_id);
   
   
    struct Books Book2;
    printf("Enter for Book2:\n");
    printf("Enter book title:");
    scanf("%s",&Book2.title);
    printf("Enter book author:");
    scanf("%s",&Book2.author);
    printf("Enter book subject:");
    scanf("%s",&Book2.subject);
    printf("Enter book ID:");
    scanf("%d",&Book2.book_id);
    printf ("Book 1 Features\n");
    printf("Book 1 title : %s \n", Book1.title);
    printf("Book 1 author : %s \n", Book1.author);
    printf("Book 1 subject : %s \n", Book1.subject);
    printf("Book 1 book_id : %d \n", Book1.book_id);
    printf("\n");
    printf("Book 2 Features\n");
    printf("Book 2 title : %s \n", Book2.title);
    printf("Book 2 author : %s \n", Book2.author);
    printf("Book 2 subject : %s \n", Book2.subject);
    printf("Book 2 book_id : %d \n", Book2.book_id);
  return 0;
}