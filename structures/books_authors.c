#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char name[100];
    int authorid;
    char publishdate[100];
};

struct Author {
    int id;
    char name[100];
};

int find_max_book_length(struct Book books[], int n) {
    int max = strlen(books[0].name);
    int len;
    for (int i = 0; i < n; i++) {
        len = strlen(books[i].name);
        if (len > max) {
            max = len;
        }
    }
    return max;
}

void read_book_values(struct Book *book, int num) {
    printf("Enter book %d's ID:\n", num);
    scanf("%d", &book->id);
    printf("Enter book %d's name:\n", num);
    getchar();
    gets(book->name);
    printf("Enter book %d's author's ID:\n", num);
    scanf("%d", &book->authorid);
    printf("Enter book %d's publish date:\n", num);
    getchar();
    gets(book->publishdate);
}

void read_author_values(struct Author *author, int num) {
    printf("Enter author %d's ID:\n", num);
    scanf("%d", &author->id);
    getchar();
    printf("Enter author %d's name:\n", num);
    gets(author->name);
}

int main() {
    int N_BOOKS, N_AUTHORS;
    printf("Enter no. of books: ");
    scanf("%d", &N_BOOKS);

    printf("Enter no. of authors: ");
    scanf("%d", &N_AUTHORS);

    struct Book books[N_BOOKS];
    struct Author authors[N_AUTHORS];

    for (int i = 0; i < N_BOOKS; i++) {
        read_book_values(&books[i], i+1);
    }
    for (int i = 0; i < N_AUTHORS; i++) {
        read_author_values(&authors[i], i+1);
    }

    int max_book_length = find_max_book_length(books, N_BOOKS);
    int diff_length;
    printf("\nBooks:\n\n");
    for (int i = 0; i < N_BOOKS; i++) {
        printf("%d | %s", books[i].id, books[i].name);
        diff_length = max_book_length - strlen(books[i].name);
        for (int j = 0; j < diff_length; j++) {
            printf(" ");
        }
        printf(" | %d | %s\n", books[i].authorid, books[i].publishdate);
    }

    printf("\nAuthors:\n\n");

    for (int i = 0; i < N_AUTHORS; i++) {
        printf(
            "%d\t | %s\n",
            authors[i].id,
            authors[i].name
        );
    }

    printf("\nAnswer a:\n");
    for (int i = 0; i < N_BOOKS; i++) {
        for (int j = 0; j < N_AUTHORS; j++) {
            if (!strcmp(authors[j].name, "J.K. Rowling") && books[i].authorid == authors[j].id) {
                printf("%d | %s\n", books[i].id, books[i].name);
            }
        }
    }

    printf("\nAnswer b:\n");
    for (int i = 0; i < N_BOOKS; i++) {
        for (int j = 0; j < N_AUTHORS; j++) {
            if (!strcmp(books[i].name, "On the Origin of Species") && books[i].authorid == authors[j].id) {
                printf("%s\n", authors[j].name);
                break;
            }
        }
    }

    printf("\nAnswer c:\n");
    for (int i = 0; i < N_BOOKS; i++) {
        for (int j = 0; j < N_AUTHORS; j++) {
            if (strcmp(books[i].publishdate, "2000") < 0 && books[i].authorid == authors[j].id) {
                printf(
                    "%s - By %s, published on %s\n",
                    books[i].name,
                    authors[j].name,
                    books[i].publishdate
                );
                break;
            }
        }
    } 

    return 0;
}