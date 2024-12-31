#include<stdio.h>
#include<string.h>

    //Store book information
typedef struct
{
    char name[50];
    char author[50];
    int id;
    double price;
}
  BookInfo;

int main()
{
    int n;
    printf("             <<<<<<<<<<<<< BOOK INFO >>>>>>>>>>>>>>>>\n");
    printf("           ---------------------------------------------\n\n");
    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    //Check if the number of books is within a reasonable range
    if(n <= 0 || n > 100)
    {
        printf("Please enter a valid number of books(between 1 and 100).\n");
        return 1;
    }

           //Array for books
    BookInfo books[n];

          //Book details
    for(int i=0; i<n; i++)
    {
        printf("\nEnter details for book %d (Name, Author, ID, Price):\n", i+1);
        fgets(books[i].name, 50, stdin);
        books[i].name[strcspn(books[i].name, "\n")] = '\0'; //Remove newline

        fgets(books[i].author, 50, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';
        scanf("%d%lf", &books[i].id, &books[i].price);

      getchar();
    }

        //Save book info to file
    FILE *file = fopen("input.txt", "w");
    for(int i=0; i<n; i++)
    {
       fprintf(file, "%s,%s,%d,%.2f\n", books[i].name, books[i].author, books[i].id, books[i].price);
    }
        fclose(file);

             //Read books from file
    file = fopen("input.txt", "r");
    BookInfo loadedBooks[n];

    int count=0;
    while(fscanf(file, "%[^,],%[^,],%d,%lf\n", loadedBooks[count].name, loadedBooks[count].author, &loadedBooks[count].id, &loadedBooks[count].price) != EOF)
    {
       count++;
    }
    fclose(file);

        //Display all books
    printf("Books available:\n");
    for(int i=0; i<count; i++)
    {
       printf("Name: %s, Author: %s, ID: %d\n", loadedBooks[i].name, loadedBooks[i].author, loadedBooks[i].id);
    }

         //Find book with the lowest price
    int m = 0;
    for(int i=1; i<count; i++)
    {
        if(loadedBooks[i].price < loadedBooks[m].price)
        {
          m = i;
        }
    }
    printf("Lowest price book: %s by %s (Price: %.3f)\n", loadedBooks[m].name, loadedBooks[m].author, loadedBooks[m].price);

         //Create file for books by Charles Dickens
    file = fopen("charles_books.txt", "w");
    for(int i=0; i<count; i++)
    {
        if(strcmp(loadedBooks[i].author, "Charles Dickens") == 0)
        {
           fprintf(file, "%s\n", loadedBooks[i].name);
        }
    }
        fclose(file);

         //Create file for books not by Charles Dickens
    file = fopen("non_charles_books.txt", "w");
    for(int i=0; i<count; i++)
    {
        if(strcmp(loadedBooks[i].author, "Charles Dickens") != 0)
        {
           fprintf(file, "%s\n", loadedBooks[i].name);
        }
    }
       fclose(file);

 return 0;
}
