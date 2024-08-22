import { Book } from "./Book";
import { Member } from "./Member";

export class Library {
  private books: Book[];
  private members: Member[];

  constructor() {
    this.books = [];
    this.members = [];
  }

  addBook(book: Book): void {
    this.books.push(book);
    console.log(`${book.getInfo()} added to the library.`);
  }

  addMember(member: Member): void {
    this.members.push(member);
    console.log(`${member.name} has been added as a member.`);
  }
}
