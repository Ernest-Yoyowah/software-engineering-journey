import { Book } from "./Book";

export class Member {
  private name: string;
  private borrowedBooks: Book[];

  constructor(name: string) {
    this.name = name;
    this.borrowedBooks = [];
  }
}
