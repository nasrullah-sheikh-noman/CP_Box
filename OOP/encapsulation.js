class Person {
  #monthlySalary;
  #noOfMonths;
  #birthday;

  constructor(name, months, birthday, salary) {
    this.name = name;
    this.#noOfMonths = months;
    this.#birthday = birthday;
    this.#monthlySalary = salary;
  }

  calculatAge() {
    const diff = Date.now() - new Date(this.#birthday);
    const date = new Date(diff);
    return date.getUTCFullYear()-1970;
  }

  getSalary() {
    return (this.#monthlySalary*this.#noOfMonths);
 }
}

const noman = new Person ("noman", 12, "6-1-22", 1000);

console.log(noman.calculatAge());
console.log(noman.getSalary());
console.log(noman.noOfMonths);
