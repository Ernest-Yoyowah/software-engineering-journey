export class Member {
  private name: string;
  private borrowedBooks: Book[];

  constructor(name: string) {
    this.name = name;
    this.borrowedBooks = [];
  }

  getName(): string {
    return this.name;
  }

  borrowBook(book: Book): void {
    if (book.getAvailability()) {
      book.borrow();
      this.borrowedBooks.push(book);
    } else {
      console.log(`${book.getInfo()} is currently unavailable.`);
    }
  }

  returnBook(book: Book): void {
    const index = this.borrowedBooks.indexOf(book);
    if (index > -1) {
      book.returnBook();
      this.borrowedBooks.splice(index, 1);
    } else {
      console.log(`${this.name} hasn't borrowed ${book.getInfo()}.`);
    }
  }

  getBorrowedBooks(): string[] {
    return this.borrowedBooks.map((book) => book.getInfo());
  }
}
