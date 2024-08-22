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
    console.log(`${member.getName()} has been added as a member.`);
  }

  listAvailableBooks(): void {
    console.log("Available books:");
    this.books.forEach((book) => {
      if (book.getAvailability()) {
        console.log(book.getInfo());
      }
    });
  }

  listMembers(): void {
    console.log("Library members:");
    this.members.forEach((member) => console.log(member.getName()));
  }
}
