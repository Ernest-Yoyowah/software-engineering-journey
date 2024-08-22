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
}
