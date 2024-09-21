import { Library } from "./Library";
import { Book } from "./Book";
import { Member } from "./Member";

const library = new Library();

// FIXME: Add books to the library
const book1 = new Book(
  "The Great Gatsby",
  "F. Scott Fitzgerald",
  "9780743273565"
);
const book2 = new Book(
  "1984",
  "George Orwell",

  "9780451524935"
);
library.addBook(book1);
library.addBook(book2);

// Add members to the library
const member1 = new Member("John Doe");
library.addMember(member1);

// Borrow a book
member1.borrowBook(book1);

// Try to borrow the same book again
member1.borrowBook(book1);

// Return the book
member1.returnBook(book1);

// List available books
library.listAvailableBooks();

// List library members
library.listMembers();
