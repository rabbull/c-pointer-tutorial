#include <stdio.h>
#include <stdlib.h>

typedef struct Book {
    char name[16];
    char author[16];
    char ISBN[14];
    struct Book *next;
    struct Book *prev;
} Book;

void insert_tail(Book* head, Book* new_node);

int main() {
    Book head;
    head.next = head.prev = &head;
    do {
        Book* p = malloc(sizeof(Book));
        printf("name: ");
        scanf("%s", p->name);
        printf("author: ");
        scanf("%s", p->author);
        printf("ISBN: ");
        scanf("%s", p->ISBN);
        insert_tail(&head, p);
        printf("还有下一个吗？[y/N]");
        getchar();
        if (getchar() != 'y') {
            break;
        }
    } while (1);
    printf("\n储存的信息：\n");
    for (Book* p = head.next; p != &head; p = p->next) {
        printf("name: %s\n", p->name);
        printf("author: %s\n", p->author);
        printf("ISBN: %s\n", p->ISBN);
    }
}

void insert_tail(Book* head, Book* new_node) {
    head->prev->next = new_node;
    new_node->prev = head->prev;
    head->prev = new_node;
    new_node->next = head;
}
