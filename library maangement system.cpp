#include <iostream>
#include <string>

const int MAX_BOOKS = 100;

class Book {
public:
    std::string title;
    std::string author;
    int quantity;
    float price;

    // Default constructor
    Book() : quantity(0), price(0.0) {}

    // Parameterized constructor
    Book(const std::string& t, const std::string& a, int q, float p) : title(t), author(a), quantity(q), price(p) {}

    // Function to display book details
    void displayDetails() const {
        std::cout << "Title: " << title << " Author: " << author
                  << " Quantity: " << quantity << " Price: " << price << std::endl;
    }

    // Function to borrow a book
    void borrow() {
        if (quantity > 0) {
            quantity--;
            std::cout << "You borrowed: " << title << std::endl;
        } else {
            std::cout << "Book is out of stock" << std::endl;
        }
    }

    // Function to return a book
    void returnBook() {
        quantity++;
        std::cout << "Thank you for returning." << std::endl;
    }
};

class Library {
private:
    Book books[MAX_BOOKS];
    int numBooks;

public:
    // Default constructor
    Library() : numBooks(0) {}

    // Function to add a book
    void addBook() {
        if (numBooks < MAX_BOOKS) {
            std::string title, author;
            int quantity;
            float price;

            std::cout << "Enter book name: ";
            std::cin.ignore();
            std::getline(std::cin, title);

            std::cout << "Enter Author name: ";
            std::getline(std::cin, author);

            std::cout << "Enter quantity of books: ";
            std::cin >> quantity;

            std::cout << "Enter book price: ";
            std::cin >> price;

            books[numBooks] = Book(title, author, quantity, price);
            std::cout << "Book added to the library!" << std::endl;
            numBooks++;
        } else {
            std::cout << "Library is full. Cannot add more books." << std::endl;
        }
    }

    // Function to list all books
    void listAllBooks() const {
        for (int i = 0; i < numBooks; i++) {
            books[i].displayDetails();
        }
    }

    // Function to borrow a book
    void borrowBook() {
        std::string borrowTitle;
        std::cout << "Enter book title you want to borrow: ";
        std::cin.ignore();
        std::getline(std::cin, borrowTitle);

        for (int i = 0; i < numBooks; i++) {
            if (books[i].title == borrowTitle) {
                books[i].borrow();
                return;
            }
        }

        std::cout << "Book with this title not found" << std::endl;
    }

    // Function to return a book
    void returnBook() {
        std::string returnTitle;
        std::cout << "Enter book title you want to return: ";
        std::cin.ignore();
        std::getline(std::cin, returnTitle);

        for (int i = 0; i < numBooks; i++) {
            if (books[i].title == returnTitle) {
                books[i].returnBook();
                return;
            }
        }

        std::cout << "Book not found" << std::endl;
    }
};

int main() {
    Library library;

    while (true) {
        std::cout << "----------------------------------------------------------" << std::endl;
        std::cout << "----------Welcome to Library Management System------------" << std::endl;
        std::cout << "----------------------------------------------------------\n" << std::endl;
        std::cout << "1: Add book" << std::endl;
        std::cout << "2: List all books" << std::endl;
        std::cout << "3: Borrow a book" << std::endl;
        std::cout << "4: Return book" << std::endl;
        std::cout << "5: Quit" << std::endl;

        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.listAllBooks();
                break;
            case 3:
                library.borrowBook();
                break;
            case 4:
                library.returnBook();
                break;
            case 5:
                return 0;
            default:
                std::cout << "Invalid number!" << std::endl;
        }
    }

    return 0;
}
