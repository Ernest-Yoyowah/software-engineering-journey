export class Book {
  private title: string;
  private author: string;
  private isbn: string;
  private isAvailable: boolean;

  constructor(title: string, author: string, isbn: string) {
    this.title = title;
    this.author = author;
    this.isbn = isbn;
    this.isAvailable = true;
  }

  borrow(): void {
    if (this.isAvailable) {
      this.isAvailable = false;
      console.log(`${this.title} has been borrowed.`);
    } else {
      console.log(`${this.title} is not available.`);
    }
  }

  returnBook(): void {
    this.isAvailable = true;
    console.log(`${this.title} has been returned.`);
  }
}
