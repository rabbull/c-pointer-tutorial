#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct Book {
    char name[16];
    char author[16];
    char ISBN[14];

    LIST_ENTRY(Book) books;
};

int main() {
    LIST_HEAD(Book) book_head
                        = LIST_HEAD_INITIALIZER();
    LIST_INIT(&book_head);
    struct Book *new_book = NULL, *last_inserted_book = NULL;

    do {
        new_book = malloc(sizeof(struct Book));
        scanf("%s %s %s", new_book->name, new_book->author, new_book->ISBN);
        if (last_inserted_book)
            LIST_INSERT_AFTER(last_inserted_book, new_book, books);
        else
            LIST_INSERT_HEAD(&book_head, new_book, books);
        last_inserted_book = new_book;

        printf("next? [y/N] ");
        getchar();
        if ('y' == getchar()) {
            continue;
        } else break;
    } while (1);

    struct Book* p;
    LIST_FOREACH(p, &book_head, books) {
        printf("%s\t%s\t%s\n", p->name, p->author, p->ISBN);
        LIST_REMOVE(p, books);
        free(p);
    }
}
