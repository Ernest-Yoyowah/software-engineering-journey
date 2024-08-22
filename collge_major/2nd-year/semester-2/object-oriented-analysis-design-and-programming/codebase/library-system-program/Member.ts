import { Book } from "./Book";

export class Member {
  private name: string;
  private borrowedBooks: Book[];

  constructor(name: string) {
    this.name = name;
    this.borrowedBooks = [];
  }

  borrowBook(book: Book): void {
    if (book.getAvailability()) {
      book.borrow();
      this.borrowedBooks.push(book);
    } else {
      console.log(`${book.getInfo()} is currently unavailable.`);
    }
  }
}
